/*
�d���ɦW�Gtypename.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <typeinfo> //���J�w�qtypeid()��typeinfo���Y�� 

using namespace std; //�ϥ�std�W�٪Ŷ�

template <typename TYPE>
class ClassA {
public:
	typedef TYPE TypeI; //�̫ۨ��O�W�� (dependent type name)
	typedef int TypeII; //�W�߫��O�W�� (independent type name)
};

template <typename ClassA> //�H template class �������O�Ѽ�
class ClassB {
public:
	typedef typename ClassA::TypeI TypeIII;
	//�B�� typename �w�q�_�����O�W�� (nested dependent type name)	
	
	typename ClassA::TypeI * ptrClassATypeI;
	//�קK�sĶ���V�c�ӥ����ϥ�typename 
};

int main()
{
	ClassB<ClassA<int> >::TypeIII i;
	//�ŧii��ClassB<ClassA<int> >::TypeIII ���O 
	
	int j;
	
	if ( typeid(i) == typeid(j) ) //�p�P�_i�����O�O�_��int 
		cout << "i and j are the same type!" << endl; //��X������G        
       
	system("PAUSE"); //�Ȱ��{������
	return 0;//�{�����`�����A�Ǧ^0
}
