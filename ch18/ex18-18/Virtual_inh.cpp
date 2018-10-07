/*
範例檔名：virtual_inh.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstring> //在std名稱空間內載入C語言的string.h
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

class person
{
protected:
	char last_name[5];	//姓氏
	char first_name[15];	//名字
public:
	//建構子，設定物件姓名
	person(const char * l_name, const char * f_name)
	{
		strcpy(last_name, l_name);
		strcpy(first_name, f_name);
	}
	person() { } //預設建構子

	void show_data() //輸出姓名
    { cout << first_name << " " << last_name ; }
};

//以虛擬繼承的方式繼承person類別
class father : public virtual person
{
public:
	//建構子，設定物件姓名
	father(const char * last_name, const char * first_name)
						: person(last_name, first_name) {}
	father() { }
	char * get_last_name() { return last_name;}	//輸出姓氏

};

//以虛擬繼承的方式繼承person類別
class mother : public virtual person
{
public:  
	//建構子，設定物件姓名
	mother(const char * last_name, const char * first_name)
							: person(last_name, first_name) {}
	mother() { }
};

//開始宣告類別
class child : public father, public mother
{
private: //宣告屬性
	father * my_father;	//child物件的father物件
	mother * my_mother;	//child物件的mother物件
public:      
	//建構子，設定child物件姓名與父母物件指標
	child(father &, mother &, const char * );
	void show_data();	//輸出姓名與父母親的資料
};

child::child(father & a_father, mother & a_mother, const char * name)
				: my_father( &a_father), my_mother( &a_mother)
{
	strcpy(last_name, a_father.get_last_name());
	//設定虛擬繼承自person的last_name

	strcpy(first_name, name);
 	//設定虛擬繼承自person的first_name
}

void child::show_data()	//輸出姓名與父母親的資料
{
	cout << "My name is ";
	person::show_data();	//呼叫繼承自person類別的show_data方法
	cout << endl;
	cout << "My father is ";
	my_father->show_data();	//呼叫father物件的show_data方法
	cout << endl;
	cout << "My mother is ";
	my_mother->show_data();	//呼叫mother物件的show_data方法
	cout << endl;
}

int main()    //主程式開始
{
	father a_father("Kuo", "John"); //宣告物件
	mother a_mother("Lin","Mary");
	child a_child(a_father, a_mother, "Joe");

	a_child.show_data(); //輸出child物件的內容

    system("PAUSE");
    return 0;
} //主程式結束
