/*
範例檔名：class_pre_dec.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstring> //在std名稱空間內載入C語言的string.h
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

class wife;		//類別的前置宣告

class husband
{
private:
	char name[10];	
	wife * my_wife;	//利用物件指標建立與wife物件的婚姻關係
public:
	//建構子
	husband(const char * i_name) { strcpy(name, i_name); }
	const char * my_name(){ return name;}

 /*因為下面兩個成員函數中使用了wife物件的成員，故只能先宣告
	函數原型，函數內容必須等到完成wife宣告後才能定義*/
	void wife_is();
	void marry_me(wife &);
};

class wife
{
private:
	char name[10];
	husband * my_husband;	//利用物件指標建立與husband物件的婚姻關係
public:
    //建構子
	wife(const char * i_name) { strcpy(name, i_name); }
	void husband_is()	//我的老公是...
	{ cout << "My husband is " << my_husband->my_name() << "." << endl;}
	void get_married(husband * a_husband)	//嫁人
	{ my_husband = a_husband;}	//建立婚姻關係
	const char * my_name(){ return name;}
};

//husband類別wife_is與marry_me成員函數的內容
void husband::wife_is()	//我的老婆是...
{ cout << "My wife is " << my_wife->my_name() << "." << endl;}

void husband::marry_me(wife & a_wife)	//求婚
{
	my_wife = &a_wife;	//建立與wife物件的婚姻關係
	my_wife->get_married(this);
}

int main()
{
	husband Romeo("Romeo");	//定義物件
	wife Juliet("Juliet");

	Romeo.marry_me(Juliet);	//羅密歐向茱麗葉求婚

	cout << "Juliet say : ";
	Juliet.husband_is();	//茱麗葉答應了！！

	cout << "Romeo yells happily : ";	//羅密歐高興得大喊！	
	Romeo.wife_is();	

    system("PAUSE");
    return 0;
} //主程式結束
