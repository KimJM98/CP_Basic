#include "io.h"

void PrintArray()
{
	int ArrayNumber[3] = { 1,2,3 };
	cout << ArrayNumber[0] << endl;

	for (int i = 0; i < 3; i++) {
		cout << ArrayNumber[i] << endl;
	}
	int ArrayInit[3];
	for (int i = 0; i < 3; i++) {
		ArrayInit[i] = i + 10;
	}
	for (int i = 0; i < 3; i++) {
		cout << ArrayInit[i];
	}
	cout << endl;

	// 캐릭터 배열변수
	char Word[] = { 'H','e','l','l','o',' ','W','o','r','l','d' };

	cout << Word[0] << endl;

	for (int i = 0; i < 11; i++) {
		cout << Word[i];
	}
}

void SumArray()
	{
		// Ch05 - ForFunctionEx03
		// 연습문제 : 반복횟수를 입력 받고, 반복 될때마다 두 수 A,B를 입력받아 A+B의 결과값을 표시

		int IterNumber = 5;
		int IterA = 0;
		int IterB = 0;

		//cin >> IterNumber;

		int IterArray[5];


		for (int i = 0; i < IterNumber; i++) {
			cin >> IterA;
			cin >> IterB;

			IterArray[i] = IterA + IterB;
		}

		for (int i = 0; i < IterNumber; i++) {
			cout << IterArray[i] << " : ";
		}
	}

// 성적 표시 함수
char Grade(int NumTest) 
	{
		// 시험점수 입력, 90~100:A, 80~89:B, 70~79:C, 60~69:D, 60미만:F 
		
		char GradeCharacter = NULL;

		if (NumTest >= 90) {
			GradeCharacter = 'A';
		}
		else if (NumTest >= 80) {
			GradeCharacter = 'B';
		}
		else if (NumTest >= 70) {
			GradeCharacter = 'C';
		}
		else if (NumTest >= 60) {
			GradeCharacter = 'D';
		}
		else {
			GradeCharacter = 'F';
		}
		return GradeCharacter;
	}

// 성적 처리 함수
void ProcessScore()
{
	int Score[5] = { 95,85,55,67,73 };
	char GradeCharacter[5];

	for (int i = 0; i < 5; i++) {
		GradeCharacter[i] = Grade(Score[i]);
	}
	for (int i = 0; i < 5; i++) {
		cout << GradeCharacter[i] << " : ";
	}
}

// 문자열 함수
void StringArray()
{
	char Word1[6] = "HELLO"; //"" 는 글자수에 +1

	char Word2[] = "Bubbles";
}

// 버블 정열(sort)

void BubbleSort()
{
	//숫자 개수 10개
	int Number[10] = { 3,6,8,1,4,2,10,5,9,7 };
	int Temp = 0;

	for (int i = 9; i >= 0; i--) {
		for (int j = 0; j < i; j++) {
			if (Number[j] > Number[j+1]) {
				//바꾸기 1:1로 바꾸기 불가, 빈공간(임시변수)에 하나를 옴기고 바꾸는 방식으로 진행
				Temp = Number[j];
				Number[j] = Number[j + 1];
				Number[j + 1] = Temp;

			}
		}
	}

	for (int i = 0; i < 10; i++) {
		cout << Number[i] << " : ";
	}
}

// 2차원 행열
void MultiArray()
{
	int Number[2][3] = { {1,2,3},{4,5,6} };
	
	for (int i = 0; i < 2; i++) {   //for 중첩사용
		for (int j = 0; j < 3; j++) {
			cout << Number[i][j] << " : ";
		}
	}

}