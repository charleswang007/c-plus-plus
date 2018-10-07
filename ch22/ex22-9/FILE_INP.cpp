/*
�d���ɦW�Gfile_inp.cpp
�{���}�o�G���|�g
*/
#include <fstream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h
#include <iomanip>
#include <iostream>

using namespace std; //�ϥ�std�W�٪Ŷ�

#define FILEPATH "C:\\C_C++\\ch22\\ex22-9\\Reader.txt"
//�w�q�N���ɮצW�ٻP���|��FILEPATH�`��

int main()	//�D�{���}�l
{
	fstream file;
	char str[8];
	int id;

	file.open(FILEPATH, ios::in);	//�N�ɮ׶}�Ҭ���J���A

	if(!file)	//�ˬd�ɮ׬O�_���\�}��
	{
		cerr << "Can't open file!" << endl;
		exit(1);	//�b�����`���ΤU�A���_�{��������
	}

	cout << setw(4) << setiosflags(ios::right) << "ID" 
			<< setw(8) << setiosflags(ios::right) << "Name" << endl;
	cout << "-------------------" << endl;
	while(file >> id >> str)	//Ū���O���A�YŪ�����ɮ׵����h�Ǧ^0
			cout << setw(4) << setiosflags(ios::right) << id
				 << setw(8) << setiosflags(ios::right) << str << endl;
	//�q�ɮ�Ū�����

    system("PAUSE");
    return 0;
} //�D�{������
