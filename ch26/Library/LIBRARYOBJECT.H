/*
�d���ɦW�GLibraryObject.h
�{���}�o�G���|�g
*/

#ifndef _LIBRARYOBJECT_H_
#define _LIBRARYOBJECT_H_

#include <iostream>
using namespace std;

class object{};	//�w�qobject���O

class LibraryObject : public object
{
protected:
	int index;	//�s��
	char name[20];	//�W��
public:	//�������
	LibraryObject (int index, const char * name);
	LibraryObject (const char * i_name);
	LibraryObject ();
	const char * GetName ( );	//��X�W��
	int GetIndex ( );//��X�s��
	virtual void ShowData();//��X���
	void SetIndex(int i_index);//�]�w�s��
	void SetName(const char * i_name);//�]�w�W��
};
#endif // of _LIBRARYOBJECT_H_