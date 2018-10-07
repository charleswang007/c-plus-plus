/*
範例檔名：class_con.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstring> //在std名稱空間內載入C語言的string.h
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

class centimeter	//宣告公分類別
{
private:
	float cm;	//數量
	static char unit[3];	//定義單位縮寫為類別屬性
	friend class meter;
    //將meter宣告為friend類別，請參考17-10-1節的說明
public:
	centimeter(float cm) : cm(cm) {}	//建構子
	void show_data() { cout << cm << unit << endl; } //顯示資料
};

char centimeter::unit[3] = "cm";	//定義類別屬性的值

class meter	//宣告公尺類別
{
private:
	float m;	//數量
	static char unit[2];	//定義單位縮寫為類別屬性
public:
	meter(float m) : m(m) {}	//建構子
	meter(centimeter cm) : m(cm.cm / 100) {} //型態轉換建構子
	operator centimeter() //型態轉換運算子
    { return centimeter(m*100); }
	void show_data() { cout << m << unit << endl; }	//顯示資料
};

char meter::unit[2] = "m";	//定義類別屬性的值

int main()    //主程式開始
{
	meter my_meter(1.25);	//宣告meter物件
	centimeter my_cm(0);	//宣告centimeter物件

	my_cm = my_meter;	//呼叫型態轉換運算子
		
	my_cm.show_data();	//顯示資料

	meter my_meter_1(my_cm); //呼叫型態轉換建構子

	my_meter_1.show_data();	//顯示資料

    system("PAUSE");
    return 0;
} //主程式結束
