/*
�d���ɦW�GBook.h
�{���}�o�G���|�g
*/
#include "LibraryObject.h"

//Book�~�ө�LibraryObject
class Book : public LibraryObject
{
private:
	char name[40];	//�ѦW
	bool OnShelf;	//�O�_�b�[�W
	static char FileName[40];	//�x�sBook�����ɮצW��
public:	//�������
	//�غc�l
	Book(const char * i_name) : OnShelf(true)
    { strcpy(Book::name, i_name); }
	Book( ) {}
	void CheckOut();	//�Q�ɥX
	const char * GetName ( ) { return name; }	//���o�ѦW
	void ShowData(); //��X�Ѫ����
	void SetName(const char * i_name) //�]�w�ѦW
    { strcpy(name, i_name); }
	static char * GetFileName ( ) //��X�x�sBook�����ɮצW��
    { return FileName;}
};

