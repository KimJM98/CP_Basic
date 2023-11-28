#include"Ch13-1_ClassHeader.h"
#include"io.h"

void Player::SetDate()
{
	ItemNumber = 10;
	PlayerEnergy = 100;
	Weapon = 'G';
}

void Player:: PrintItemNumber() //클래스 사용할 때 void 클래스명 :: 함수명
{
	cout << ItemNumber << endl;
}

void Player::PrintEnergy()
{
	cout << PlayerEnergy << endl;
}

void Player::PrintWeapon()
{
	cout << Weapon << endl;
}