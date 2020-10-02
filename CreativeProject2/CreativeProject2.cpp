// Pedro Longo
// December 4, 2018
// CIS-5: C++ Programming

// Creative Project 2

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

void CreatePlayer(string nameFirst, string nameLast);

int PlayerStats(int);
double BallDimension(double);
int FieldDimension(long int, long int);
float WinPercentage(float);
void UltimateTeam(int);
void Goal(int);

int main()
{
	string nameFirst;
	string nameLast;
	int selection;
	int random = 0;
	float sum = 0;
	int rating = 0;
	double volume = 0;
	int yardTotalMin = 0;
	int yardTotalMax = 0;

	CreatePlayer(nameFirst, nameLast);

	cout << " Please select one of the following options: " << endl << endl;

	do
	{
		cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "          M A I N     M E N U" << endl;
		cout << " 1. Top 3 Players stats" << endl;
		cout << " 2. Professional Soccer Ball and Field Dimensions" << endl;
		cout << " 3. Win percecntage" << endl;
		cout << " 4. Ultimate Team" << endl;
		cout << " 5. Penalty Shootout" << endl;
		cout << " 0. Retire" << endl << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
		cout << " Selection ==>";
		cin >> selection;

		switch (selection)
		{
		case 1:
			cout << " ~~~ Player Stats ~~~" << endl << endl;
			cout << PlayerStats(sum) << endl;
			break;
		case 2:
			cout << " ~~~ Dimensions ~~~" << endl << endl;
			BallDimension(volume);
			FieldDimension(yardTotalMin, yardTotalMax);
			break;
		case 3:
			cout << " ~~~ Win Percentage ~~~" << endl << endl;
			WinPercentage(sum);
			break;
		case 4:
			cout << " ~~~ Ultimate Team ~~~" << endl << endl;
			UltimateTeam(selection);
			break;
		case 5:
			cout << " ~~~ Penalty Shootout ~~~" << endl << endl;
			Goal(random);
			break;
		case 0:

			break;
		}


	} while (selection != 0);
	cout << " Thanks for Playing!" << endl;

	system("PAUSE");

	return 0;
}
void CreatePlayer(string nameFirst, string nameLast)
{
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << " Welcome to FIFA: C++ Version!" << endl << endl;
	cout << " Let's get started!" << endl;

	cout << " Enter your First name: ";
	cin >> nameFirst;
	cout << " Enter your Last name: ";
	cin >> nameLast;

	cout << endl << " Hello " << nameFirst << " " << nameLast << "!" << endl;
}

int PlayerStats(int sum)
{
	string Top3[3] = { "Lionel Messi ","Neymar Jr.   ","Kylian Mbappe" };
	string Podium[3] = { "GOLD", "SILVER", "BRONZE" };
	int stats[3][2] = { {10,7},{10,6},{11,4} };
	float rating;

	cout << endl << " Top 3 Players of the 2018/19" << endl << endl;
	cout << "                G   A   Rating" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	for (int i = 0; i <= 2; i++)
	{
		for (int j = 0; j <= 0; j++)
		{
			rating = ((stats[i][j] * 1.25) + (stats[i + 1][j - 1])) / 2;
			if (rating)
				cout << " " << Top3[i] << " " << setprecision(2) << stats[i][j] << "   " << stats[i + 1][j - 1] << "   " << rating << " ~~~ " << Podium[i] << " ~~~" << endl;
		}
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	}
	return sum;
}

double BallDimension(double diameter)
{
	double PI = 3.14159;
	diameter = 8.5;
	double volume = (4 / 3) * PI * pow((diameter / 2), 3);
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl << " The diameter of the ball is " << diameter << ", its volume is " << volume << endl << " and weights " << 16 << "oz" << endl << endl;

	return volume;
}

int FieldDimension(long int yardTotalMin, long int yardTotalMax)
{
	int yardLong[2] = { 110,120 };
	int yardWide[2] = { 70,80 };

	yardTotalMin = (yardLong[0] * 3) * (yardWide[0] * 3);
	yardTotalMax = (yardLong[1] * 3) * (yardWide[1] * 3);

	cout << " The minimum length required of a soccer field is: " << yardLong[0] << " yards" << endl;
	cout << " The maximum length permited of a soccer field is: " << yardLong[1] << " yards" << endl << endl;
	cout << " The minimum width required of a soccer field is: " << yardWide[0] << " yards" << endl;
	cout << " The maximum width perimted of a soccer field is: " << yardWide[1] << " yards" << endl;
	cout << " The sqrft of a soccer field may vary between " << yardTotalMin << "sqrft to " << yardTotalMax << "sqrft" << endl << endl;

	return yardTotalMax;
}

float WinPercentage(float sum)
{
	char score[5];
	float points[5];
	float percentage;

	cout << " Enter the last five results of your team with W(win), D(draw), or L(loss):" << endl;

	for (int i = 0; i < 5; i++)
	{
		cin >> score[i];

		if (score[i] == 'W' || score[i] == 'w')
		{
			points[i] = 3.0;
		}
		else if (score[i] == 'D' || score[i] == 'd')
		{
			points[i] = 1.0;
		}
		else if (score[i] == 'L' || score[i] == 'l')
		{
			points[i] = 0.0;
		}
		else
		{
			cout << " Wrong input entered" << endl << endl;
			break;
		}	
	}

	for (int i = 0; i < 5; i++)
	{
		sum += points[i];
	}

	percentage = (sum * 100) / 15.0;

	if (percentage >= 0)
		cout << " Your team has a winning percentage of: " << setprecision(4) << percentage << "%" << endl;
	
	return sum;
}

void UltimateTeam(int selection)
{
	string PlayersF[7] = { "Messi","C.Ronaldo","Neymar Jr.","Hazard","Dybala","Mbappe" };
	string PlayersM[7] = { "Modric","Iniesta","De Bruyne","Kante","Coutinho","Eriksen" };
	string PlayersD[9] = { "J.Boateng","Pique","S. Ramos","Chiellini","Marcelo","Jordi Alba","Mendy","Alaba" };
	string PlayersG[4] = { "Buffon","Curtois","Lloris" };

	int DefenderSelection=1;
	int MidfielderSelection=1;
	int ForwardSelection = 1;
	int GoalieSelection = 1;

	do
	{
		cout << " 1.Choose your 11:" << endl << endl;
		cout << " 0. Back" << endl;
		cin >> selection;

		if (selection == 1)
		{
			cout << endl << " Select one goalie card: " << endl;
			cout << "  ___  " << " ___  " << " ___" << endl;
			cout << " |   | " << "|   | " << "|   |" << endl;
			cout << " | 1 | " << "| 2 | " << "| 3 |" << endl;
			cout << " |___| " << "|___| " << "|___|" << endl << endl;
			cout << endl << "===>";
			cin >> GoalieSelection;

			if (GoalieSelection <= 3 && GoalieSelection >= 1)
			{
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout << " Select a defender card" << endl;
				cout << "  ___  " << " ___  " << " ___ " << " ___" << endl;
				cout << " |   | " << "|   | " << "|   |" << "|   |" << endl;
				cout << " | 1 | " << "| 2 | " << "| 3 |" << "| 4 |" << endl;
				cout << " |___| " << "|___| " << "|___|" << "|___|" << endl << endl;
				cout << "  ___  " << " ___  " << " ___ " << " ___" << endl;
				cout << " |   | " << "|   | " << "|   |" << "|   |" << endl;
				cout << " | 5 | " << "| 6 | " << "| 7 |" << "| 8 |" << endl;
				cout << " |___| " << "|___| " << "|___|" << "|___|" << endl << endl;
				cout << endl << "===>";
				cin >> DefenderSelection;

				if (DefenderSelection >= 1 && DefenderSelection <= 8)
				{
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << " Select a midfielder card" << endl;
					cout << "  ___  " << " ___  " << " ___" << endl;
					cout << " |   | " << "|   | " << "|   |" << endl;
					cout << " | 1 | " << "| 2 | " << "| 3 |" << endl;
					cout << " |___| " << "|___| " << "|___|" << endl << endl;
					cout << "  ___  " << " ___  " << " ___" << endl;
					cout << " |   | " << "|   | " << "|   |" << endl;
					cout << " | 4 | " << "| 5 | " << "| 6 |" << endl;
					cout << " |___| " << "|___| " << "|___|" << endl << endl;
					cout << endl << "===>";
					cin >> MidfielderSelection;

					if (MidfielderSelection >= 1 && MidfielderSelection <= 6)
					{
						cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
						cout << " Select an attacker card" << endl;
						cout << "  ___  " << " ___  " << " ___" << endl;
						cout << " |   | " << "|   | " << "|   |" << endl;
						cout << " | 1 | " << "| 2 | " << "| 3 |" << endl;
						cout << " |___| " << "|___| " << "|___|" << endl << endl;
						cout << "  ___  " << " ___  " << " ___" << endl;
						cout << " |   | " << "|   | " << "|   |" << endl;
						cout << " | 4 | " << "| 5 | " << "| 6 |" << endl;
						cout << " |___| " << "|___| " << "|___|" << endl << endl;
						cout << endl << "===>";
						cin >> ForwardSelection;

						if (ForwardSelection >= 1 && ForwardSelection <= 6)
						{
							GoalieSelection = rand() % 3;
							DefenderSelection = rand() % 8;
							MidfielderSelection = rand() % 6;
							ForwardSelection = rand() % 6;

							cout << " Your four cards are:" << endl;
							cout << " " << PlayersG[GoalieSelection] << ", " << PlayersD[DefenderSelection] << ", " << PlayersM[MidfielderSelection]
								<< " and " << PlayersF[ForwardSelection] << endl;
						}
					}
					else
						cout << " Wrong card selected" << endl;
				}

				else
					cout << " Wrong card selected" << endl;
			}
			else
				cout << " Wrong card selected" << endl;
		}
		else if (selection >= 2)
			cout << " Wrong input entered" << endl;

	} while (selection != 0);
}

void Goal(int random)
{
	int Goal[2] = { 1,2 };
	int shot, block;
	int playerGoal = 0;
	int CPUgoal = 0;

	cout << "  __________________________ " << endl;
	cout << " |  ______________________  |" << endl;
	cout << " | |         ( )          | |" << endl;
	cout << " | |        \\_|_/         | |" << endl;
	cout << " | |   1      |       2   | |" << endl;
	cout << " | |         / \\          | |" << endl;
	cout << " wwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;

	cout << endl << " Select number where do you want to take the penalty kick" << endl;

	for (int i = 0; i < 5; ++i)
	{
		int CPUturn = (rand() % 2);

		cout << " It's your turn " << endl;
		cin >> shot;

		if (Goal[CPUturn] == shot)
			cout << " CPU block your shot! " << endl;

		else
			cout << " You scored " << endl;

		cout << " It's the CPU's turn " << endl;
		cin >> block;

		if (Goal[CPUturn] == block)
			cout << " You blocked the shot! " << endl;

		else
			cout << " CPU scored " << endl;
		if (Goal[CPUturn] != shot)
			playerGoal += 1;
		if (Goal[CPUturn] != block)
			CPUgoal += 1;

		cout << "~~~~~~~~ SCORE BOARD ~~~~~~~~~" << endl;
		cout << " You: " << playerGoal << endl;
		cout << " CPU: " << CPUgoal << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
	}

}