/*
�d���ɦW�Gfile_out.cpp
�{���}�o�G���|�g
*/
#include <fstream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h
#include <iostream>

using namespace std; //�ϥ�std�W�٪Ŷ�

#define FILEPATH "C:\\C_C++\\ch22\\ex22-8\\Reader.txt"
//�w�q�N���ɮצW�ٻP���|��FILEPATH�`��

int main()	//�D�{���}�l
{
	fstream file;
	char *str[4] = {"Mary","John","Judy","Joe"};	//�ŧi�r����а}�C
	int id[4] = {100,200,300,400};

	file.open(FILEPATH, ios::out);	//�}���ɮ�

	if(!file)	//�ˬd�ɮ׬O�_���\�}��
	{
		cerr << "Can't open file!" << endl;
		exit(1);	//�b�����`���ΤU�A���_�{��������
	}

	for(int i = 0; i < 4; i++)
	{
		file << id[i] << " " << str[i] << endl;
	}	//�N��ƿ�X���ɮ�

    system("PAUSE");
    return 0;
} //�D�{������
