/*
範例檔名：dyn_2d_array.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

int main() //主程式開始
{
	int string_size;
	int n, i;		//字串筆數

	cout << "Please string number :" << endl;
	cin >> n;	//讀取欲輸入的筆數

    //第一步、動態宣告一個指向指標陣列的指標
	char **ptr = new char * [n];

	cout << "The value of ptr : " << ptr <<" address : " << &ptr << endl;
    //輸出 ptr 指標的儲存值與記憶體中所佔的位址

	for (i = 0 ; i < n ; i++ ){
		do{
			cout << "Please input the size of string (size > 0) : ";
			cin >> string_size;	//讀入每筆字串的大小

            //如果字串大小小於或等於 0 ，則印出錯誤訊息
			if (string_size <= 0)
				cout << "Error ! The size must be larger than zero !";
                cout << endl << "Input again....." << endl;

		}while (string_size <= 0);
        //若字串大小小於或等於 0 ，則重新執行

		*( ptr+i ) = new char [string_size + 1] ;
		//第二步、為每個指標陣列元素動態配置記憶體空間
		for (int j = 0 ; j < string_size ; j++){
			*(*(ptr + i) + j) = char (65 + j);
           	//將字元(A B C ....) 放進字串
		}

		*(*(ptr + i) + string_size ) = '\0';
        //把 '\0' 放進最後一個元素
	}

	cout << "Address    |  Value" << endl;	//輸出標題列
	cout << "-------------------------" << endl;

	for ( i = 0 ; i < n ; i++ ){
		cout << &ptr[i];  //指標陣列各元素的位址
		cout << " |  " << (void*) ptr[i]  ;
        //強制陣列元素轉型，以輸出指標儲存的位址值
		cout << endl;
	}

	cout << endl << "Address    |  String" << endl;	//輸出標題列
	cout << "-------------------------" << endl;

	for ( i = 0 ; i < n ; i++ ){
		cout << (void*)ptr[i] << " |  " << ptr[i];
        //輸出指標儲存的位址值與指向的字串內容
		cout << endl;
	}

    for ( i = 0 ; i < n ; i++ ){
		delete [] ptr[i];	//釋放指標陣列指向的記憶體空間
	}
	delete [] ptr;	//釋放指標陣列所佔的記憶體空間

    system("PAUSE");
    return 0;
} //主程式結束
