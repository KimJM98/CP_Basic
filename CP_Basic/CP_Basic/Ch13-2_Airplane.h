#pragma once

class Airplane
{
private: // ������ private
	int Energy;
	int SpecialBombNumber;

public: // �Լ��� public

	int Temp;
	//������ �Լ�, Ŭ���� ���� ����� ���� �ѹ� ���� -> �ʱ�ȭ
	//�⺻ ������(Default Constructor)
	Airplane();
	//�Ű����� ���� �޾Ƽ� Ŭ���� �ʱ�ȭ,�� �⺻���� ��� ������ �׳� �Ѵ� ����
	Airplane(int EnergyNumber, int BombNumber);
	~Airplane();//�Ҹ��� �Լ�, 

	void SetEnergy(int EnergyNumber);
	int GetEnergy();
	
	void SetBomb(int BombNumber);
	int GetBomb();

	void PrintEnergy();
	void PrintBomb();

};