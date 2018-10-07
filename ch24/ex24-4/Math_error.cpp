/*
範例檔名：math_error.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <string> //載入定義sring類別的標頭檔
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

class MathErrorExcp	//錯誤處理類別
{
private:
	string err_msg;	//錯誤訊息
public:
    MathErrorExcp(const char * msg) : err_msg(msg) { }	//建構子
	const string what() {  return err_msg; }	//傳出錯誤訊息
};

int main() //主程式開始
{
	int x,y;

	try{	//錯誤偵測區塊
		cout << "Please input two integer for find modulus :" << endl;
		cin >> x >> y;	//讀取資料

		if(y == 0)	//被除數是否為零
			throw MathErrorExcp("Derive by Zero !\n");	//丟出例外物件
		else if (!cin.good())	//檢查資料流輸入是否產生錯誤
			throw ("Not integer!");	//丟出字串

		throw (1);	//丟出其他例外
	}
	//錯誤處理區塊
	catch(MathErrorExcp e) { cerr << e.what();}	//處理例外物件
	catch(const char * s) { cerr << s << endl;}	//處理字串例外
	catch (...) {cout << "Modulus : " << x % y << endl; }
 	//處理其他例外

	cout << "After running try-throw-catch!" << endl;
 	//完成try-throw-catch後，繼續執行

    system("PAUSE");
    return 0;
} //主程式結束
