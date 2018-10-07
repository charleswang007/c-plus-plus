/*
�d���ɦW�Gstatic_member.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstring> //�bstd�W�٪Ŷ������JC�y����string.h
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

class Book //�}�l�ŧi���O
{
private: //�ŧi�ݩ�
	static int book_num; //�Nbook_num�ŧi���R�A�ݩ�
 	char name[30];
public:
	Book(const char * i_name)	//�غc�l
	{
		book_num += 1;	//�Nbook_num�[1
		strcpy(name, i_name);
	}

    ~Book()
    {
        book_num -= 1;
    }

    static int get_book_num_static()
    {
        return book_num;
    }

    int get_book_num()
    {
        return book_num;
    }
};

int Book::book_num = 0;		//�w�q�R�A�ݩ�

int main()    //�D�{���}�l
{
	Book A_Book("The C++ Bible");

    cout << "A_Book.get_book_num() : " ;
    cout << A_Book.get_book_num() << endl;
    //�z�L������ƨ��o�R�A��Ʀ���

    cout << "A_Book.get_book_num_static() : "
         << A_Book.get_book_num_static() << endl;
    //�z�L�R�A������ƨ��o�R�A��Ʀ���

    cout << "Book::get_book_num_static() : "
         << Book::get_book_num_static() << endl;
    //�B��::�B��l�A�B�����O�W�٩I�s�R�A�������

    system("PAUSE");
    return 0;
} //�D�{������
