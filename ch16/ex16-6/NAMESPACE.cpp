/*
�d���ɦW�Gnamespace.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstring> //�bstd�W�٪Ŷ������JC�y����string.h
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

namespace John	//�ŧiJohn��namespace
{
	class Printer  //�ŧiPrinter���O
	{
	public:
		void Hello ()  //�ŧiPrinter���O����k
		{ 
			cout << "Hello C++ ! " << endl; //�L�XHello C++ !
		}
	};    //����Printer���O���ŧi
}		//����John namespace���ŧi

namespace Tom	//�ŧiTom��namespace
{
	class Printer  //�ŧiPrinter���O
	{
	public:
		void Hello ()  //�ŧiPrinter���O����k
		{ 
			cout << "Hello World ! " << endl; //�L�XHello C++ !
		}
	};    //����Printer���O���ŧi
}	//����Tom namespace���ŧi

int main()  //�D�{���}�l
{
	using namespace John; //�ŧi�ϥ�John namespace�w�q�����O
	Printer Printer_1;	//�ϥΥ�John namespace�w�q��Printer���O
	Printer_1.Hello();	//��XHello C++ !

	Tom::Printer Printer_2;	//�ϥΥ�Tom namespace�w�q��Printer���O
	Printer_2.Hello(); //��XHello World !

    system("PAUSE");
    return 0;
} //�D�{������
