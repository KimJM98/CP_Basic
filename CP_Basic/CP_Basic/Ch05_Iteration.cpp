#include "io.h"

void ForFunctionDesc()
{
    // 반복문
    // 조건식에 사용되는 범위 숫자가 반복 횟수를 나타내도록
    for (int i = 0; i < 10; i++) {
        cout << "Hi" << endl;
    }
    int Total = 0;
    for (int i = 1; i <= 10; i++) {
        Total = Total + i; // Total +=i; 로 줄일 수 있음
        cout << Total << endl; //누계
    }
    cout << Total << endl; //합계
}

void ForFunctionEx01()
{
    // 구구단 2단
    int Dan2 = 0;
    for (int i = 1; i <= 9; i++) {
        Dan2 = 2 * i;
        cout << "2 X " << i << " = ";
        cout << Dan2 << endl;
    }
}

void ForFunctionEx02()
{
    // for 중첩
// 구구단 전체 (2단, 3단, 4단, ...) 
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
    // 반복 횟수를 입력받고, 반복 될때마다
    // 두 수 A,B를 입력 받아 A+B의 결과값을 표시

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
    // 분해
    /*
        1. 총 금액 입력
        2. 물건 종류 수 입력 = 반복 횟수
        3. 반복 실행
            3-1. 각 물건 개당 가격 입력
            3-2. 각 물건 개수 입력
            3-3. 각 물건 개당 가격 * 개수
            3-4. 각 물건 전체 가격의 합
        4. 입력 받은 총 금액과 계산 결과 총합 비교
        5. 위 과정의 결과가 ture-> yes / false-> no
    */
    
    // 1.
        int TotalPrice = 0;// 총 금액
        cout << "영수증 총 금액을 입력해주세요." << endl;
        //cin >> TotalPrice;
        // 2.
        int SortNumber = 0;// 구매한 물건의 종류 수
        cout << "구매 물건의 수를 입력해주세요." << endl;
        //cin >> SortNumber;
        // 3.
        int ProductPrice = 0;
        int ProductNumber = 0;
        int TotalProductPrice = 0;
        int SumTotalPrice = 0;
        for (int i = 0; i < SortNumber; i++) {
            //3-1.
            cout << "물건의 개당 가격 : ";
            // cin >> ProductPrice;
             //3-2.
            cout << "물건의 개수 : ";
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
    /*  while : 조건비교식이 참인 경우 반복 실행
        while(조건비교식){}
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

    /* "로그인이 성공할 때까지 반복한다"라는 조건비교식
        while (true) {
            로그인 시도
            아이디/비번 체크
            로그인 성공
            break;
            로그인 실패
    */
}

void WhileFunctionEx01()
{
    /*
        1. 총 금액 입력
        2. 반복 실행(while) : 조건비교 (총 금액 != 0)
         2-1. 각 물건 개당 가격 입력
         2-2. 각 물건 개수 입력
         2-3. 각 물건 개당 가격 * 개수 = 물건당 금액
         2-4. 총 금액 - 물건당 금액
        3. Yes 출력
    */
    // 1.
    int TotalPrice1 = 0;
    cout << "영수증 총 금액을 입력해주세요." << endl;
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
        cout << "물건 개당 가격 입력 : ";
        cin >> ProductPrice1;
        //2-2.
        cout << "물건 개수 입력 : ";
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