#include "io.h"
void Arithmetic() {
    //��� ������
    int Arithmetic1 = 30;
    int Arithmetic2 = 17;

    cout << Arithmetic1 + Arithmetic2 << endl;
    cout << Arithmetic1 - Arithmetic2 << endl;
    cout << Arithmetic1 * Arithmetic2 << endl;
    cout << Arithmetic1 / Arithmetic2 << endl;
    cout << Arithmetic1 % Arithmetic2 << endl;

    
}

void Increment() {
    //���� ���꿡�� �ݺ� ������ ������ ����
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