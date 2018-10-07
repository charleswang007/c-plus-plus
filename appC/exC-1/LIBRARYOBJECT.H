/*
範例檔名：LibraryObject.h
程式開發：郭尚君
*/

#ifndef _LIBRARYOBJECT_H_
#define _LIBRARYOBJECT_H_

#include <iostream>
using namespace std;

class object{};	//定義object類別

class LibraryObject : public object
{
protected:
	int index;	//編號
	char name[20];	//名稱
public:	//成員函數
	LibraryObject (int index, const char * name);
	LibraryObject (const char * i_name);
	LibraryObject ();
	const char * GetName ( );	//輸出名稱
	int GetIndex ( );//輸出編號
	virtual void ShowData();//輸出資料
	void SetIndex(int i_index);//設定編號
	void SetName(const char * i_name);//設定名稱
};
#endif // of _LIBRARYOBJECT_H_
