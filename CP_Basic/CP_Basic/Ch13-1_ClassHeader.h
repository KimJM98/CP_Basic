#pragma once

class Player
{
public:
	int ItemNumber = 0;
	int PlayerEnergy = 0;
	char Weapon = ' '; //NULL를 쓸 수 없어서 빈칸으로 초기화 -> ios.. 인클루드하면 쓸 수 있음

	void SetDate();
	void PrintItemNumber();
	void PrintEnergy();
	void PrintWeapon();
};