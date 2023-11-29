#include"Ex08_MemberClass.h"

void MemberS()
{
	std::string ID[4] = { "A01","A02","A03","A04" };

	std::string Name[4] = {
		"이순신",
		"세종대왕",
		"신사임당",
		"퇴계이황"
	};

	int Point[4] = { 10,20,30,40 };

	Member People[4];
	for (int i = 0; i < 4; i++) {
		People[i].SetId(ID[i]);
		People[i].SetName(Name[i]);
		People[i].SetPoint(Point[i]);
	}

	for (int i = 0; i < 4; i++) {
		People[i].PrintMember();
	}
}