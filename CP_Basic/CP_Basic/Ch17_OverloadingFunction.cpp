/*
	�ߺ� ����(Overloading : �����ε�)
		- �Լ�(�޼ҵ�) �����ε�
		- ������ ���� �ε�
	: ������ �̸��� �Լ��� �������� �Ű������� ������ �� �ֵ��� ����
			(�������� �Ű����� = �پ��� ������ Ÿ��, ����)

	Ex) void Print(){}
	   void Print(int a){}
	   void Print(float a){}
	   void Print(int a, int b){}
	
	   Print();      -> ù��° ���� ȣ��
	   Print(10);    -> �ι�° ���� ȣ��
	   Print(1.1);   -> ����° ���� ȣ��
	   Print(10,20); -> �׹�° ���� ȣ��
	
	: ������ �����ڸ� �������� ������ Ÿ��, ������ ������ �� �ֵ��� ����
	
	10 + 10
	1.1 + 1.5
	
	�� ���α׷��� ������ �ٸ� ���ϱ��� (int, float)
	
*/
#include"io.h"
#include"Ch17_OverloadingClass.h"

void OverloadingFunction()
{
	Overloading Over;
	
	Over.Print();
	Over.Print(100);
	Over.Print("��Ŀ����");
	Over.Print(200,"��Ƽ�� �⽺");

	//������ �����ε� : Ŭ���� ���� ���� �� ����
	//ù��° Ŭ���� ��ü ����
	Overloading t1;
	t1.Value = 1;
	
	//�ι�° Ŭ���� ��ü ����
	Overloading t2;
	t2.Value = 2;

	//�ΰ��� Ŭ���� ��ü ����
	Overloading Result = t1 + t2;
	cout << Result.Value << endl;

}