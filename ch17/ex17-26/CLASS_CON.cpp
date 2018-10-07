/*
�d���ɦW�Gclass_con.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstring> //�bstd�W�٪Ŷ������JC�y����string.h
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

class centimeter	//�ŧi�������O
{
private:
	float cm;	//�ƶq
	static char unit[3];	//�w�q����Y�g�����O�ݩ�
	friend class meter;
    //�Nmeter�ŧi��friend���O�A�аѦ�17-10-1�`������
public:
	centimeter(float cm) : cm(cm) {}	//�غc�l
	void show_data() { cout << cm << unit << endl; } //��ܸ��
};

char centimeter::unit[3] = "cm";	//�w�q���O�ݩʪ���

class meter	//�ŧi�������O
{
private:
	float m;	//�ƶq
	static char unit[2];	//�w�q����Y�g�����O�ݩ�
public:
	meter(float m) : m(m) {}	//�غc�l
	meter(centimeter cm) : m(cm.cm / 100) {} //���A�ഫ�غc�l
	operator centimeter() //���A�ഫ�B��l
    { return centimeter(m*100); }
	void show_data() { cout << m << unit << endl; }	//��ܸ��
};

char meter::unit[2] = "m";	//�w�q���O�ݩʪ���

int main()    //�D�{���}�l
{
	meter my_meter(1.25);	//�ŧimeter����
	centimeter my_cm(0);	//�ŧicentimeter����

	my_cm = my_meter;	//�I�s���A�ഫ�B��l
		
	my_cm.show_data();	//��ܸ��

	meter my_meter_1(my_cm); //�I�s���A�ഫ�غc�l

	my_meter_1.show_data();	//��ܸ��

    system("PAUSE");
    return 0;
} //�D�{������
