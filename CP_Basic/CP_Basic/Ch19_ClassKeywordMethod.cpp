#include "io.h"
#include "Ch19_ClassKeyword.h"

void Keyword::Func() const // �Լ� ��ɿ� ������ ���� �����ϴ� ���� ���ٴ� �� �ǹ�,��ɸ� ����
{
	cout << Value1 << endl;
}

void Keyword::SFunc() // static �Լ��� ������ ���� ������
{
	cout << "SFunc() <- static / ���� �� ����" << endl;
}

int Keyword::Get() const // �Լ� ��ɿ� ������ ���� �����ϴ� ���� ���ٴ� �� �ǹ�,��ɸ� ����
{
	return Value3;
}

const int Keyword::Print() // �Լ� Ÿ�� �տ� const�� ���ϰ��� ������ �ʴ´ٴ� ��
{
	//return ���� �׻� ������ ����=>���� �׻� ����

	return 0;
}
