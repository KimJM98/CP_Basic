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

Overloading Overloading::operator+(Overloading& arg) // *,& ������ ���� ���ʿ� ������ ���� ���ʿ� ���� 
// Ÿ��         �Ҽ�
{
	Overloading Temp;
	Temp.Value = Value + arg.Value;
	return Temp;
}