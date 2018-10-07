/*
範例檔名：obj_ptr_array.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

class person	//虛擬類別
{
protected:	//宣告屬性
	char name[10];
public:	//宣告方法
	person(char* iname)	//建構子
	{ strcpy(name, iname); }
	virtual ~person()	//虛擬解構子
	{ cout << "~person() is called." << endl; }
	virtual void who_are_you() = 0;	//純虛擬函數
};

class student : public person	//學生類別
{
private:
	char major_in[15];	//主修的科目
public:
	student(char* iname, char* major) : person(iname)	//建構子
	{ strcpy(major_in,major); }

	void who_are_you()	//我是誰
	{
		cout << "My name is " << name << " .";
		//輸出特有資料
		cout << "I major in " << major_in << " !" << endl;
	}
	//解構子
	~student() { cout << "~student() is called." << endl; }
};

class teacher : public person	//老師類別
{
private:
	char teach_for[15];	//所教的課
public:
	teacher(char* iname, char* teach) : person(iname)	//建構子
	{ strcpy(teach_for,teach); }

	void who_are_you()	//我是誰
	{
		cout << "My name is " << name << " .";
		//輸出特有資料
		cout << "I am a " << teach_for << " teacher !" << endl;
	}
	//解構子
	~teacher() { cout << "~teacher() is called." << endl; }
};

int main() //主程式開始
{
	person * pPerArr[5]; //物件指標陣列
	
	//動態產生person的衍生類別物件
	pPerArr[0] = new student("John","mathematics");
	pPerArr[1] = new teacher("Mary","Chinese");
	pPerArr[2] = new teacher("Joe","chemical");
	pPerArr[3] = new student("Bill","physics");
	pPerArr[4] = new teacher("May","English");

	for(int i = 0; i < 5; ++i)
	{
		pPerArr[i]->who_are_you();
		//呼叫物件指標陣列中物件，告訴我們他是誰
		delete pPerArr[i];	//刪除動態配置的記憶體
	}

    system("PAUSE");
    return 0;
} //主程式結束
