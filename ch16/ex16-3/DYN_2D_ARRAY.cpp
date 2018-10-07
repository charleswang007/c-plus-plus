/*
�d���ɦW�Gdyn_2d_array.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

int main() //�D�{���}�l
{
	int string_size;
	int n, i;		//�r�굧��

	cout << "Please string number :" << endl;
	cin >> n;	//Ū������J������

    //�Ĥ@�B�B�ʺA�ŧi�@�ӫ��V���а}�C������
	char **ptr = new char * [n];

	cout << "The value of ptr : " << ptr <<" address : " << &ptr << endl;
    //��X ptr ���Ъ��x�s�ȻP�O���餤�Ҧ�����}

	for (i = 0 ; i < n ; i++ ){
		do{
			cout << "Please input the size of string (size > 0) : ";
			cin >> string_size;	//Ū�J�C���r�ꪺ�j�p

            //�p�G�r��j�p�p��ε��� 0 �A�h�L�X���~�T��
			if (string_size <= 0)
				cout << "Error ! The size must be larger than zero !";
                cout << endl << "Input again....." << endl;

		}while (string_size <= 0);
        //�Y�r��j�p�p��ε��� 0 �A�h���s����

		*( ptr+i ) = new char [string_size + 1] ;
		//�ĤG�B�B���C�ӫ��а}�C�����ʺA�t�m�O����Ŷ�
		for (int j = 0 ; j < string_size ; j++){
			*(*(ptr + i) + j) = char (65 + j);
           	//�N�r��(A B C ....) ��i�r��
		}

		*(*(ptr + i) + string_size ) = '\0';
        //�� '\0' ��i�̫�@�Ӥ���
	}

	cout << "Address    |  Value" << endl;	//��X���D�C
	cout << "-------------------------" << endl;

	for ( i = 0 ; i < n ; i++ ){
		cout << &ptr[i];  //���а}�C�U��������}
		cout << " |  " << (void*) ptr[i]  ;
        //�j��}�C�����૬�A�H��X�����x�s����}��
		cout << endl;
	}

	cout << endl << "Address    |  String" << endl;	//��X���D�C
	cout << "-------------------------" << endl;

	for ( i = 0 ; i < n ; i++ ){
		cout << (void*)ptr[i] << " |  " << ptr[i];
        //��X�����x�s����}�ȻP���V���r�ꤺ�e
		cout << endl;
	}

    for ( i = 0 ; i < n ; i++ ){
		delete [] ptr[i];	//������а}�C���V���O����Ŷ�
	}
	delete [] ptr;	//������а}�C�Ҧ����O����Ŷ�

    system("PAUSE");
    return 0;
} //�D�{������
