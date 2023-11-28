#include"io.h"
#include"Ch13-1_ClassHeader.h"
#include"Ch13-2_Airplane.h"
/*
	���� ���� : ������ ������ ��𿡼� ������� ����
	
	Ŭ���� ���ο����� ��� ���� : private
	Ŭ���� �ܺο����� ��� ���� : public
	��ӵ� Ŭ�������� ��� ���� : protected

	private, public, protected Ű���带 ����ؼ� ���� ����
	Ű���带 ������� ������ default = private
*/
class Car
{
public: // :���� ������ �� �ؿ� �Լ����� �� ����
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
	Airplane F16; // �⺻ ������ ȣ��
	
	F16.SetEnergy(100);
	F16.SetBomb(10);

	F16.PrintEnergy();
	F16.PrintBomb();


	F16.SetEnergy(F16.GetEnergy() - 30);
	F16.SetBomb(F16.GetBomb() - 3);

	F16.PrintEnergy();
	F16.PrintBomb();

	Airplane KF21(100, 20); //�Ű����� �̿� ������ ȣ��

	KF21.PrintEnergy();
	KF21.PrintBomb();
	
	KF21.SetEnergy(F16.GetEnergy() - 30);
	KF21.SetBomb(F16.GetBomb() - 3);
	
	KF21.PrintEnergy();
	KF21.PrintBomb();


}

void DynamicAirplane()
{
	//���� ����
	Airplane Boeing(300, 2);

	Boeing.PrintEnergy();

	//���� ����
	Airplane* A10 = new Airplane;

	A10->PrintEnergy();
	A10->Temp = 0;

	Airplane* A30 = new Airplane(300, 4);

	A30->PrintEnergy();
	A30->PrintBomb();

	delete A10; // ���� ������ �� �ʿ�
	delete A30;
}