// Ch01_Basic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define Number 100

using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    //std:standard
    cout << "Hello C++\n";
    cout << "C++ Programming\n";
    cout << 500 << endl; // endl : endline
    cout << Number + 100 + "\n";

    // Ű����, ����� : ����, ��ɹ�
    // Ű���� : ���� Ÿ�� ����

    int Number1; // ���� ���� ��
    Number1 = 10;

    int Number2 = 10; // ���� ���� �� �ʱ�ȭ

    int Number3 = 1, Number4 = 2;

    Number3 = 5;

    // �ɺ��� ���(Constant)
    const int Number5 = 10;

    // Number5 = 30; //���� ���� �� �� ����

    // ������ Ÿ�� - ���� ������ Ÿ�� - ������, �Ǽ���

    // ������ Ÿ��(int : integer)
    int NUM1 = 10;
    short NUM2 = 10;
    long NUM3 = 10;

    // �Ǽ��� Ÿ��(float)
    float NUM10 = 1.234f;
    double NUM11 = 1.234;

    // ���� ������ : ����(1��), ���ڿ�(2���̻�)
    // char : character
    // char  Ÿ�� ���� ǥ�� : '' ���
    // ���ڿ� : "" ���
    char Letter = 'a';

    // bool Ÿ�� ������
    // ��/���� ���� : True/False, Yes/No, On/Off
    bool Condition = true;

    // auto ���� Ű����
    auto AutoNum = 10;

    cout << Number1 << endl;

    int Arithmetic1 = 30;
    int Arithmetic2 = 17;

    cout << Arithmetic1 + Arithmetic2 << endl;
    cout << Arithmetic1 - Arithmetic2 << endl;
    cout << Arithmetic1 * Arithmetic2 << endl;
    cout << Arithmetic1 / Arithmetic2 << endl;
    cout << Arithmetic1 % Arithmetic2 << endl;
    //���� ���꿡�� �ݺ� ������ ������ ����
    int Inc = 30;
    Inc = Inc + 3;
    cout << Inc << endl;
    Inc = Inc + 3;
    cout << Inc << endl;
    Inc = Inc + 3;
    cout << Inc << endl;


}
// ��Ʈ�� ����Ʈ�� ����