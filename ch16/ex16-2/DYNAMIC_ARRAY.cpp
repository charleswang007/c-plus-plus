/*
�d���ɦW�Gdynamic_array.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

int main() //�D�{���}�l
{
	int n, i; //�x�s�ϥΪ̿�J���}�C����

	cout << "Please input the size of array :" << endl;
	cin >> n; //Ū���}�C������

	int *ptr = new int [n]; //�ʺA�t�m�}�C������

	cout << "Please input the value of array :" << endl;

	for(i=0;i<n;i++){
		cout << "array [" << i << "] = ";
		cin >> *(ptr + i);		//Ū���}�C������
	}

	cout << endl << "The result is..." << endl;

	for(i=0;i<n;i++){
		cout << "array [" << i << "] = " << ptr[i];
		//�C�L�}�C�����Aptr[i] �P *(ptr + i) �P�q
		cout << endl;
	}

	delete[] ptr; //����O����Ŷ�

    system("PAUSE");
    return 0;
} //�D�{������
