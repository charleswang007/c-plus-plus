/*
�d���ɦW�Gclass_pre_dec.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstring> //�bstd�W�٪Ŷ������JC�y����string.h
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

class wife;		//���O���e�m�ŧi

class husband
{
private:
	char name[10];	
	wife * my_wife;	//�Q�Ϊ�����Ыإ߻Pwife���󪺱B�����Y
public:
	//�غc�l
	husband(const char * i_name) { strcpy(name, i_name); }
	const char * my_name(){ return name;}

 /*�]���U����Ӧ�����Ƥ��ϥΤFwife���󪺦����A�G�u����ŧi
	��ƭ쫬�A��Ƥ��e�������짹��wife�ŧi��~��w�q*/
	void wife_is();
	void marry_me(wife &);
};

class wife
{
private:
	char name[10];
	husband * my_husband;	//�Q�Ϊ�����Ыإ߻Phusband���󪺱B�����Y
public:
    //�غc�l
	wife(const char * i_name) { strcpy(name, i_name); }
	void husband_is()	//�ڪ��Ѥ��O...
	{ cout << "My husband is " << my_husband->my_name() << "." << endl;}
	void get_married(husband * a_husband)	//���H
	{ my_husband = a_husband;}	//�إ߱B�����Y
	const char * my_name(){ return name;}
};

//husband���Owife_is�Pmarry_me������ƪ����e
void husband::wife_is()	//�ڪ��ѱC�O...
{ cout << "My wife is " << my_wife->my_name() << "." << endl;}

void husband::marry_me(wife & a_wife)	//�D�B
{
	my_wife = &a_wife;	//�إ߻Pwife���󪺱B�����Y
	my_wife->get_married(this);
}

int main()
{
	husband Romeo("Romeo");	//�w�q����
	wife Juliet("Juliet");

	Romeo.marry_me(Juliet);	//ù�K�ڦV���R���D�B

	cout << "Juliet say : ";
	Juliet.husband_is();	//���R�������F�I�I

	cout << "Romeo yells happily : ";	//ù�K�ڰ����o�j�ۡI	
	Romeo.wife_is();	

    system("PAUSE");
    return 0;
} //�D�{������
