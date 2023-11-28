#include"io.h"
#include"Ch13-1_ClassHeader.h"
#include"Ch13-2_Airplane.h"
/*
	정보 은닉 : 데이터 변수를 어디에서 사용할지 결정
	
	클래스 내부에서만 상용 가능 : private
	클래스 외부에서도 사용 가능 : public
	상속된 클래스에서 사용 가능 : protected

	private, public, protected 키워드를 사용해서 범위 결정
	키워드를 사용하지 않으면 default = private
*/
class Car
{
public: // :으로 묶으면 그 밑에 함수들은 다 적용
	char Size = NULL;
	char Color = NULL;
	float Weight = 0.0f;

	void MoveFoward()
	{
		cout << "Move Foward" << endl;
	}
	void MoveBackward()
	{
		cout << "Move Backward" << endl;
	}
	void Break()
	{
		cout << "Break" << endl;
	}
};

void DefineClass()
{
	Car Ray;

	Ray.Size = 'S'; //(S)Mall, (M)idium, (L)arge
	
	Ray.MoveFoward();


}

void PrintPlayer()
{
	Player Pino;

	Pino.SetDate();
	
	Pino.PrintItemNumber();
	Pino.PrintEnergy();
	Pino.PrintWeapon();

	Pino.ItemNumber = 5;
	Pino.PrintItemNumber();


}

void PrintAirplane()
{
	Airplane F16; // 기본 생성자 호출
	
	F16.SetEnergy(100);
	F16.SetBomb(10);

	F16.PrintEnergy();
	F16.PrintBomb();


	F16.SetEnergy(F16.GetEnergy() - 30);
	F16.SetBomb(F16.GetBomb() - 3);

	F16.PrintEnergy();
	F16.PrintBomb();

	Airplane KF21(100, 20); //매개변수 이용 생성자 호출

	KF21.PrintEnergy();
	KF21.PrintBomb();
	
	KF21.SetEnergy(F16.GetEnergy() - 30);
	KF21.SetBomb(F16.GetBomb() - 3);
	
	KF21.PrintEnergy();
	KF21.PrintBomb();


}

void DynamicAirplane()
{
	//정적 생성
	Airplane Boeing(300, 2);

	Boeing.PrintEnergy();

	//동적 생성
	Airplane* A10 = new Airplane;

	A10->PrintEnergy();
	A10->Temp = 0;

	Airplane* A30 = new Airplane(300, 4);

	A30->PrintEnergy();
	A30->PrintBomb();

	delete A10; // 동적 생성시 꼭 필요
	delete A30;
}