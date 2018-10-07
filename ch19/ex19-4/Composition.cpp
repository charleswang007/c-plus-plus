/*
範例檔名：composition.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstring> //在std命名空間內載入C語言的string.h
using namespace std; //使用std命名空間

class person
{
protected:
	char last_name[5]; //姓氏
	char first_name[15]; //名字
public:
	//建構子，設定物件姓名
	person(const char * l_name, const char * f_name)
	{
		strcpy(last_name, l_name);
		strcpy(first_name, f_name);
	}
	person() { }

	//輸出姓名
	void show_data(){ cout << first_name << " " << last_name; }
};

//以public方式虛擬繼承person類別
class father : public virtual person
{
public:  
	//建構子，設定物件姓名
	father(const char * last_name, const char * first_name)
						: person(last_name, first_name) {}
	father() { }
	char * get_last_name() { return last_name;} //輸出姓氏
};

//以publice方式虛擬繼承person類別
class mother : public virtual person
{
public:  
	//建構子，設定物件姓名
	mother(const char * last_name, const char * first_name)
							: person(last_name, first_name) {}
	mother() { }
};

//定義類別以public方式多重繼承於father類別與mother類別
class child : public father, public mother
{
private: //宣告資料成員
	father & my_father; //child物件的father物件
	mother & my_mother; //child物件的mother物件
public:      
	//建構子，設定child物件姓名與父母物件指標
	child(father &, mother &, const char * );

	void show_data(); //輸出姓名與父母親的資料
};

child::child(father & a_father, mother & a_mother, const char * name)
				: my_father(a_father), my_mother(a_mother)
{
	strcpy(last_name, a_father.get_last_name());
	//設定虛擬繼承自person類別的last_name資料成員

	strcpy(first_name, name);
	//設定虛擬繼承自person類別的first_name資料成員
}

void child::show_data() //輸出姓名與父母親的資料
{
	person::show_data(); //呼叫虛擬繼承自person類別的show_data()成員函數
}

class family
{
private:
	father & a_father; //儲存father物件的參考
	mother & a_mother; //儲存mother物件的參考
	child ** child_list; //child類別的物件指標陣列
	int child_num; //有幾個小孩
public: //建構子
	family(father & a_father, mother & a_mother
                                    , child ** a_child_list, int num)
			: a_father(a_father), a_mother(a_mother), child_num(num)
	{
		child_list = new child * [child_num];
		//配置物件指標陣列記憶體空間

		for (int i = 0; i < child_num; i++) //設定物件指標陣列
			child_list[i] = *(a_child_list + i);
	}

	void show_family_mem() //顯示家庭成員的資料
	{
		cout << "Father is ";
		a_father.show_data(); //顯示父親的名字
		cout << "." << endl << "Mother is ";
		a_mother.show_data(); //顯示母親的名字
		cout << "." << endl << "There are " << child_num
			 << " children." << endl << "They are ..." << endl;

		for (int i = 0; i < child_num; i++) //顯示小孩的資料
		{
			child_list[i]->show_data();
			cout << endl;
		}
	}

	~family() { delete child_list; } //解構子，刪除動態配置的記憶體
};

int main() //主程式開始
{
	father a_father("Kuo", "John");
	mother a_mother("Lin","Mary");
	child *  children[2]; //宣告物件指標陣列

	//設定物件指標陣列
	children[0] = new child(a_father, a_mother, "Joe");
	children[1] = new child(a_father, a_mother, "Mary");

	family a_family(a_father, a_mother, children,2);
	//宣告family物件

	a_family.show_family_mem(); //顯示家庭成員的資料

	system("PAUSE");
	return 0;
} //主程式結束
