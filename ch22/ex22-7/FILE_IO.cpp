/*
�d���ɦW�Gfile_io.cpp
�{���}�o�G���|�g
*/
#include <fstream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h
#include <iostream>

using namespace std; //�ϥ�std�W�٪Ŷ�

#define size 10
#define filepath "C:\\C_C++\\ch22\\ex22-7\\Reader.txt"
//�w�q�N���ɮצW�ٻP���|��filepath�`��

int main()
{
	fstream file;	//�ŧifstream����
	char str[size] = "string", str1[size];

	file.open(filepath, ios::out | ios::trunc);
	//�}���ɮ׬��g�J���A�A�Y�ɮפw�s�b�h�M���ɮפ��e���s�g�J
	file.write(str, size);	//�Nstr�g�J�ɮ�
	file.close();	//�����ɮ�

	file.open(filepath, ios::in);	//�}���ɮ׬�Ū�����A
	
	file.read(str1, size);	//�q�ɮ�Ū�����e��str1
	file.close();	//�����ɮ�
	
	cout << "Reading data from file..." << endl << str1 << endl;

    system("PAUSE");
    return 0;
} //�D�{������
