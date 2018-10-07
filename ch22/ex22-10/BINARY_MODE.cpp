/*
�d���ɦW�Gbinary_mode.cpp
�{���}�o�G���|�g
*/
#include <fstream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h
#include <iomanip>
#include <iostream>

using namespace std; //�ϥ�std�W�٪Ŷ�

#define FILEPATH "C:\\C_C++\\ch22\\ex22-10\\Reader.txt"
//�w�q�N���ɮצW�ٻP���|��FILEPATH�`��

int main() //�D�{���}�l
{
	fstream file;
	char str[4][8] = {"Mary","John","Judy","Joe"};	//�ŧi�G���r���}�C
	int id[4] = {100,200,300,400};

	file.open(FILEPATH, ios::out | ios::binary | ios::trunc);
			//�}���ɮ׬�2�i���X�Ҧ�
	if(!file)	//�ˬd�ɮ׬O�_���\�}��
	{
		cerr << "Can't open file!" << endl;
		exit(1); //�b�����`���ΤU�A���_�{��������
	}

	for(int i = 0; i < 4; i++)
	{
		file.write((char *) &id[i], sizeof(int)); //�N��ƿ�X���ɮ�
		file.write(str[i], 8 * sizeof(char));
	}

	char str1[8];
	int id1;

	file.close();
	file.open(FILEPATH, ios::in | ios::binary);
 	//�N�ɮ׶}�Ҭ�2�i���J�Ҧ�

	if(!file)	//�ˬd�ɮ׬O�_���\�}��
	{
		cerr << "Can't open file!" << endl;
		exit(1);	//�b�����`���ΤU�A���_�{��������
	}

	cout << setw(4) << setiosflags(ios::right) << "ID" 
			<< setw(8) << setiosflags(ios::right) << "Name" << endl;
	cout << "-------------------" << endl;

	file.read((char*) &id1, sizeof(int));
	file.read(str1, 8 * sizeof(char));

	while(!file.eof())	//Ū���O���A�YŪ�����ɮ׵���!file.eof()����
	{
		cout << setw(4) << setiosflags(ios::right) << id1
				<< setw(8) << setiosflags(ios::right) << str1 << endl;
		file.read((char*) &id1, sizeof(int));	//�q�ɮ�Ū�����
		file.read((char *) str1, 8 * sizeof(char));
	}

    system("PAUSE");
    return 0;
} //�D�{������
