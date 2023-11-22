#include "io.h"

void IfFunctionDesc()
{
    //조건,분기문

    int Condition1 = 100;
    /*
        if가 포함하는 조건식의 원리
        결과값이 bool 데이터

        조건식의 종류
        - 비교연산식
        - bool 데이터
        - true :
        - 산술 연산식
    */
    if (Condition1 >= 50) {
        //참일때 실행구문
        cout << Condition1 << endl;
    }
    if (true) {}
    if (false) {}
    if (1) {}
    if (0) {}
    if (20) {}//0 : false, 이외의 정수 : true

    /*
        if(조건식1){
            // 조건식1이 참일때 실행구문
        } else

        if(조건식2){
            // 조건식2이 참일때 실행구문
        }

        if(조건식3){
            // 조건식3이 참일때 실행구문
        } else if(조건식4){
            //조건식4가 참일때 실행구문
        }
    */
}

void IfFunctionEx01() 
{
    //A와B 두 수를 입력받아 비교해서 결과 출력
    //출력: A>B => ">",A<B => "<",A=B => "=="
    int NumA = 0;
    int NumB = 0;

    cin >> NumA;
    cin >> NumB;

    if (NumA > NumB) {
        cout << ">" << endl;
    }
    else if (NumA < NumB) {
        cout << "<" << endl;
    }
    else {
        cout << "=" << endl;
    }
}

void IfFunctionEx02()
{
    // 시험점수 입력, 90~100:A, 80~89:B, 70~79:C, 60~69:D, 60미만:F  
    int NumTest = 0;
   
    cin >> NumTest;
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
}

void IfFunctionEx03()
{
   
}

void IfNestDesc()
{
   
}

void IfNestEx01()
{
   // 상점에 도둑이 들었을 때, 목격자가 인상착의를 말했다.
   // 키는 약 180 이상, 옷은 검정색 옷을 입고 있고 있었다고 말했다.
   // 범인을 잡을 수 있는 조건문을 작성하시오.
   // 옷색 입력값: Black= B, White = W, Red = R

    int TallNumber = 0;
    char ClothColor = NULL;

    cin >> TallNumber;
    cin >> ClothColor;

    /*
    if (TallNumber >= 180 && ClothColor == 'B') {
        cout << "범인" << endl;
    }
    else if (TallNumber >= 180 || ClothColor == 'B') {
        cout << "용의자" << endl;
    }
    else {
        cout << "시민" << endl;
    }*/
}

void IfNestEx02()
{
    //if 중첩, 위 내용과 같음
    int TallNumber = 0;
    char ClothColor = NULL;

    cin >> TallNumber;
    cin >> ClothColor;
    if (TallNumber >= 180) {
        if (ClothColor == 'B') {
            cout << "범인" << endl;
        }
        else {
            cout << "용의자" << endl;
        }
    }
    else {
        if (ClothColor == 'B') {
            cout << "용의자" << endl;
        }
        else {
            cout << "시민" << endl;
        }
    }
}

void SwitchEx()
{
    // switch~case
    // 요일 번호 입력, 해당 번호의 요일 이름을 출력
    // 0:일요일 ~ 6:토요일
    int DayNum = 0;
    cout << "요일번호를 입력해주세요[0~6] :";
    //cin >> DayNum;
    switch (DayNum) {
    case 0:
        cout << "일요일" << endl;
        break;
    case 1:
        cout << "월요일" << endl;
        break;
    case 2:
        cout << "화요일" << endl;
        break;
    case 3:
        cout << "수요일" << endl;
        break;
    case 4:
        cout << "목요일" << endl;
        break;
    case 5:
        cout << "금요일" << endl;
        break;
    case 6:
        cout << "토요일" << endl;
    }
}

