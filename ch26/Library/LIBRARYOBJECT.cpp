/*
�d���ɦW�GLibraryObject.cpp
�{���}�o�G���|�g
*/

#include "LibraryObject.h"

//�w�q�غc�l
LibraryObject::LibraryObject(int index, const char * name)
: index(index) { SetName(name);}

LibraryObject::LibraryObject (const char * i_name)
{ strcpy(name, i_name);}

LibraryObject::LibraryObject () {}

const char * LibraryObject::GetName ( ) //��X�W��
{ return name; }

int LibraryObject::GetIndex ( ) { return index; }	//��X�s��

void LibraryObject::ShowData() //��X���
{ cout << index << "  " << name << "  ";}

void LibraryObject::SetIndex(int i_index) //�]�w�s��
{ index = i_index; }

void LibraryObject::SetName(const char * i_name) //�]�w�W��
{ strcpy(name, i_name); }
