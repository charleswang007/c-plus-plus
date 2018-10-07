/*
範例檔名：typename.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <typeinfo> //載入定義typeid()的typeinfo標頭檔 

using namespace std; //使用std名稱空間

template <typename TYPE>
class ClassA {
public:
	typedef TYPE TypeI; //相依型別名稱 (dependent type name)
	typedef int TypeII; //獨立型別名稱 (independent type name)
};

template <typename ClassA> //以 template class 做為型別參數
class ClassB {
public:
	typedef typename ClassA::TypeI TypeIII;
	//運用 typename 定義巢狀型別名稱 (nested dependent type name)	
	
	typename ClassA::TypeI * ptrClassATypeI;
	//避免編譯器混淆而必須使用typename 
};

int main()
{
	ClassB<ClassA<int> >::TypeIII i;
	//宣告i為ClassB<ClassA<int> >::TypeIII 型別 
	
	int j;
	
	if ( typeid(i) == typeid(j) ) //如判斷i的型別是否為int 
		cout << "i and j are the same type!" << endl; //輸出比較結果        
       
	system("PAUSE"); //暫停程式執行
	return 0;//程式正常結束，傳回0
}
