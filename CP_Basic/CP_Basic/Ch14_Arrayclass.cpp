#include"io.h"
#include"array"

/*
	C++ STL(Standard Library : ǥ�� ���̺귯��)
		- Ŭ���� ��ü, �Լ��� ��Ƴ��� ��

	���̺귯��,�����ӿ�ũ,���� : Ư�� ��ɵ��� ��Ƽ� ���̳� ���� ���� �� ���� ����� �� �ְ� ���� ��

	Array(�迭) Ŭ���� , String(���ڿ�) Ŭ����

	Array, String Ŭ���� ����
		- �� Ŭ������ ���Ե� ������Ƽ, �޼ҵ带 ���
*/
void ArrayClass()
{
	array<int, 3> Number = { 10,20,30 };

	cout << Number.size() << endl; //�迭 ����
	cout << Number.front() << endl; //ù��° ���� ���
	cout << Number.back() << endl; //������ ���� ���
	cout << Number.at(1) << endl; // ������ �ε��� �ѹ��� �ش�Ǵ� ���� ���

	for (int i = 0; i < Number.size(); i++) {
		cout << Number.at(1) << endl;
	}

}