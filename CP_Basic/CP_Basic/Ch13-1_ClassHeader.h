#pragma once

class Player
{
public:
	int ItemNumber = 0;
	int PlayerEnergy = 0;
	char Weapon = ' '; //NULL�� �� �� ��� ��ĭ���� �ʱ�ȭ -> ios.. ��Ŭ����ϸ� �� �� ����

	void SetDate();
	void PrintItemNumber();
	void PrintEnergy();
	void PrintWeapon();
};