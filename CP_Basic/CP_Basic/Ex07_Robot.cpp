#include"io.h"
#include"Ex07_RobotClass.h"
#include<string>
#include<vector>
/*
	 태권브이 = V, 마징가 = Z, 메칸더브이 = M, 그랜다이저 = G
*/


void RobotPerfoemance()
{
	cout << "   이름" << "   | " << "신장(cm)" << " | " << "무게(T)" << " | " << "마력" << endl;
	cout << "--------------------------------------" << endl;

	string Name[4] = { " 태권브이 ","  마징가  ","메칸더브이","그랜다이저"};

	int RobotPerfoemance[4][3] = {
		{18,80,3000},
		{17,70,2500},
		{20,90,3500},
		{22,100,5000}
	};

	CRobot pm[4];
	for (int i = 0; i < 4; i++) {
		pm[i].Set(Name[i], RobotPerfoemance[i][0], RobotPerfoemance[i][1], RobotPerfoemance[i][2]);
	}
	for (int i = 0; i < 4; i++) {
		pm[i].Print();
	}
}