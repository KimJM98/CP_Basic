#include"io.h"

// ���� 225p
// 1) �迭 int arr[]={1,6,9,7,3,2,0,4,8,5} ������ ���� �������� Ǫ�ÿ�.

int arr[] = { 1,6,9,7,3,2,0,4,8,5 };

int ArrSize = sizeof(arr)/ sizeof(arr[0]); //c++���� �������� �Լ�
										   //sizof�� ������ ����Ʈ ��
void ArraySum()
{

	int Sum = 0;

	for (int i = 0; i < ArrSize; i++) {
		Sum += arr[i];
	}

	cout << Sum << endl;

}
// 1-4) �������� ����
void Sort()
{
	int Temp = 0;

	//���� ���� : �ݺ� - ��ü ����Ŭ, ������ ���� ��
	for (int i = 9; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				Temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = Temp;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (i == 9)
		{
			cout << arr[i] << endl;
		}
		else {
			cout << arr[i] << " : ";
		}
		cout << arr[i] << " : ";
	}
// 1-2) 
	cout << endl;
	cout << "�ּҰ� : " << arr[0] << endl;
	cout << "�ִ밪 :" << arr[ArrSize - 1] << endl;

}

void Reverse()
{
	int TempArr[10]; //�ӽù迭

	for (int i = 0; i < 10; i++) {
		TempArr[i] = arr[9 - i];
	}
	for (int i = 0; i < 10; i++) {
		arr[i] = TempArr[i];
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " : ";
	}
}

// 2) �� �л��� ����, ����, ���� ������ ���� �� �л��� ������ ���ϰ�, �� ���� ��� ���
// 1�� �л��� ��:100 ����:100 ��:50
// 2�� �л��� ��:90  ����:70  ��:80
// 3�� �л��� ��:70  ����:80  ��:90
// 4�� �л��� ��:80  ����:100 ��:90

void TotalScore() {
	int Total = 0;
	for (int i = 0; i < 3; i++) {
		//1. ���� ���ϴ� �Լ�
		cout << "����, ����, ���м����� ������ �Է��Ͻÿ�." << endl;
		int Sco1 = 0;
		int Sco2 = 0;
		int Sco3 = 0;
		cin >> Sco1;
		cin >> Sco2;
		cin >> Sco3;
		cout << Sco1 + Sco2 + Sco3 << "�� �Դϴ�.";

		Total =Sco1 + Sco2 + Sco3;
		cout << Total << endl;
	}

}




