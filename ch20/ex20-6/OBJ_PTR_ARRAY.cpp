/*
�d���ɦW�Gobj_ptr_array.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

class person	//�������O
{
protected:	//�ŧi�ݩ�
	char name[10];
public:	//�ŧi��k
	person(char* iname)	//�غc�l
	{ strcpy(name, iname); }
	virtual ~person()	//�����Ѻc�l
	{ cout << "~person() is called." << endl; }
	virtual void who_are_you() = 0;	//�µ������
};

class student : public person	//�ǥ����O
{
private:
	char major_in[15];	//�D�ת����
public:
	student(char* iname, char* major) : person(iname)	//�غc�l
	{ strcpy(major_in,major); }

	void who_are_you()	//�ڬO��
	{
		cout << "My name is " << name << " .";
		//��X�S�����
		cout << "I major in " << major_in << " !" << endl;
	}
	//�Ѻc�l
	~student() { cout << "~student() is called." << endl; }
};

class teacher : public person	//�Ѯv���O
{
private:
	char teach_for[15];	//�ұЪ���
public:
	teacher(char* iname, char* teach) : person(iname)	//�غc�l
	{ strcpy(teach_for,teach); }

	void who_are_you()	//�ڬO��
	{
		cout << "My name is " << name << " .";
		//��X�S�����
		cout << "I am a " << teach_for << " teacher !" << endl;
	}
	//�Ѻc�l
	~teacher() { cout << "~teacher() is called." << endl; }
};

int main() //�D�{���}�l
{
	person * pPerArr[5]; //������а}�C
	
	//�ʺA����person���l�����O����
	pPerArr[0] = new student("John","mathematics");
	pPerArr[1] = new teacher("Mary","Chinese");
	pPerArr[2] = new teacher("Joe","chemical");
	pPerArr[3] = new student("Bill","physics");
	pPerArr[4] = new teacher("May","English");

	for(int i = 0; i < 5; ++i)
	{
		pPerArr[i]->who_are_you();
		//�I�s������а}�C������A�i�D�ڭ̥L�O��
		delete pPerArr[i];	//�R���ʺA�t�m���O����
	}

    system("PAUSE");
    return 0;
} //�D�{������
