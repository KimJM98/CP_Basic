#pragma once
/*
	1) CRobot Ŭ���� - Set, Print �Լ� ���
	2) CRobot Ŭ���� - �κ� ��(������)�� ��� ���
*/

class CRobot
{
private:
	std::string Name;
	int Heigt;
	int Weight;
	int Horsepower;
	
public:
	void Set(string Name, int Heigt, int Weight, int Horsepower);
	void Print();
};