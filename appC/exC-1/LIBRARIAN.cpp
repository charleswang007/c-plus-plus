/*
�d���ɦW�GLibrarian.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include "Librarian.h"
#include "Database.h"
#include "Reader.h"
#include "Book.h"

using namespace std;

void Librarian::CheckOut()	//�ɮѧ@�~
{
	char r_name[20], b_name[40];
	Database<Reader> ReaderDB;
	Database<Book> BookDB;
	try{
		cout << "Please input Reader's name :" << endl;
		cin >> r_name;
		Reader * reader = ReaderDB.Query(r_name);
     	//�M����ɮѪ�Ū�̸��

		cout << "Please input Book's name :" << endl;
		cin.ignore(1);
		cin.get(b_name, 40, '\n') ;
		Book * book = BookDB.Query(b_name);	//���ɥX�����y���
		book->CheckOut();	//�]�w�ӮѳQ�ɥX
		reader->BorrowBook(book->GetIndex());	//�W�[Ū�̪��ɮѰO��
	}
	catch(string s) { cerr << s;}
}

void Librarian::BookData()	//���@���y���
{
	char choice = 'I';
	char b_name[40];
	Database<Book> BookDB; //�ŧi�@�Ӿާ@Book�ɮת�Database����
	Book * book;

	while ( !(choice == 'E' || choice == 'e') )
	{
		cout << "Maintain Book Database" << endl;
		cout << "(I)nsert new data, (U)pdate data, (D)elete data,"
			 <<	" (Q)uery data, (S)how all data, (E)xit  : " << endl;
		cin >> choice;	//��ܱ����檺�ʧ@
		
		try{
			switch(choice)
			{
			case 'i':
			case 'I':	//�s�W���y���
				cout << "Please input a Book's name : " << endl;
				cin.ignore(1);
				cin.get(b_name, 40, '\n');
				book = new Book(b_name);
				BookDB.Insert(*book);	//�N���y��ƴ��J
				break;
			case 'u':
			case 'U':	//�����y���
				cout << "Please input Book's name : " << endl;
				cin.ignore(1);
				cin.get(b_name, 40, '\n');

				book = BookDB.Query(b_name); //�M�����諸���y���

				cout << "Please input Book's new name :" << endl;
				cin.ignore(1);
				cin.get(b_name, 40, '\n');
				book->SetName(b_name);	//���s�]�w�Ӯ��y���W��
				break;
			case 'd':
			case 'D':	//�R�����y���
				cout << "Please input Book's name : " << endl;
				cin.ignore(1);
				cin.get(b_name, 40, '\n');
				BookDB.Delete(b_name);	//�R�����y���
				break;
			case 'q':
			case 'Q':	//�d�߮��y��ơA�o�ӥ\��d���z�m��
				cout << "Let you practice!" << endl;
				break;
			case 's':
			case 'S':	//���Database���Ҧ����y���
				BookDB.ShowAllData();
				break;
			case 'e':
			case 'E':	//���}�t��
				break;
			default:
				cout << "Don't provide this function !" << endl;
			}
		}
		catch(string s) { cerr << s;}
	};
}

void Librarian::ReaderData()	//���@Ū�̸��
{
	char choice = 'I' , r_name[40];		
	Database<Reader> ReaderDB;
    //�ŧi�@�Ӿާ@Reader�ɮת�Database����
	Reader * reader;
		
	while ( !(choice == 'E' || choice == 'e') )
	{
		cout << "Maintain Reader Database" << endl;
		cout << "(I)nsert new data, (U)pdate data, (D)elete data,"
  			 << " (Q)uery data, (S)how all data, (E)xit  : " << endl;
		cin >> choice;	//��ܱ����檺�ʧ@

		try{
			switch(choice)
			{
			case 'i':
			case 'I':	//�s�WŪ�̸��
				cout << "Please input a Reader's name : " << endl;
				cin >> r_name;
				reader = new Reader(r_name);
				ReaderDB.Insert(*reader);
				break;
			case 'u':
			case 'U':	//���Ū�̸��
				cout << "Please input Reader's name : " << endl;
				cin >> r_name;
				reader = ReaderDB.Query(r_name);
      	        //�M�����諸Ū�̸��
			
				cout << "Please input Reader's new name :" << endl;
				cin >> r_name;
				reader->SetName(r_name);	//���s�]�w��Ū�̪��m�W
				break;
			case 'd':
			case 'D':	//�R��Ū�̸��
				cout << "Please input Reader's name : " << endl;
				cin >> r_name;
	
				ReaderDB.Delete(r_name);	//�R��Ū�̸��
				break;
			case 'q':
			case 'Q':	//�d��Ū�̸�ơA�o�ӥ\��d���z�m��
				cout << "Let you practice!" << endl;
				break;
			case 's':
			case 'S':	//���Database���Ҧ�Ū�̸��
				ReaderDB.ShowAllData();
				break;
			case 'e':
			case 'E':	//���}�t��
				break;
			default:
				cout << "Don't provide this function !" << endl;
			}
		}
		catch(string s) { cerr << s;}
	};
}
