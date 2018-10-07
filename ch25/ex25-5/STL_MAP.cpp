/*
範例檔名：stl_map.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h
#include <string>
#include <map>	//載入map標頭檔

using namespace std; //使用std名稱空間

int main()	//主程式開始
{
	typedef map<string, string, less<string> > map_type;
	//利用typedef定義新的型態

	map_type m;	//宣告容器
	map_type::iterator iter; //宣告指位器

	//插入資料
	m.insert(map_type::value_type("John","A senior high school student."));
	m.insert(map_type::value_type("Mary","A senior high school teacher."));
	m.insert(map_type::value_type("Bill","A junior high school student."));

	for(iter = m.begin(); iter != m.end(); iter++)
		cout << (*iter).first << ", " << (*iter).second << endl;
		//輸出關鍵值與對應之資料

    system("PAUSE");
    return 0;
} //主程式結束
