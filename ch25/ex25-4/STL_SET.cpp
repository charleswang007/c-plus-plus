/*
�d���ɦW�Gstl_set.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h
#include <string>
#include <set>	//���Jset���Y��

using namespace std; //�ϥ�std�W�٪Ŷ�

typedef set<string, less<string> > str_set;
//�w�qstr_set�N��set<string, less<string> >

template <class T>
void print(set<T> & pri_con)	//�Ω�C�L�e�����e���˪����
{
	if(pri_con.empty())	//�P�Opri_con�O�_�����
		cout << "Container is empty!" << endl;
	else{
		typename set<T>::iterator i;	//�ŧi���쾹

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
	string name[] = {"Mary","John","Ann","Joe","Ken"};
	str_set s(name, name + 5);	//�Q�Φr��}�C�]�wset�e����������
	print(s);	//�C�L�e����������

	s.insert("Judy");	//���J����
	print(s);

	string search, upper, lower;
	str_set::iterator iter;	//�ŧi���쾹

	cout << "Please input name for searching : " << endl;
	cin >> search;

	iter = s.find(search);	//�M��search�r��A�Y�L�h�Ǧ^���ݤ��������쾹
	if(iter == s.end())
		cout << "The " << search << " is not in container !" << endl;
	else
		cout << "The " << search << " is in container !" << endl;
	
	cout << "Please input a range for searching :(Upper/Lower)"
         << endl;
	cin >> upper >> lower;	//Ū���d�򪺤W�ɻP�U��

    //��X�b�M��d�򤺪��r��
	for(iter = s.lower_bound(lower)
                               ; iter != s.upper_bound(upper); iter++)
    {
		cout << *iter << "  ";	//��X���쾹���V��������
	}
	cout << endl;

    system("PAUSE");
    return 0;
} //�D�{������
