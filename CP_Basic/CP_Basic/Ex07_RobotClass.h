#pragma once
/*
	1) CRobot 클래스 - Set, Print 함수 사용
	2) CRobot 클래스 - 로봇 명세(데이터)를 모두 출력
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