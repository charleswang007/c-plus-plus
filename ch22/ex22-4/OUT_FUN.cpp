/*
�d���ɦW�Gout_fun.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

#define size 10

int main()			//�D�{���}�l
{
	char ch, str[size];

	cout << "Please input a char : " << endl;
	cin.get(ch); //Ū�J�@�Ӧr��
	cout << "Getting a char with cin.get() : " << endl;
    cout << ch << endl;
	
	cout << "Please input a string : " << endl;
	cin >> str;	//Ū�J�@�Ӧr��
	cout << "Getting a string with operator >> : " << endl;
    cout << str << endl;

	cin.get(str, size);	//Ū�J�j�p��size���r��
	cout << "Getting a string with cin.get() : " << endl;
    cout << str << endl;

	cin.ignore(10, '\n');	//������Ƭy��\n���e�A�ܦh10�Ӧr��
	cout << "Please input a string : " << endl;
	cin.getline(str, size, '\n');
  	//Ū��\n���e�A�ܦhsize�Ӧr���A�i�Jstr�}�C

	cout << "Getting a string with cin.getline() :" << endl;
    cout << str << endl;
	cout << cin.gcount() << " chars in string." << endl;
	//��X�e�@��getline��Ū�����r����

    system("PAUSE");
    return 0;
} //�D�{������
