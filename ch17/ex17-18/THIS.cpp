/*
�d���ɦW�Gthis.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstring> //�bstd�W�٪Ŷ������JC�y����string.h
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

class this_ptr           //�}�l�ŧi���O
{
private:       //�ŧi�ݩ�
	long index;
public:        //�ŧi��k
	void show_address()		//��Xthis����
	{ cout << "The address of 'this' pointer : " << this <<endl;}
};

int main()    //�D�{���}�l
{
	this_ptr object;

	cout << "The address of object : " << &object << endl;
 	//��X���󪺦�}
	object.show_address();		//���this���Ы��V����}

    system("PAUSE");
    return 0;
} //�D�{������
