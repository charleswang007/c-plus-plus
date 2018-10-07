/*
�d���ɦW�GReader.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include "Reader.h"
using namespace std;

const char Reader::FileName[40] = "C:\\VC++Ex\\ch24\\Library\\Reader.txt";

Reader::Reader(const char * name) : LibraryObject(name)
{
	for(int i = 0; i < 10; ++i)	//�_�l�]�w�ɮѰO��
		BorBookList[i] = 0;
}

void Reader::BorrowBook(int BookID)	//�ɮ�
{
	for(int i = 0; i < 10; ++i)
	{
		if (BorBookList[i] == 0)
		{
			BorBookList[i] = BookID;	//�]�w�ɮѰO��
			return;
		}
	}
}

void Reader::ShowData()	//��ܸ��
{
	LibraryObject::ShowData();

	cout << endl << "Brorow book's index list : [ ";

	for (int i = 0 ; i < 10; i++)
		cout << BorBookList[i] << " | ";

	cout << "]" << endl;
}
