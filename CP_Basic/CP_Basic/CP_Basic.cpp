#include "io.h"
#include "DefineFunction.h"


int main()
{
    DefineFunction(); //�Լ� ȣ��
    CppBasic();
    

    
    //���

    int Condition1 = 100;
    /*
        if�� �����ϴ� ���ǽ��� ����
        ������� bool ������

        ���ǽ��� ����
        - �񱳿����
        - bool ������
        - true : 
        - ��� �����
    */
    if (Condition1 >= 50) {
        //���϶� ���౸��
        cout << Condition1 << endl;
    }
    if(true){}
    if(false){}
    if(1){}
    if(0){}
    if(20){}//0 : false, �̿��� ���� : true
    
    /*
        if(���ǽ�1){
            // ���ǽ�1�� ���϶� ���౸��
        } else 

        if(���ǽ�2){
            // ���ǽ�2�� ���϶� ���౸��
        }

        if(���ǽ�3){
            // ���ǽ�3�� ���϶� ���౸��
        } else if(���ǽ�4){
            //���ǽ�4�� ���϶� ���౸��
        }
    */

    //A��B �� ���� �Է¹޾� ���ؼ� ��� ���
    //���: A>B => ">",A<B => "<",A=B => "=="
    int NumA = 0;
    int NumB = 0;
   
    //cin >> NumA;
    //cin >> NumB;

    if (NumA > NumB) {
        cout << ">" << endl;
    }
    else if (NumA < NumB) {
        cout << "<" << endl;
    }
    else {
        cout << "=" << endl;
    }
    // �������� �Է�, 90~100:A, 80~89:B, 70~79:C, 60~69:D, 60�̸�:F  
    int NumTest = 0;
   // cin >> NumTest;
    if (NumTest >= 90) {
        cout << "A" << endl;
    }
    else if (NumTest >= 80) {
        cout << "B" << endl;
    }
    else if (NumTest >= 70) {
        cout << "C" << endl;
    }
    else if (NumTest >= 60) {
        cout << "D" << endl;
    }
    else {
        cout << "F" << endl;
    }
    // ������ ������ ����� ��, ����ڰ� �λ����Ǹ� ���ߴ�.
    // Ű�� �� 180 �̻�, ���� ������ ���� �԰� �ְ� �־��ٰ� ���ߴ�.
    // ������ ���� �� �ִ� ���ǹ��� �ۼ��Ͻÿ�.
    // �ʻ� �Է°�: Black= B, White = W, Red = R
   
    int TallNumber = 0;
    char ClothColor = NULL;

    //cin >> TallNumber;
    //cin >> ClothColor;

    /*
    if (TallNumber >= 180 && ClothColor == 'B') {
        cout << "����" << endl;
    }
    else if (TallNumber >= 180 || ClothColor == 'B') {
        cout << "������" << endl;
    }
    else {
        cout << "�ù�" << endl;
    }*/

    //if ��ø, �� ����� ����
    if (TallNumber >= 180) {
        if (ClothColor == 'B') {
            cout << "����" << endl;
        }
        else {
            cout << "������" << endl;
        }
    }
    else {
        if (ClothColor == 'B') {
            cout << "������" << endl;
        }
        else {
            cout << "�ù�" << endl;
        }
    }
    
    // ���� ��ȣ �Է�, �ش� ��ȣ�� ���� �̸��� ���
    // 0:�Ͽ��� ~ 6:�����
    int DayNum = 0;
    cout << "���Ϲ�ȣ�� �Է����ּ���[0~6] :";
    //cin >> DayNum;
    switch (DayNum) {
        case 0:
            cout << "�Ͽ���" << endl;
            break;
        case 1:
            cout << "������" << endl;
            break;
        case 2:
            cout << "ȭ����" << endl;
            break;
        case 3:
            cout << "������" << endl;
            break;
        case 4:
            cout << "�����" << endl;
            break;
        case 5:
            cout << "�ݿ���" << endl;
            break;
        case 6:
            cout << "�����" << endl;
    }
   
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

    // ������ 2��
    int Dan2 = 0;
    for (int i = 1; i <= 9; i++) {
        Dan2 = 2 * i;
        cout << "2 X " << i<<" = ";
        cout << Dan2 << endl;
    }

    // for ��ø
    // ������ ��ü (2��, 3��, 4��, ...) 
    int Dan = 0;
    for (int i = 2; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            Dan = i * j;
            cout << i << " X " <<j <<" = ";
            cout << Dan << endl;
        }
        cout << endl;
    }

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

    // �ݺ� Ƚ���� �Է¹ް�, �ݺ� �ɶ�����
    // �� �� A,B�� �Է� �޾� A+B�� ������� ǥ��

    int IterNumber = 0;
    int IterA = 0;
    int IterB = 0;

    //cin >> IterNumber;
    for (int i = 0; i < IterNumber; i++) {
       // cin >> IterA;
      //  cin >> IterB;
        cout << IterA + IterB << endl;
    }
    
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

//�Լ� ����
void DefineFunction() {
    cout << "Hello Function" << endl;
}