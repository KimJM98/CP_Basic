#include"io.h"
#include"Ex07_RobotClass.h"
void CRobot::Set(string Name, int Heigt, int Weight, int Horsepower)
{
	this->Name = Name;
	this->Heigt = Heigt;
	this->Weight = Weight;
	this->Horsepower = Horsepower;

}

void CRobot::Print()
{
	cout << this->Name << "|    " << this->Heigt << "    |    " << this->Weight << "   | " << this->Horsepower << endl;


}

