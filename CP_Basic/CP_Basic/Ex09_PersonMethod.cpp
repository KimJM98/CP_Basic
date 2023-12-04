#include<string>
#include"Ex09_Person.h"
#include<iostream>

using namespace std;

void CPerson::Set(string Name, int Age, int Gender)
{
	this->Name = Name;
	this->Age = Age;
	this->Gender = Gender;

}

string CPerson::GetName()
{
	return this->Name;
}

int CPerson::GetAge()
{
	return this->Age;
}

int CPerson::GetGender()
{
	return this->Gender;
}

void CStudent::Set(string Name, int Age, int Gender, int ID, string Major)
{
	CPerson::Set(Name, Age, Gender);
	
	this->ID = ID;
	this->Major = Major;
}

void CStudent::Print()
{
	cout << "__________________" << endl;
	cout << endl;
	cout << "�̸�: " << GetName() << endl;
	cout << "����: " << GetAge() << endl;
	if (GetGender() == 1) {
		cout << "����: ����" << endl;
	}
	else {
		cout << "����: ����" << endl;
	}
	cout <<" ID : "<<ID << endl; //CStudent���� �����ѰŶ� �ٷξ�
	cout << "����: "<<Major << endl; //CStudent���� �����ѰŶ� �ٷξ�
}