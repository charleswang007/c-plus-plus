/*
範例檔名：ass_era.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <string> //載入定義sring類別的標頭檔
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

int main()
{
	string s1, s2;

	s1 = "string";	//將字串指派給字串物件

	s2.assign(s1);	//將s1指派給s2，亦可寫成s2 = s1
	cout << "Assign string..." << endl << "s1 : ";
    cout << s1 << "  s2 : " << s2 << endl;

	s2.insert(0,"This isn't a ");	//將"This is a "插入s2中
	cout << "Insert string to s2..." << endl;
    cout << "s2 : " << s2 << endl;

	s2.swap(s1);	//互換s1與s2
	cout << "Swap s1 and s2.." << endl;
    cout << "s1 : " << s1 << "  s2 : " << s2 << endl;

	s1.erase(7, 3);	//將s1字串第8個字元之後的3個字元移除
	cout << "Erase 'This is a ' form s1..." << endl;
    cout << "s1 : " << s1 << endl;

	s1[2] = 'I';	//設定字串的第三個字元
	cout << "s1 : " << s1 << endl;

	cout << "Get substring..." << endl;
	cout << "s[4-5] : "<< s1.substr(5, 2) << endl;
 	//擷取第6個字元後的2個字元

    system("PAUSE");
    return 0;
} //主程式結束
