/*
�d���ɦW:fun_pho1.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstring> //�bstd�W�٪Ŷ������JC�y����string.h
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

int sum(int,int = 1000); //��ƪ��쫬�ŧi�A�ó]�w�w�]��

int main() //�D�{���}�l
{
    //int sum(int,int);  //�쫬�ŧi�]�i�H��o��
    cout << "the sum from 1 to 1000 is " << sum(1) << endl;

    system("PAUSE"); //�Ȱ��{������
    return 0;
}

/*
sum ��ƪ��ŧi �@�ΡG�[�`�ǤJ�Ȫ��d�򤺪�����`�M
�ǤJ�ȡG�[�`�d�򪺤W��up_value�P�U��under_value
�ǥX�ȡG�[�`�᪺�`�M
*/
int sum(int under_value,int up_value)
{
    int i,temp,total=0;

    //�ˬd�W�ɬO�_�j��U�ɡA�Y�_�h�洫��
    if(up_value<under_value){
        temp=up_value;
        up_value=under_value;
        under_value=temp;
    }

    for(i=under_value;i<=up_value;i++) //�[�`�p��
        total += i;

    return total; //�^�ǭ�
}

