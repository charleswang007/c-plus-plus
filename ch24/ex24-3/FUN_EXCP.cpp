/*
�d���ɦW�Gfun_excp.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

void ExcpFun3 ()
{ throw ("Throwing exception from ExcpFun3 !\n"); }	//��X�ҥ~

void ExcpFun2 () 
{ ExcpFun3(); }	//�I�s ExcpFun3���

void ExcpFun1 ( ) 
{ ExcpFun2(); }	//�I�s ExcpFun2���

int main() //�D�{���}�l
{
	try{	//���~�����϶�
		ExcpFun1();	//�I�sExcpFun1
	}
	catch (const char * c) { cerr << c; }	//���~�B�z�϶�

    system("PAUSE");
    return 0;
} //�D�{������
