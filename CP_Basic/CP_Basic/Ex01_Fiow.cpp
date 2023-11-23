#include"io.h"

// 교재 162p
// 1) if~else를 이용하여 입력받은 정수의 짝/홀수 여부를 출력
void EvenOdd()
{
	cout << "정수를 입력하시오." << endl;
	
	int Number = 0;
	cin >> Number;

	if (Number % 2 == 0) {
		cout << "짝수" << endl;
	}
	else {
		cout << "홀수" << endl;
	}
}

// 5) for, if, continue 키워드를 사용하여 1~100까지 짝수만 출력
// continue : continue 키워드 이후의 코드를 실행하지 않고 통과
void PrintEven() 
{
	for (int i = 1; i <= 100; i++) {
		/*
		// 방법 1)
		if (i % 2 == 0) {
			cout << i << endl;
		}
		else {
			continue;
		} */
		
		/*
		// 방법 2)
		if (i % 2 != 0) {
			continue;
		}
		else {
			cout << i << endl;
		} */
		
		// 방법 3)
		if (i % 2 != 0) {
			continue;
		}
		cout << i << endl;

	}
}

// 교재 163p
// 6-2) 표준등급을 입력 받아 100명당 평균 몇등인지 출력
void Median(float StartNumber, float EndNumber)
{
	cout << (StartNumber + EndNumber) / 2;
		cout << "등 입니다." << endl;
}
void StandardGrade()
{
	cout << "등급을 입력하십시오." << endl;
	int Grade = 0;
	cin >> Grade;

	switch (Grade) {
		case 1:
			Median(0, 4);
			break;
		case 2:
			Median(4, 11);
			break;
		case 3:
			Median(11, 23);
			break;
		case 4:
			Median(23, 40);
			break;
		case 5:
			Median(40, 60);
			break;
		case 6:
			Median(60, 77);
			break;
		case 7:
			Median(77, 89);
			break;
		case 8:
			Median(89, 96);
			break;
		case 9:
			Median(96, 100);
			break;
	} 

}

// 교재 162p
// 6)
