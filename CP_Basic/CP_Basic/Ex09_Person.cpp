#include "Ex09_Person.h"

void PrintStudent()
{
	CStudent s1;

	//�̸�(Name), ����(Age), ����(Gender)=>CPerson class�� �ִ� ���� ���
	//ID, ���� => CStudent class�� �ִ� ���� ���
	s1.Set("�赹��", 22, 1, 1000, "�κ� ����");
	s1.Print();

	CStudent s2;
	s2.Set("��û��", 24, 2, 500, "�ҼӼ� ȿ��");
	s2.Print();
}	  