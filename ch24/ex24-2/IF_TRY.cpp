/*
�d���ɦW�Gif_try.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

int if_modulus (int, int);	//�D�l�ƪ����
int try_modulus(int, int);

int main()			//�D�{���}�l
{
	int x, y, modulus;

	cout << "Please input two integer for finding modulus..." << endl;
	cin >> x >> y;

	modulus = if_modulus(x, y);
	
	cout << "Using if expression to detect error..." << endl;

	if(modulus == -1)	//�ˬdif_modulus���^�ǭ�
		cerr << "The y cann't be a zero!\n";
	else
		cout << "Modulus is " << modulus << " ." << endl;

	cout << "Using exception handing to detect error..." << endl;
	try{	//���~�����϶�
		cout << "Modulus is " << try_modulus(x, y);
    	//�I�stry_modulus
		cout << " ." << endl;
	}
	catch (char * s) {cerr << s;}	//���~�B�z�϶�

    system("PAUSE");
    return 0;
} //�D�{������

int if_modulus(int x, int y)
{
	if (y == 0)	//�p�G���Ƭ��s�A�^�ǭȬ� -1
		return  -1;
	
	return x % y;
}

int try_modulus(int x, int y)
{
	if (y == 0)
		throw("The y cann't be a zero!\n");
     	//�p�G���Ƭ��s�A��X�@�Ӧr��

	return x % y;
}

