#include"io.h"

// 교재 225p
// 1) 배열 int arr[]={1,6,9,7,3,2,0,4,8,5} 가지고 다음 문제들을 푸시오.

int arr[] = { 1,6,9,7,3,2,0,4,8,5 };

int ArrSize = sizeof(arr)/ sizeof(arr[0]); //c++에서 만들어놓은 함수
										   //sizof는 변수의 바이트 수
void ArraySum()
{

	int Sum = 0;

	for (int i = 0; i < ArrSize; i++) {
		Sum += arr[i];
	}

	cout << Sum << endl;

}
// 1-4) 오름차순 정열
void Sort()
{
	int Temp = 0;

	//버블 정령 : 반복 - 전체 사이클, 인접한 원소 비교
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
	cout << "최소값 : " << arr[0] << endl;
	cout << "최대값 :" << arr[ArrSize - 1] << endl;

}

void Reverse()
{
	int TempArr[10]; //임시배열

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

// 2) 네 학생의 국어, 영어, 수학 성적을 보고 각 학생별 총점을 구하고, 각 과목별 평균 출력
// 1번 학생은 국:100 영어:100 수:50
// 2번 학생은 국:90  영어:70  수:80
// 3번 학생은 국:70  영어:80  수:90
// 4번 학생은 국:80  영어:100 수:90

void TotalScore() {
	int Total = 0;
	for (int i = 0; i < 3; i++) {
		//1. 총점 구하는 함수
		cout << "국어, 영어, 수학순으로 성적을 입력하시오." << endl;
		int Sco1 = 0;
		int Sco2 = 0;
		int Sco3 = 0;
		cin >> Sco1;
		cin >> Sco2;
		cin >> Sco3;
		cout << Sco1 + Sco2 + Sco3 << "점 입니다.";

		Total =Sco1 + Sco2 + Sco3;
		cout << Total << endl;
	}

}




