/*
範例檔名：const_cast.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

class ConstCast	//宣告ConstCast類別
{
private:
	int data;
public:
	ConstCast() { data = 0;}
	int get_data() const;	//將get_data宣告為const函數	
};

int ConstCast::get_data() const
{
	const_cast<ConstCast *>(this)->data += 1;
 	//將this指標型態轉換為ConstCast *

	return data;
}

int main()			//主程式開始
{
	ConstCast Object;	//宣告物件

	cout << "Data is " << Object.get_data() << " ." << endl;

    system("PAUSE");
    return 0;
} //主程式結束
