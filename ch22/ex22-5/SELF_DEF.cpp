/*
�d���ɦW�Gself_def.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

class Reader //�}�l�w�q���O
{
private: //�ŧi�ݩ�
	char name[5];
	int id;
public:	//�ŧi��k
	friend ostream & operator<< (ostream & s, Reader & r);
	friend istream & operator>> (istream & s, Reader & r);
	//�ŧicin�Pcout�h����'<<'�P'>>'�B��l��freind���
};

//�h��cout����'<<'�B��l
ostream & operator<< (ostream & s, Reader & r)
{
	cout << r.id << " " << r.name;
	return s;
}

//�h��cin����'>>'�B��l
istream & operator>> (istream & s, Reader & r)
{
	cin >> r.id >> r.name;
	return s;
}

int main() //�D�{���}�l
{
	Reader a_Reader;

	cout << "Please input a reader's data : " << endl;
	cin >> a_Reader;	//��J��Ƶ�Reader����
	cout << "Reader's data : " << a_Reader << endl;
    //��XReader���󪺸��

    system("PAUSE");
    return 0;
} //�D�{������
