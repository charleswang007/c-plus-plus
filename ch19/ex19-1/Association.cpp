/*
�d���ɦW�GAssociation.cpp
�{���}�o�G���|�g
*/

#include <iostream>
using namespace std;

class Tire { //�w�q���L���O
private:
	char size[10]; //���L�ؤo

public:
	Tire(char * i_size){ //�غc�l
		strcpy(size, i_size);
	}

	void showData(){ //��X���L���󪺸��
		cout << "\t\t size :" << size << endl;
	}
};

class Car { //�w�q�T�����O
private:
	Tire ** Tires; //�T���ϥΪ����L����
	int intTireNum; //���L���Ӽ�
	char brand[20]; //�T�����t�P

public:

	Car(char* ibrand, Tire** aryTires, int iTireNum){ //�غc�l
		strcpy(brand, ibrand);
		Tires = aryTires;
		intTireNum = iTireNum;
	}

	void showData(){ //��X�T�����󪺸��
		cout << "Output Car object data ------" << endl;
		cout << "\tbrand : "<< brand << endl;

		for(int i=0; i< intTireNum; i++){ 
			(*(Tires+i))->showData(); //��X�ϥΤ����L����
		}
	}

};

class Eye { //�w�q�������O
private:
	char color[10]; //�������C��
public:
	Eye(char* i_color){ //�غc�l
		cout << "Initialize Eye object...." << endl;
		strcpy(color, i_color);
	}

	void showData(){ //��X�������󪺸��
		cout << "\t\teye color : " << color << endl;
	}
};

class Person { //�w�qPerson���O
private:
	char name[10]; //�m�W
	char sex; //�ʧO
	Eye myEye; //��������, �H��Ʀ����覡�إ߲զX���Y
	Car * myCar; //���V�֦����T������
public:
	Person(char* i_name, char i_sex, char* eyecolor) //�غc�l
		:myEye(eyecolor){ //�ŧiPerson�����, Eye����P�ɫإ�
		cout << "Initialize Person object...." << endl;
		strcpy(name, i_name);
		sex = i_sex;
	}
 
	void setCar(Car* aCar){ //�]�w�֦������l
		myCar = aCar;
	}
	
	void showData(){ //��XPerson���󪺸��
		cout << endl << endl;
		cout << "Output Person object data ------" << endl;
		cout << "Name : " << name << endl;
		cout << "Sex : " << (sex == 'M'? "Man" : "Female") << endl;

		myEye.showData(); //��XEye���󪺸��
		cout << endl;

		myCar->showData(); //��XCar���󪺸��
	}
};

int main(){ //�{���i�J�I

	char name[20] = "John", eyecolor[10] = "black";

	Person john(name, 'M', eyecolor); //�ŧijohn��Person����

	Tire* aryTires[4]; //�w�qTire����}�C

	aryTires[0] = new Tire("235/45/17"); //�ŧi���L����
	aryTires[1] = new Tire("235/45/17");
	aryTires[2] = new Tire("225/40/17");
	aryTires[3] = new Tire("225/40/17");

	char carbrand[10] = "BMW";
	Car aCar(carbrand, aryTires, sizeof(aryTires)/ sizeof(aryTires[0]));
	//�ŧi�T�������, �N���L����}�C�ǤJ�غc�l�إ߻E�X���Y

	john.setCar(&aCar); //�N�T���]�w��Person����, �إ����s���Y

	john.showData(); //��XPerson���󪺸��

	system("PAUSE");
	return 0;
}