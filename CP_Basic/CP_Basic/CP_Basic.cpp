#include "io.h"
#include "DefineFunction.h"

// 함수 원형선언 : main함수 위에 선언
void DefineFunction();

int main()
{
    // 함수호출
    //CppBasic();
    //Variable();
     
    // 매개함수
    //ParameterFunction(10, 20);
    //cout << 50 + ReturnFunction() << endl;
    //cout << 30 + ParamReturn(10, 20) << endl;
    //cout << 30 + ParamReturn(30, 20) << endl;

    // 배열
    //PrintArray();
    //SumArray();
    //ProcessScore();
    BubbleSort();

}
    
//함수 정의 : main함수 뒤에 정의
void DefineFunction()
{
    cout << "Hello Function" << endl;
}