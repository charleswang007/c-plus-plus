/*
�d���ɦW�Gnest_try.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

int main() //�D�{���}�l
{
	try{
		try{
			throw ("Testing nest try-throw-catch!\n"); //��X�@�Өҥ~
			cout << "This should not print!" << endl;
            //�o�̱N���|�Q�L�X��
		}
		catch(const char * s1) { throw s1;}	//s1�N�Q��X
		cout << "This should not print!" << endl;
	}
	catch (const char * s2) { cerr << s2 ; } //��X���~�T��

	cout << "This should print!" << endl;

    system("PAUSE");
    return 0;
} //�D�{������
