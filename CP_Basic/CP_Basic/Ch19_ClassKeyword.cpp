
#include "io.h"
#include "Ch19_ClassKeyword.h"

int Keyword::Value2 = 2;

void ClassKeword()
{
	Keyword T1;

	T1.Value1 = 11;
	T1.Value2 = 12;

	T1.Func();
	T1.SFunc();

	Keyword T2;

	T2.Value2 = 21;
	T2.Value1 = 22;  // <- Ŭ�������� static���� ����Ǿ� ������ ���� ���� ���

	cout << T1.Value1 << " : " << T1.Value2 << endl;  // 11 : 22
	cout << T2.Value1 << " : " << T2.Value2 << endl;  // 21 : 22

	Keyword::SFunc(); // static�Լ�, ���� ��ü �������� �ٷ� Ŭ�����Լ��� ���� ���� �ڡڡ��߿�
}