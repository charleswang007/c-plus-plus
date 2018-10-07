/*
範例檔名：LibraryObject.cpp
程式開發：郭尚君
*/

#include "LibraryObject.h"

//定義建構子
LibraryObject::LibraryObject(int index, const char * name)
: index(index) { SetName(name);}

LibraryObject::LibraryObject (const char * i_name)
{ strcpy(name, i_name);}

LibraryObject::LibraryObject () {}

const char * LibraryObject::GetName ( ) //輸出名稱
{ return name; }

int LibraryObject::GetIndex ( ) { return index; }	//輸出編號

void LibraryObject::ShowData() //輸出資料
{ cout << index << "  " << name << "  ";}

void LibraryObject::SetIndex(int i_index) //設定編號
{ index = i_index; }

void LibraryObject::SetName(const char * i_name) //設定名稱
{ strcpy(name, i_name); }
