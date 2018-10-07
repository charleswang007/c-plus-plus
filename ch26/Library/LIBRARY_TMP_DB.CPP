/*
�d���ɦW�Glibrary_tmp_db.cpp
�{���}�o�G���|�g
*/

#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <string.h>
#include "LibraryObject.h"	//���J��L�ɮ�
#include "Reader.h"
#include "Book.h"
#include "Database.h"
#include "Librarian.h"

using namespace std;

int main()			//�D�{���}�l
{
	char choice = 'I';
	Librarian librarian;

	while( !(choice == 'E' || choice == 'e') )
	{
		cout << "check (O)ut, check (I)n, (B)ook's data,";
        cout << " (R)eader's data, (E)xit :" << endl;
		cin >> choice;	//��ܱ����檺�\��

		switch(choice)
		{
		case 'o':		
		case 'O':	//�ɮѧ@�~
			librarian.CheckOut();	//�I�sLibrarian���ɮѧ@�~
			break;
		case 'i':		
		case 'I':	//�ٮѧ@�~�A�d���z�m��
			cout << "Let you practice!" << endl;
			break;
		case 'b':		
		case 'B':	//���@���y���
			librarian.BookData();			
			break;
		case 'r':		
		case 'R':	//���@Ū�̸��
			librarian.ReaderData();
			break;
		case 'e':
		case 'E':	//���}�t��
			break;
		default:
			cout << "Don't provide this function!" << endl;
		}
	};
}	//�D�{������