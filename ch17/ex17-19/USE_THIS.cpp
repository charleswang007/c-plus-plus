/*
�d���ɦW�Guse_this.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstring> //�bstd�W�٪Ŷ������JC�y����string.h
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

class this_ptr //�}�l�ŧi���O
{
private:       //�ŧi�ݩ�
	long index;
public:        //�ŧi��k
	void show_index()	//��Xindex�ݩ�
	{ cout << "index : " << index << endl; }

    //�]�windex�ݩʡA�öǦ^�@�Ӫ��󪺫���
	this_ptr * set_index(long i_index)
 	{
		index = i_index;
		return this; //�Ǧ^���󥻨�
	}
};

int main() //�D�{���}�l
{
	this_ptr object, * object_ptr;
	
	object_ptr = object.set_index(1);
    //�]�windex�ݩʡA�ó]�wobject_ptr

	cout << "object address : " << &object << endl;
 	//��X���󪺦�}
	cout << "pointer : " << object_ptr << endl;
 	//��X���Ы��V����}��

	object.set_index(2)->show_index();
    //�]�windex�ݩʡA�����index�ݩ�

    system("PAUSE");
    return 0;
} //�D�{������
