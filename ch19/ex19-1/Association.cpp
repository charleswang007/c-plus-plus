/*
範例檔名：Association.cpp
程式開發：郭尚君
*/

#include <iostream>
using namespace std;

class Tire { //定義輪胎類別
private:
	char size[10]; //輪胎尺寸

public:
	Tire(char * i_size){ //建構子
		strcpy(size, i_size);
	}

	void showData(){ //輸出輪胎物件的資料
		cout << "\t\t size :" << size << endl;
	}
};

class Car { //定義汽車類別
private:
	Tire ** Tires; //汽車使用的輪胎物件
	int intTireNum; //輪胎的個數
	char brand[20]; //汽車的廠牌

public:

	Car(char* ibrand, Tire** aryTires, int iTireNum){ //建構子
		strcpy(brand, ibrand);
		Tires = aryTires;
		intTireNum = iTireNum;
	}

	void showData(){ //輸出汽車物件的資料
		cout << "Output Car object data ------" << endl;
		cout << "\tbrand : "<< brand << endl;

		for(int i=0; i< intTireNum; i++){ 
			(*(Tires+i))->showData(); //輸出使用之輪胎物件
		}
	}

};

class Eye { //定義眼睛類別
private:
	char color[10]; //眼睛的顏色
public:
	Eye(char* i_color){ //建構子
		cout << "Initialize Eye object...." << endl;
		strcpy(color, i_color);
	}

	void showData(){ //輸出眼睛物件的資料
		cout << "\t\teye color : " << color << endl;
	}
};

class Person { //定義Person類別
private:
	char name[10]; //姓名
	char sex; //性別
	Eye myEye; //眼睛物件, 以資料成員方式建立組合關係
	Car * myCar; //指向擁有的汽車物件
public:
	Person(char* i_name, char i_sex, char* eyecolor) //建構子
		:myEye(eyecolor){ //宣告Person物件時, Eye物件同時建立
		cout << "Initialize Person object...." << endl;
		strcpy(name, i_name);
		sex = i_sex;
	}
 
	void setCar(Car* aCar){ //設定擁有的車子
		myCar = aCar;
	}
	
	void showData(){ //輸出Person物件的資料
		cout << endl << endl;
		cout << "Output Person object data ------" << endl;
		cout << "Name : " << name << endl;
		cout << "Sex : " << (sex == 'M'? "Man" : "Female") << endl;

		myEye.showData(); //輸出Eye物件的資料
		cout << endl;

		myCar->showData(); //輸出Car物件的資料
	}
};

int main(){ //程式進入點

	char name[20] = "John", eyecolor[10] = "black";

	Person john(name, 'M', eyecolor); //宣告john為Person物件

	Tire* aryTires[4]; //定義Tire物件陣列

	aryTires[0] = new Tire("235/45/17"); //宣告輪胎物件
	aryTires[1] = new Tire("235/45/17");
	aryTires[2] = new Tire("225/40/17");
	aryTires[3] = new Tire("225/40/17");

	char carbrand[10] = "BMW";
	Car aCar(carbrand, aryTires, sizeof(aryTires)/ sizeof(aryTires[0]));
	//宣告汽車物件時, 將輪胎物件陣列傳入建構子建立聚合關係

	john.setCar(&aCar); //將汽車設定給Person物件, 建立關連關係

	john.showData(); //輸出Person物件的資料

	system("PAUSE");
	return 0;
}