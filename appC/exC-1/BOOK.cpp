/*
�d���ɦW�GBook.cpp
�{���}�o�G���|�g
*/

#include "Book.h"

char Book::FileName[40] = "C:\\VC++\\ch24\\Library\\Book.txt";
//�x�sBook�����ɮ׬�Book.txt

void Book::CheckOut()	//�Q�ɥX
{	//�p�G�Ѥ��b�[�W�A�h��X�ҥ~
	if(OnShelf == false)
		throw("Book is not on shelf!\n");
	
	OnShelf = false;	//�]�w�Q�ɥX
}

void Book::ShowData()	//��X�Ѫ����
{
	cout << index << "  " << name << "  ";

	if(OnShelf == false)
		cout << "  Not on shelf" << endl;
	else
		cout << "  On shelf" << endl;
}
