/*
�d���ɦW�Gfptr_in.cpp
�{���}�o�G���|�g
*/
#include <fstream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h
#include <iomanip>
#include <iostream>

using namespace std; //�ϥ�std�W�٪Ŷ�

#define FILEPATH "C:\\C_C++\\ch22\\ex22-11\\Reader.txt"
//�w�q�N���ɮצW�ٻP���|��FILEPATH�`��

int main()	//�D�{���}�l
{
	fstream file;
	char str[4][8] = {"Mary","John","Judy","Joe"};
 	//�ŧi�G���r���}�C

	int id[4] = {100,200,300,400};

	file.open("Reader.txt", ios::out | ios::in | ios::binary | ios::trunc);
	//�}���ɮ׬�2�i���X�Ҧ�

	if(!file)	//�ˬd�ɮ׬O�_���\�}��
	{
		cerr << "Can't open file!" << endl;
		exit(1);	//�b�����`���ΤU�A���_�{��������
	}

	for(int i = 0; i < 4; i++)
	{
		file.write((char *) &id[i], sizeof(int)); //�N��ƿ�X���ɮ�
		file.write(str[i], 8 * sizeof(char));
	}

	char str1[8];
	int id1;
	int record_size = sizeof(int) + 8 * sizeof(char); //�p��O�����j�p

	file.seekg(0, ios::end);	//�N��J���в����ɮק���
	cout << "record size : " << record_size
         << "  file size : " << file.tellg() << endl;
	//�ɮק��ݪ�����

	cout << setw(4) << setiosflags(ios::right) << "ID" 
			<< setw(8) << setiosflags(ios::right) << "Name" << endl;
	cout << "-------------------" << endl;

	file.seekg(record_size * 2, ios::beg);
    //�N��J���в��ܲĤT����ư_�l�B

	file.read((char*) &id1, sizeof(int)); //Ū�����
	file.read(str1, 8 * sizeof(char));

	cout << setw(4) << setiosflags(ios::right) << id1
		<< setw(8) << setiosflags(ios::right) << str1 << endl;

    system("PAUSE");
    return 0;
} //�D�{������
