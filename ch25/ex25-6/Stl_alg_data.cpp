/*
範例檔名：stl_alg_data.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h
#include <algorithm>	//載入algorithm標頭檔
#include <vector>

using namespace std; //使用std名稱空間

template <class T>
void print(vector<T> & pri_con)	//用於列印容器內容的樣版函數
{
	if(pri_con.empty())	//判別pri_con是否有資料
		cout << "Container is empty!" << endl;
	else{
		typename vector<T>::iterator i;	//宣告指位器

        //利用for迴圈列印container元素
		for(i = pri_con.begin(); i != pri_con.end(); i++)
		{ cout << *i << " "; }	//利用指位器取得container內的元素
		cout << endl;
	}
}

int main()
{
	vector<char> v1(10); //宣告容納10個元素的vector容器
	
	cout << "Fill v1 with 'A'..." << endl;
	fill(v1.begin(), v1.end(), 'A');	//將v1用A填滿
	print(v1);	//輸出vector容器中的元素

	cout << "Copy v2 to v1..." << endl;
	char a[] = {'B','B','B','B'};
	vector<char> v2(a, a+4);

	copy(v2.begin(), v2.end(), v1.begin() + 2);
 	//將v2複製到v1第二個元素之後
	print(v1);

	cout << "Remove 'A' from v1..." << endl;
	vector<char>::iterator new_end;
	new_end = remove(v1.begin(), v1.end(), 'A'); //將v1裡的A移除
	v1.erase(new_end, v1.end()); //刪除v1中的元素
	print(v1);

	cout << "Replace 'B' with 'C'..." << endl;
	replace(v1.begin(), v1.begin()+2, 'B', 'C');
    //將v1中前兩個B置換成C
	print(v1);

    system("PAUSE");
    return 0;
} //主程式結束
