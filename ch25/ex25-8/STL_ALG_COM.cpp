/*
範例檔名：stl_alg_com.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h
#include <algorithm>
#include <vector>

using namespace std; //使用std名稱空間

int main()
{
	char a[] = {'B','G','C','E'};
	vector<char> v1(a, a+4), v2(a, a+4);	//宣告v1容器
	
	bool result = equal(v1.begin(), v1.end(), v2.begin());
	//比較v1與v2是否相同

	if(result)
		cout << "Two containers are the same !" << endl;
	else
		cout << "Two containers are different !" << endl;

	replace(v2.begin(), v2.end(), 'G', 'H'); //將v2中的G置換成H

	pair<vector<char>::iterator, vector<char>::iterator> diff_elem;
	//宣告一個由兩個vector指位器組成的pair
	diff_elem = mismatch(v1.begin(), v1.end(), v2.begin());
    //比對兩者不一樣的地方
	cout << "v1 :" << *(diff_elem.first) << "  v2 : "
         << *(diff_elem.second) << endl;
	//輸出兩字串不同的地方

    system("PAUSE");
    return 0;
} //主程式結束
