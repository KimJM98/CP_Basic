#include "io.h"

/*
	����ȯ - ������ ���� Ÿ���� ��ȯ
		  - ������ ����Ǵ� �������� Ÿ���� ��ȯ�� ��ó�� ���̵��� ǥ���ϴ°� 
*/

void Type()
{
	int Kor = 90;
	int Eng = 80;
	int Math = 75;

	float Average = 0;

	// 1.����, �����Ͱ��� Ÿ���� �����ؾ���
	// 2. ���� ����� ����ȭ �Ǵ� ����� ���

	Average = (float(Kor) + float(Eng) + float(Math)) / 3;
	// �� ������ ���� ����ȯ ����
	// �� �ڿ� kor~ �̹� int�� ��� �Ǿ� �Ҽ��� ����, ������ ����.���� float�� ��ȯ �� ����
	//Average = float(Kor + Eng + Math) / 3; ���� ���� �� ����

	cout << Average << endl;
}