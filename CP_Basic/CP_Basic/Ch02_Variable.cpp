#include"io.h"

void Variable() 
{
    int Number1; // ���� ���� ��
    Number1 = 10;//�ʱⰪ ����

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
}