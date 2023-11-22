#include "io.h"

void ForFunctionDesc()
{
    // �ݺ���
    // ���ǽĿ� ���Ǵ� ���� ���ڰ� �ݺ� Ƚ���� ��Ÿ������
    for (int i = 0; i < 10; i++) {
        cout << "Hi" << endl;
    }
    int Total = 0;
    for (int i = 1; i <= 10; i++) {
        Total = Total + i; // Total +=i; �� ���� �� ����
        cout << Total << endl; //����
    }
    cout << Total << endl; //�հ�
}

void ForFunctionEx01()
{
    // ������ 2��
    int Dan2 = 0;
    for (int i = 1; i <= 9; i++) {
        Dan2 = 2 * i;
        cout << "2 X " << i << " = ";
        cout << Dan2 << endl;
    }
}

void ForFunctionEx02()
{
    // for ��ø
// ������ ��ü (2��, 3��, 4��, ...) 
    int Dan = 0;
    for (int i = 2; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            Dan = i * j;
            cout << i << " X " << j << " = ";
            cout << Dan << endl;
        }
        cout << endl;
    }
}

void ForFunctionEx03()
{
    // �ݺ� Ƚ���� �Է¹ް�, �ݺ� �ɶ�����
    // �� �� A,B�� �Է� �޾� A+B�� ������� ǥ��

    int IterNumber = 0;
    int IterA = 0;
    int IterB = 0;

    //cin >> IterNumber;
    for (int i = 0; i < IterNumber; i++) {
        cin >> IterA;
        cin >> IterB;
        cout << IterA + IterB << endl;
    }

}

void ForFunctionEx04()
{
    // ����
    /*
        1. �� �ݾ� �Է�
        2. ���� ���� �� �Է� = �ݺ� Ƚ��
        3. �ݺ� ����
            3-1. �� ���� ���� ���� �Է�
            3-2. �� ���� ���� �Է�
            3-3. �� ���� ���� ���� * ����
            3-4. �� ���� ��ü ������ ��
        4. �Է� ���� �� �ݾװ� ��� ��� ���� ��
        5. �� ������ ����� ture-> yes / false-> no
    */
    
    // 1.
        int TotalPrice = 0;// �� �ݾ�
        cout << "������ �� �ݾ��� �Է����ּ���." << endl;
        //cin >> TotalPrice;
        // 2.
        int SortNumber = 0;// ������ ������ ���� ��
        cout << "���� ������ ���� �Է����ּ���." << endl;
        //cin >> SortNumber;
        // 3.
        int ProductPrice = 0;
        int ProductNumber = 0;
        int TotalProductPrice = 0;
        int SumTotalPrice = 0;
        for (int i = 0; i < SortNumber; i++) {
            //3-1.
            cout << "������ ���� ���� : ";
            // cin >> ProductPrice;
             //3-2.
            cout << "������ ���� : ";
            //cin >> ProductNumber;
            //3-3.
            TotalProductPrice = ProductPrice * ProductNumber;
            //3-4.
            SumTotalPrice = SumTotalPrice + TotalProductPrice;
        }
        // 4. 5.
        if (TotalPrice == SumTotalPrice) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
 }

void WhileFunctionDesc()
{
    /*  while : ���Ǻ񱳽��� ���� ��� �ݺ� ����
        while(���Ǻ񱳽�){}
        while(true){}
        while(1){}
    */
    int iter = 0;
    while (iter < 10) {
        cout << "Hello World" << endl;
        iter++;
    }
    do {
        cout << "Hello World" << endl;
        iter++;

    } while (iter < 10);

    /* "�α����� ������ ������ �ݺ��Ѵ�"��� ���Ǻ񱳽�
        while (true) {
            �α��� �õ�
            ���̵�/��� üũ
            �α��� ����
            break;
            �α��� ����
    */
}

void WhileFunctionEx01()
{
    /*
        1. �� �ݾ� �Է�
        2. �ݺ� ����(while) : ���Ǻ� (�� �ݾ� != 0)
         2-1. �� ���� ���� ���� �Է�
         2-2. �� ���� ���� �Է�
         2-3. �� ���� ���� ���� * ���� = ���Ǵ� �ݾ�
         2-4. �� �ݾ� - ���Ǵ� �ݾ�
        3. Yes ���
    */
    // 1.
    int TotalPrice1 = 0;
    cout << "������ �� �ݾ��� �Է����ּ���." << endl;
    cin >> TotalPrice1;
    //2.
    int ProductPrice1 = 0;
    int ProductNumber1 = 0;
    int ProductTotalPrice1 = 0;
    bool Zero = true;
    while (TotalPrice1 != 0) {
        if (TotalPrice1 < 0) {
            Zero = false;
            break;
        }
        //2-1.
        cout << "���� ���� ���� �Է� : ";
        cin >> ProductPrice1;
        //2-2.
        cout << "���� ���� �Է� : ";
        cin >> ProductNumber1;
        //2-3.
        ProductTotalPrice1 = ProductPrice1 * ProductNumber1;
        //2-4.
        TotalPrice1 = TotalPrice1 - ProductTotalPrice1;
    
    }
    if (Zero == false) {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
    
}