/*
�d���ɦW�Gstl_alg_com.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h
#include <algorithm>
#include <vector>

using namespace std; //�ϥ�std�W�٪Ŷ�

int main()
{
	char a[] = {'B','G','C','E'};
	vector<char> v1(a, a+4), v2(a, a+4);	//�ŧiv1�e��
	
	bool result = equal(v1.begin(), v1.end(), v2.begin());
	//���v1�Pv2�O�_�ۦP

	if(result)
		cout << "Two containers are the same !" << endl;
	else
		cout << "Two containers are different !" << endl;

	replace(v2.begin(), v2.end(), 'G', 'H'); //�Nv2����G�m����H

	pair<vector<char>::iterator, vector<char>::iterator> diff_elem;
	//�ŧi�@�ӥѨ��vector���쾹�զ���pair
	diff_elem = mismatch(v1.begin(), v1.end(), v2.begin());
    //����̤��@�˪��a��
	cout << "v1 :" << *(diff_elem.first) << "  v2 : "
         << *(diff_elem.second) << endl;
	//��X��r�ꤣ�P���a��

    system("PAUSE");
    return 0;
} //�D�{������
