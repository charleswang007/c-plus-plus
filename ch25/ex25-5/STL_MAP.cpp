/*
�d���ɦW�Gstl_map.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h
#include <string>
#include <map>	//���Jmap���Y��

using namespace std; //�ϥ�std�W�٪Ŷ�

int main()	//�D�{���}�l
{
	typedef map<string, string, less<string> > map_type;
	//�Q��typedef�w�q�s�����A

	map_type m;	//�ŧi�e��
	map_type::iterator iter; //�ŧi���쾹

	//���J���
	m.insert(map_type::value_type("John","A senior high school student."));
	m.insert(map_type::value_type("Mary","A senior high school teacher."));
	m.insert(map_type::value_type("Bill","A junior high school student."));

	for(iter = m.begin(); iter != m.end(); iter++)
		cout << (*iter).first << ", " << (*iter).second << endl;
		//��X����ȻP���������

    system("PAUSE");
    return 0;
} //�D�{������
