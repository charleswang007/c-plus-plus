/*
範例檔名：func_overloading.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstring> //在std名稱空間內載入C語言的string.h
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

class object
{
protected:
	char color[10];
	char type[10];
public:
	object(char * o_type, char * o_color) //建構子
	{
		strcpy(type, o_type);
		strcpy(color, o_color);
	}
};

class shoe : public object
{
private:
	friend class person; //宣告person類別為friend類別
public:
    //建構子
	shoe(char * type, char * color) : object (type, color){}
};

class clothes : public object
{
private:
	friend class person; //宣告person類別為friend類別
public:
	//建構子
	clothes(char * type, char * color) : object (type, color){}
};

class pants : public object
{
private:
	friend class person; //宣告person類別為friend類別
public:
    //建構子
	pants(char * type, char * color) : object (type, color){}
};

class person
{
protected:
	char last_name[5]; //姓氏
	char first_name[15]; //名字
	clothes * my_clothes;
	shoe * my_shoe;
	pants * my_pants;
public:
    //建構子，設定物件姓名
	person(const char * l_name, const char * f_name)
	{
		strcpy(last_name, l_name);
		strcpy(first_name, f_name);
	}
	void wear(shoe & a_shoe) //穿鞋子
	{
		cout << "The wear(shoe & a_shoe) is called." << endl;
		my_shoe = &a_shoe;
	}
	void wear(clothes & a_clothes)	//穿衣服
	{
		cout << "The wear(clothes & a_clothes) is called." << endl;
		my_clothes = &a_clothes;
	}
	void wear(pants & a_pants)	//穿褲子
	{
		cout << "The wear(pants & a_pants) is called." << endl;
		my_pants = &a_pants;
	}
	void show_data()	//顯示person物件的姓名與穿著
	{
		cout << endl << "My name is " << first_name << " "
             << last_name << "." << endl;
		cout << "I wear " << my_clothes->color
             << " " << my_clothes->type;
		cout << ", " << my_pants->color << " "
             << my_pants->type;
		cout << " and " << my_shoe->color << " "
             << my_shoe->type << "." << endl;
	}
};

int main()    //主程式開始
{
	person John("John","Kuo");	//宣告物件
	clothes a_clothes ("T shirt","white");
	pants a_pants ("short","green");
	shoe a_shoe ("gymshoe","blue");

	John.wear(a_clothes);	//呼叫函數
	John.wear(a_pants);
	John.wear(a_shoe);

	John.show_data();

    system("PAUSE");
    return 0;
} //主程式結束
