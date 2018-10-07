/*
�d���ɦW�Gfptr_out.cpp
�{���}�o�G���|�g
*/
#include <fstream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h
#include <iomanip>
#include <iostream>

using namespace std; //�ϥ�std�W�٪Ŷ�

#define FILEPATH "C:\\C_C++\\ch22\\ex22-12\\Reader.txt"
//�w�q�N���ɮצW�ٻP���|��filepath�`��

void output_file(fstream &); //�N�ɮפ�����ƿ�X

int main() //�D�{���}�l
{
	fstream file;
	int record_size = sizeof(int) + 8 * sizeof(char);
 	//�p��O�����j�p

	file.open(FILEPATH, ios::out | ios::in | ios::binary);
	//�}���ɮ׬�2�i���X/�J�Ҧ�
	if(!file)	//�ˬd�ɮ׬O�_���\�}��
	{
		cerr << "Can't open file!" << endl;
		exit(1);	//�b�����`���ΤU�A���_�{��������
	}

	file.seekg(0, ios::end);
	cout << "record size : " << record_size << "  file size : ";
    cout <<file.tellg() << endl;

	output_file(file);

	char str[8] = "Herry";

	file.seekp(record_size * 2 + sizeof(int), ios::beg);
	//�N��J���в��ܲĤT���O���ĤG����쪺�_�l�B
	file.write(str, 8 * sizeof(char));	//�N�s��Ƽg�J���

	cout << endl << "After updating..." << endl;
	output_file(file);

    system("PAUSE");
    return 0;
} //�D�{������

void output_file(fstream & file)
{
	char str[8];
	int id;

	file.seekg(0, ios::beg);	//���s�]�w�ɮ׿�J���Ц��ɮ׶}�Y

	cout << setw(4) << setiosflags(ios::right) << "ID" 
			<< setw(8) << setiosflags(ios::right) << "Name" << endl;
	cout << "-------------------" << endl;

	file.read((char*) &id, sizeof(int));	//�q�ɮ�Ū�����
	file.read((char *) str, 8 * sizeof(char));
	while(!file.eof())	//Ū���O���A�YŪ�����ɮ׵���!file.eof()����
	{
		cout << setw(4) << setiosflags(ios::right) << id
		     << setw(8) << setiosflags(ios::right) << str << endl;
		file.read((char*) &id, sizeof(int));	//�q�ɮ�Ū�����
		file.read((char *) str, 8 * sizeof(char));
	};

	file.clear();	//���s�]�w��Ƭy���~���A
}
