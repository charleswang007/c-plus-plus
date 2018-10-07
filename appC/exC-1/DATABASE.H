/*
範例檔名：Database.h
程式開發：郭尚君
*/
#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <typeinfo>
#include "LibraryObject.h"
using namespace std;

template <class T>
class Database : public object	//Database繼承於object
{
private:
	fstream File;	//宣告一檔案資料流
	string FileName;	//檔案名稱
	long FileLen, rec_size;	//檔案長度與一筆記錄的大小
	typedef map<string, T, less<string> > mmtype;
 	//定義資料型態名稱mmtype
	mmtype RecMap;	//宣告一個map容器
	int MaxID;	//物件中最大之編號
public:	//成員函數
    //建構子
	Database() ;
	~Database(){SaveMap();}

	void Insert(T &);	//將物件插入容器
	void Delete(string);	//從容器中刪除物件
	T * Query(string);	//查詢容器中的物件
	void InitiMap();	//將檔案中的物件讀入容器中
	void SaveMap();	//將容器中的物件輸出至檔案
	void ShowAllData();	//顯示容器中所有元素的資料
};

template <class T>
Database<T>::Database() : FileName(T::GetFileName())
{
	rec_size = sizeof(T);	//每筆記錄的大小
	InitiMap();	//將檔案中的物件讀入容器
}

template <class T>
void Database<T>::Insert(T & Object)	//將物件插入容器
{
	MaxID++;	//將容器中最大的編號加一
	Object.SetIndex(MaxID);	//設定欲插入物件的編號

	RecMap.insert(mmtype::value_type (Object.GetName(), Object) );		
	//將物件插入容器中
}

template <class T>
T * Database<T>::Query(string ObjName)	//查詢容器中的物件
{
	mmtype::iterator iter;

	iter = RecMap.find(ObjName);	//尋找物件

	if(iter == RecMap.end())	//如果找不到物件則丟出例外
	{	
		string c_name = typeid(T).name();
		int NameLen = c_name.size();
		string s = "Don't find this "
                   + c_name.substr(6, NameLen) + "'s data!\n";
		throw(s);
	}

	return &(iter->second);	//傳回找到的物件
}

template <class T>
void Database<T>::Delete(string ObjName) //從容器中刪除物件
{
	Query(ObjName);	//尋找物件，如果找不到則會丟出例外
	RecMap.erase(ObjName);	//輸入欲刪除物件的名稱
}

template <class T>
void Database<T>::InitiMap()	//將檔案中的物件讀入容器中
{
	fstream File;
	MaxID = 0;		
	
	File.open(FileName.data(), ios::in | ios::binary);

	File.seekg(0, ios::end);	//將檔案指標移向檔案結尾
	FileLen = File.tellg();	//設定檔案長度

	if(FileLen == 0){	//如果檔案大小為0，則關閉檔案
		File.close();
		return;
	}

	T Object;

	File.seekg(0, ios::beg);
		
	do{	//讀取物件，尋找最大物件編號，並插入容器內
		File.read((char *) & Object, rec_size);

		if(Object.GetIndex() > MaxID)
			MaxID = Object.GetIndex();

		RecMap.insert(mmtype::value_type (Object.GetName(), Object) );
	}while(File.tellg() < FileLen);

	File.close();
}

template <class T>
void Database<T>::SaveMap()	//將容器中的物件輸出至檔案
{
	mmtype::const_iterator iter;
	T Object;

	File.open(FileName.data(), ios::out | ios::binary | ios::trunc);
	
	for(iter = RecMap.begin() ; iter != RecMap.end() ; ++iter)
		File.write((char *) & iter->second, rec_size);
     	//將物件寫入檔案

	File.close();
}

template <class T>
void Database<T>::ShowAllData()	//顯示容器中所有元素的資料
{
	mmtype::iterator iter;
	T Object;

	for(iter = RecMap.begin() ; iter != RecMap.end() ; ++iter)
		(iter->second).ShowData();	//顯示物件資料
}
