#include"io.h"
#include"Ch17_OverloadingClass.h"

Overloading::Overloading()
{
	this->Number = 1;
	this->Name = "Altman";
}
Overloading::~Overloading()
{

}

void Overloading::Print()
{
	cout << this->Name << " : " << this->Number << endl;
}
void Overloading::Print(int Number) 
{
	this->Number = Number;
	
	cout << this->Name << " : " << this->Number << endl;
}
void Overloading::Print(std::string Name)
{
	this->Name = Name;

	cout << this->Name << " : " << this->Number << endl;
}
void Overloading::Print(int Number,std::string Name)
{
	this->Number = Number;
	this->Name = Name;

	cout << this->Name << " : " << this->Number << endl;
}

Overloading Overloading::operator+(Overloading& arg) // *,& 선언할 때는 앞쪽에 연산할 때는 뒷쪽에 붙음 
// 타입         소속
{
	Overloading Temp;
	Temp.Value = Value + arg.Value;
	return Temp;
}