/*
範例檔名：self_def.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

class Reader //開始定義類別
{
private: //宣告屬性
	char name[5];
	int id;
public:	//宣告方法
	friend ostream & operator<< (ostream & s, Reader & r);
	friend istream & operator>> (istream & s, Reader & r);
	//宣告cin與cout多載的'<<'與'>>'運算子為freind函數
};

//多載cout物件的'<<'運算子
ostream & operator<< (ostream & s, Reader & r)
{
	cout << r.id << " " << r.name;
	return s;
}

//多載cin物件的'>>'運算子
istream & operator>> (istream & s, Reader & r)
{
	cin >> r.id >> r.name;
	return s;
}

int main() //主程式開始
{
	Reader a_Reader;

	cout << "Please input a reader's data : " << endl;
	cin >> a_Reader;	//輸入資料給Reader物件
	cout << "Reader's data : " << a_Reader << endl;
    //輸出Reader物件的資料

    system("PAUSE");
    return 0;
} //主程式結束
