#include<iostream>
#include<cstring>
#include<fstream>
#include<string>
using namespace std;
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

char v[10] = {'0', '1','2','3','4','5','6','7','8','9' };
void tabel()
{
	cout << "**********" << "TIC TAC TOE GAME" << "**********" << endl;
	cout << endl;
	cout << "Jucatorului 1 ii corespunde X\nJucatorului 2 ii corespunde 0\n";
	cout << endl;
	cout << endl;
	
}
int castigator()
{
	if (v[1] == v[2] && v[2] == v[3])

		return 1;
	else if (v[4] == v[5] && v[5] == v[6])

		return 1;
	else if (v[7] == v[8] && v[8] == v[9])

		return 1;
	else if (v[1] == v[4] && v[4] == v[7])

		return 1;
	else if (v[2] == v[5] && v[5] == v[8])

		return 1;
	else if (v[3] == v[6] && v[6] == v[9])

		return 1;
	else if (v[1] == v[5] && v[5] == v[9])

		return 1;
	else if (v[3] == v[5] && v[5] == v[7])

		return 1;
	
	else
		return 0;
}

void board()
{
	
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " <<v[1] << "  |  " << v[2] << "  |  " << v[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " <<v[4] << "  |  " << v[5] << "  |  " << v[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << v[7] << "  |  " << v[8] << "  |  " << v[9] << endl;

	cout << "     |     |     " << endl << endl;
}

void alegerereJucator()
{
	
	int x;
	int verif = castigator();
	for (int i = 0; i < 9; i++)
	{
		int verif = castigator();
		if (verif == 0)
		{
			board();
			cout << "Jucatorul " << i % 2 + 1 << " alege un numar dintre cele disponibile in tabel: ";
			cin >> x;
			if (i % 2 == 0 && x > 0 && x < 10)
			{
				for (int j = 1; j <= 9; j++)
					if (x == j)
						v[j] = 'X';



			}
			else
				if (i % 2 == 1 && x > 0 && x < 10)
				{
					for (int j = 1; j <= 9; j++)
						if (x == j)
							v[j] = 'O';

				}
		}
		else
		break;



	}

}

int main()
{
	
	
	tabel();
	cout << endl << endl << endl;
	int nr = 1;
	

	alegerereJucator();
	
	


	return 0;
}