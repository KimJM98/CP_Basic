#pragma once

class Airplane
{
private: // 변수는 private
	int Energy;
	int SpecialBombNumber;

public: // 함수는 public

	int Temp;
	//생성자 함수, 클래스 선언 실행시 최초 한번 실행 -> 초기화
	//기본 생성자(Default Constructor)
	Airplane();
	//매개변수 값을 받아서 클래스 초기화,위 기본형이 없어도 되지만 그냥 둘다 쓰기
	Airplane(int EnergyNumber, int BombNumber);
	~Airplane();//소멸자 함수, 

	void SetEnergy(int EnergyNumber);
	int GetEnergy();
	
	void SetBomb(int BombNumber);
	int GetBomb();

	void PrintEnergy();
	void PrintBomb();

};