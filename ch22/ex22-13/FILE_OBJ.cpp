/*
�d���ɦW�Gfile_obj.cpp
�{���}�o�G���|�g
*/
#include <fstream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h
#include <iostream>

using namespace std; //�ϥ�std�W�٪Ŷ�

class Reader	//�}�l�ŧi���O
{
private:	//�ŧi�ݩ�
	int id;
	char name[10];
	static char file_name[50];
public:	//�ŧi�������
	Reader(const int id, char * r_name) : id(id)
    { strcpy(name, r_name); }
	Reader() { }
	static const char * get_file_name() { return file_name;}
	friend ostream & operator<< (ostream & s, Reader & r);
	friend istream & operator>> (istream & s, Reader & r);
};

char Reader::file_name[50] = "C:\\C_C++\\ch22\\ex22-13\\Reader.txt";

//�h��cout����'<<'�B��l
ostream & operator<< (ostream & s, Reader & r)
{
	cout << r.id << " " << r.name;
	return s;
}

//�h��cin����'>>'�B��l
istream & operator>> (istream & s, Reader & r)
{
	cin >> r.id >> r.name;
	return s;
}

int main()	//�D�{���}�l
{
	Reader * reader[4];	//�ŧi�@�Ӫ�����а}�C
	char str[4][8] = {"Mary","John","Judy","Joe"};	//�ŧi�G���r���}�C
    int i;

	for (i = 0; i < 4; i++)
		reader[i] = new Reader((i+1) *100, str[i]);
        //�]�w������а}�C�����

	fstream obj_file;

	obj_file.open(Reader::get_file_name()
                      , ios::in | ios::out | ios::binary | ios::trunc);

	if(!obj_file)	//�ˬd�ɮ׬O�_���\�}��
	{
		cerr << "Can't open file!" << endl;
		exit(1);	//�b�����`���ΤU�A���_�{��������
	}

	for(i = 0; i < 4; i++)
		obj_file.write((char *) reader[i], sizeof(*reader[i]));
     	//�N����g�J�ɮ�
    Reader a_reader;

	obj_file.seekg(0, ios::beg);	//�N�ɮ�Ū�����в����ɮ׶}�Y

	obj_file.read((char *) &a_reader, sizeof(Reader));
 	//�q�ɮפ�Ū������

	cout << "Output object from file..." << endl;

	while(!obj_file.eof())	//�P�_�O�_��F�ɮ׵���
	{
		cout << a_reader << endl;	//��XReader����
		obj_file.read((char *) &a_reader, sizeof(Reader));
	}

    system("PAUSE");
    return 0;
} //�D�{������
