/*
�d���ɦW�Gmath_error.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <string> //���J�w�qsring���O�����Y��
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

class MathErrorExcp	//���~�B�z���O
{
private:
	string err_msg;	//���~�T��
public:
    MathErrorExcp(const char * msg) : err_msg(msg) { }	//�غc�l
	const string what() {  return err_msg; }	//�ǥX���~�T��
};

int main() //�D�{���}�l
{
	int x,y;

	try{	//���~�����϶�
		cout << "Please input two integer for find modulus :" << endl;
		cin >> x >> y;	//Ū�����

		if(y == 0)	//�Q���ƬO�_���s
			throw MathErrorExcp("Derive by Zero !\n");	//��X�ҥ~����
		else if (!cin.good())	//�ˬd��Ƭy��J�O�_���Ϳ��~
			throw ("Not integer!");	//��X�r��

		throw (1);	//��X��L�ҥ~
	}
	//���~�B�z�϶�
	catch(MathErrorExcp e) { cerr << e.what();}	//�B�z�ҥ~����
	catch(const char * s) { cerr << s << endl;}	//�B�z�r��ҥ~
	catch (...) {cout << "Modulus : " << x % y << endl; }
 	//�B�z��L�ҥ~

	cout << "After running try-throw-catch!" << endl;
 	//����try-throw-catch��A�~�����

    system("PAUSE");
    return 0;
} //�D�{������
