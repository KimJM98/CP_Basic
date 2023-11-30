#include"io.h"

void Diet()
{
	int W = 60;// 80>= W>=10
	int C = 0;
	int E = 0;
	int N = 5;

	int Total = 0;

	cin >> C;
	cin >> E;

	for (int i = 0; i < 6; i++)
	{
		if (C > E) {
			W += 1;
		}
		else if (C < E) {
			W -= 1;
		}
		else {}
	}
	cout << Total << endl;
}
