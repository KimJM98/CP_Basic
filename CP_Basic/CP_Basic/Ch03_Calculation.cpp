#include "io.h"
void Arithmetic() {
    //산술 연산자
    int Arithmetic1 = 30;
    int Arithmetic2 = 17;

    cout << Arithmetic1 + Arithmetic2 << endl;
    cout << Arithmetic1 - Arithmetic2 << endl;
    cout << Arithmetic1 * Arithmetic2 << endl;
    cout << Arithmetic1 / Arithmetic2 << endl;
    cout << Arithmetic1 % Arithmetic2 << endl;

    
}

void Increment() {
    //증감 연산에는 반복 실행의 개념이 포함
    int Inc = 30;
    Inc = Inc + 3;
    cout << Inc << endl;
    Inc = Inc + 3;
    cout << Inc << endl;
    Inc = Inc + 3;
    cout << Inc << endl;

}

void CompareFunction() {
    int Compare1 = 10;
    int Compare2 = 20;

    cout << (Compare1 > Compare2) << endl;
    cout << (Compare1 < Compare2) << endl;
    cout << (Compare1 >= 100) << endl;
    cout << (Compare1 == Compare2) << endl;
    cout << (Compare1 != Compare2) << endl;

   
}

void Logical() {
    int Compare1 = 10;
    int Compare2 = 20;
    cout << (!(Compare1 < Compare2)) << endl;
}