/*
�d���ɦW�Gmulti.cpp
�{���}�o�G���C���B���|�g
*/

#include <iostream> //���J�����Y��
using namespace std; //�w�q�ϥ�std�R�W�Ŷ�

int main(void)
{
	int i, j; //�ŧi�ܼơA���k������i�P�Q����j

	for(i=1;i<=9;i++){ //����k�����ƪ��j��
		for(j=1;j<=9;j++){ //����k���Q���ƪ��j��
			cout << i << "*" << j << "=" << (i*j) << "\t";
			//���k���涵
		}
		cout << endl; //���k��C�@�C������
	}

	system("PAUSE"); //�Ȱ��{������
	return 0; //�{�����`�����A�Ǧ^0
}