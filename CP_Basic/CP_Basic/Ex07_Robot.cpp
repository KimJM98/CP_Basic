#include"io.h"
#include"Ex07_RobotClass.h"
#include<string>
#include<vector>
/*
	 �±Ǻ��� = V, ��¡�� = Z, ��ĭ������ = M, �׷������� = G
*/


void RobotPerfoemance()
{
	cout << "   �̸�" << "   | " << "����(cm)" << " | " << "����(T)" << " | " << "����" << endl;
	cout << "--------------------------------------" << endl;

	string Name[4] = { " �±Ǻ��� ","  ��¡��  ","��ĭ������","�׷�������"};

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