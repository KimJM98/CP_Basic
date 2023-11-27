#include"io.h"
#include<stdlib.h>

/*
	* 오름차순 정렬 (아주 깔끔해짐)
		: N자리 수가 하나라도 달라 지면 첫번째와 마지막은 같은 수가 나올 수 없음
	
	4개의 주사위에서 a,b,c,d 4개의 값이 나올 때 (if ~ else if ~ else)
	1. a=b=c=d
		: 기본 -> a==b && b==c && c==d
		: 정렬 -> a==d

	2. a=b=c / a=c=d / a=d=b / b=c=d
		: 정렬 -> a==c || b==d (or)

	3. a=b, c=d / a=c, b=d / a=d, b=c
		: 정렬 -> a=b && c=d (and)

	4. a=b / a=c / a=d / b=c / b=d / c=d
		: 정렬 -> a=b || b=c || c=d

	5. a!=b!=c!=d!
		: else
	
*/

void Dice()
{
	int Dice[4] = { 0,0,0,0 };
	
	for (int i = 0; i < 4; i++) {
		cin >> Dice[i];
	}

	int Temp = 0;


	for (int i = 3; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (Dice[i] > Dice[j + 1]) {
				Temp = Dice[j];
				Dice[j] = Dice[j + 1];
				Dice[j + 1] = Temp;
			}
		}
	}
	
	if (Dice[0] == Dice[3]) {
		cout << Dice[0] * 1111 << endl;
	}
	else if (Dice[0] == Dice[2]) {
		cout << (10 * Dice[0] + Dice[3])* (10 * Dice[0] + Dice[3]) << endl;
	}
	else if ( Dice[1] == Dice[3]) {
		cout << (10 * Dice[1] + Dice[0])* (10 * Dice[1] + Dice[0]) << endl;
	}
	else if (Dice[0] == Dice[1] && Dice[2] == Dice[3]) {
		cout << (Dice[0] + Dice[2]) * abs(Dice[0] - Dice[2]) << endl;
	}
	else if (Dice[0] == Dice[1]) {
		cout << (Dice[2] * Dice[3]) << endl;
	}
	else if (Dice[1] == Dice[2]) {
		cout << (Dice[0] * Dice[3]) << endl;
	}
	else if (Dice[2] == Dice[3]) {
		cout << (Dice[1] * Dice[3]) << endl;
	}
	else {
		cout << Dice[0] << endl;
	}

}