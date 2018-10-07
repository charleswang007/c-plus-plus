/*
範例檔名：com_rep.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <string> //載入定義sring類別的標頭檔
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

void com_res(int);	//輸出字串比較結果

int main()			//主程式開始
{
	string s1("string"), s2("String");

	cout << "Using comparsion operator..." << endl;
	if (s1 > s2)	//使用比較運算子比較大小
		cout << "s1 is after s2!" << endl;
	else if(s1 > s2)
		cout << "s1 is before s2!" << endl;
	else
		cout << "s1 and s2 are the same!" << endl;

	cout << "Compare s1 and s2..." << endl;
	int c = s1.compare(s2);	//比較s1與s2
	com_res(c);

    cout << endl << "Find postion of 'ing' substring in s1 : ";
    cout << s1.find("ing") << endl;
	//尋找字串中ing子字串的位置

	s2.replace(s2.find("tring"), 5, "TRING");
	//將s2的tring五個字元置換為TRING
	cout << endl << "Replace s2's substring(tring) by 'TRING'...";
	cout << endl << "s2 : " << s2 << endl;

    system("PAUSE");
    return 0;
} //主程式結束

void com_res(int result)	//輸出比較結果
{
	if(result == 0)
		cout << "Two strings are the same !" << endl;
	else if(result < 0)
		cout << "s1 is before s2 !" << endl;
	else
		cout << "s1 is after s2 !" << endl;
}
