/*
�d���ɦW�Gconst_cast.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

class ConstCast	//�ŧiConstCast���O
{
private:
	int data;
public:
	ConstCast() { data = 0;}
	int get_data() const;	//�Nget_data�ŧi��const���	
};

int ConstCast::get_data() const
{
	const_cast<ConstCast *>(this)->data += 1;
 	//�Nthis���Ы��A�ഫ��ConstCast *

	return data;
}

int main()			//�D�{���}�l
{
	ConstCast Object;	//�ŧi����

	cout << "Data is " << Object.get_data() << " ." << endl;

    system("PAUSE");
    return 0;
} //�D�{������
