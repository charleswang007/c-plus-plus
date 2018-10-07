/*
範例檔名：dyna_bending.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstring> //在std名稱空間內載入C語言的string.h
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

class person;	//類別的前置宣告一

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
	object() {}
	virtual void set_object(person & a_person)	//虛擬函數
	{
        cout << "The set_object(person & a_person)"
             << " of object is called!" << endl;
    }
};

class clothes;	//類別的前置宣告二
class pants;
class shoe;

class person
{
protected:
	char last_name[5]; //姓氏
	char first_name[15]; //名字
	clothes * my_clothes; //以物件指標建立person物件與其他物件的關係
	shoe * my_shoe;
	pants * my_pants;
	friend class clothes;	//宣告朋友函數
	friend class shoe;
	friend class pants;
public:
    //建構子，設定物件姓名
	person(const char * l_name, const char * f_name)
	{
		strcpy(last_name, l_name);
		strcpy(first_name, f_name);
	}
	void wear(object & object)
	{
		cout << "The wear(object & object) of person is called!";
        cout << endl;
		object.set_object(*this);	//呼叫虛擬函數
	}
	void show_data();	//顯示person物件的姓名與穿著
};

class shoe : public object
{
private:
	friend class person;	//宣告person類別為friend類別
public:
	//建構子
	shoe(char * type, char * color) : object (type, color){}
	void set_object(person & a_person)	//虛擬函數
	{
		cout << "The set_object() of shoe is called!";
        cout << endl << endl;

		a_person.my_shoe = this;
	    //將自己設定給傳遞過來的person物件的my_clothes屬性
    }
};

class clothes : public object
{
private:
	friend class person; //宣告person類別為friend類別
public:
	//建構子
	clothes(char * type, char * color) : object (type, color){}
	void set_object(person & a_person)	//虛擬函數
	{
		cout << "The set_object() of clothes is called!";
        cout << endl << endl;
		a_person.my_clothes = this;	
		//將自己設定給傳遞過來的person物件的my_clothes屬性
    }
};

class pants : public object
{
private:
	friend class person;	//宣告person類別為friend類別
public:
	//建構子
	pants(char * type, char * color) : object (type, color){}

	void set_object(person & a_person)	//虛擬函數
	{
		cout << "The set_object() of pants is called!";
        cout << endl << endl;
		a_person.my_pants = this;
	}				//將自己設定給傳遞過來的person物件的my_clothes屬性
};

//顯示person物件的姓名與穿著
//因為使用clothes、shoe與pants物件，所以必須在此處宣告
void person::show_data()
{
	cout << endl << "My name is " << first_name
         << " " << last_name << "." << endl;
	cout << "I wear " << my_clothes->color << " " << my_clothes->type;
	cout << ", " << my_pants->color << " " << my_pants->type;
	cout << " and " << my_shoe->color << " "
         << my_shoe->type << "." << endl;
}

int main()    //主程式開始
{
	person John("John","Kuo");	//宣告物件
	object a_object;
	clothes a_clothes ("T shirt","white");
	pants a_pants ("short","green");
	shoe a_shoe ("gymshoe","blue");

	cout << "The first testing......." << endl;	//第一個測試
	John.wear(a_object);	//呼叫函數
	cout << endl << endl;
    cout << "The second testing......." << endl; //第二個測試
	John.wear(a_clothes);	//呼叫函數
	John.wear(a_pants);
	John.wear(a_shoe);

	John.show_data();

    system("PAUSE");
    return 0;
} //主程式結束
