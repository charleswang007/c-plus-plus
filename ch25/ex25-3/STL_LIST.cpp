/*
�d���ɦW�Gstl_list.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h
#include <list>	//���Jlist���Y��

using namespace std; //�ϥ�std�W�٪Ŷ�

#define Size 4

template <class T>
void print(list<T> & pri_con)	//�Ω�C�L�e�����e���˪����
{
	if(pri_con.empty())	//�P�Opri_con�O�_�����
		cout << "Container is empty!" << endl;
	else{
		typename list<T>::iterator i; //�ŧi���쾹

        //�Q��for�j��C�Lcontainer����
		for(i = pri_con.begin(); i != pri_con.end(); i++)
		{
			cout << *i << " ";	//�Q�Ϋ��쾹���ocontainer��������
		}
		cout << endl;
	}
}

int main()	//�D�{���}�l
{
	list<char> L; //�ŧi�x�s��ƥΪ�list
	
	cout << "Push back o, k, e and push front J ..." << endl;
	L.push_back('o');	//�qlist��ݼW�[����
	L.push_back('k');
	L.push_back('e');
	L.push_front('J');	//�qlist�e�ݼW�[����
	print(L);

	cout << "Pop front ..." << endl << "L : ";
	L.pop_front();	//�R��list�e�ݪ����
	print(L);

	cout << "Pop back ..." << endl << "L : ";
	L.pop_back();	//�R��list���ݪ����
	print(L);

	cout << "First Element of L : " << L.front() << endl;
    //��ܫe�ݪ�����
	cout << "Last Element of L : " << L.back() << endl;
 	//��ܧ��ݪ�����
	cout << "Maximum size of L : " << L.max_size() << endl;
 	//��X�i�e�Ǫ������Ӽ�

	cout << "Insert array to list ..." << endl << "L2 : ";
	char a[Size] = {'M','a','r','y'};
	list<char> L2;
	L2.insert(L2.begin(),a, a+Size); //�N�}�C���Jlist
	print(L2);

	cout << "Merge L and L2 ..." << endl << "L : ";
	L.merge(L2); //�NL2���X��L
	print(L);
	cout << "L2 : ";
	print(L2);

	cout << "Assign L to L2 ..." << endl <<"L2 : ";
	L2 = L;	//�NL ������ L2
	print(L2);

	cout << "Reverse L2 ..." << endl << "L2 : ";
	L2.reverse();	//�NL2����������
	print(L2);

	cout << "Sort L2 ..." << endl << "L2 : ";
	L2.sort();	//�NL2���������s�Ƨ�
	print(L2);

    system("PAUSE");
    return 0;
} //�D�{������
