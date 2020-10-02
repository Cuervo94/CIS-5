// Pedro Longo
// October 16, 2018
// CIS-5: C++ Programming

// Creative Project 1

#include <iostream>
#include <string> 
#include <iomanip>
using namespace std;

int main()
{
	int weight, feet, inches, height, BMI;
	int play;
	int hours;
	double MET;
	double calories;
	int intensity = 0;
	int waist;
	int wrist;
	int hip;
	int forearm;
	int days;
	int row = 1;
	int col = 1;

	do
	{
		cout << endl << " ****************************************" << endl << endl;
		cout << "   Welcome to the CalcuFit Program!" << endl << endl;
		cout << "          M A I N  M E N U" << endl << endl;
		cout << "     1. BMI calculation" << endl;
		cout << "     2. BMR calculation" << endl;
		cout << "     3. Cardio calorie burn hours" << endl;
		cout << "     4. Body Fat Percentage" << endl;
		cout << "     5. Work Out schedule" << endl;
		cout << "     0.Exit" << endl;

		cout << "     Selection ==> ";
		cin >> play;

		cout << endl << " ****************************************" << endl;

		switch (play)
		{
		case 1:

			// This is a simple BMI calculator

			cout << "     Enter Weight: ";
			cin >> weight;
			cout << "       Enter Feet: ";
			cin >> feet;
			cout << "     Enter Inches: ";
			cin >> inches;

			height = (feet * 12) + inches;
			BMI = (weight * 703) / (height * height);

			cout << "              BMI: " << BMI;


			if (BMI > 30)
			{
				cout << " >> Obese <<" << endl;
			}
			else if (BMI >= 25)
			{
				cout << " >> Overweight <<" << endl;
			}
			else if (BMI >= 18.5 && BMI <= 25)
			{
				cout << " >> Normal <<" << endl;
			}
			else if (BMI < 18.5)
			{
				cout << " >> Under Weight <<" << endl;
			}

			break;
		case 2:

			// Knowing one's BMR should help us know how many calories our body needs to take a day to keep track of weight loss or staying healthy.
			// We should also know that BMR is an approximate calculation, not a perfect one.
			// Every individual have different metabolism, but this tool will help us to measure our calories intake.

			// To calculate the BMR. First, we need to convert pounds, feet and inches intro metric form
			// Since the reviewed formula only accepts input in metric form.

			double pound;
			double kilogram;
			double feet;
			double inches;
			double centimeter;
			int age;
			long double BMR;
			int gender;
			int exercise;

			cout << "     Enter age: ";
			cin >> age;

			cout << "     Enter weight: ";
			cin >> pound;

			kilogram = pound * 0.453592;

			cout << "     Enter height " << endl;
			cout << "             Feet: ";
			cin >> feet;
			cout << "           Inches: ";
			cin >> inches;

			centimeter = (feet * 30.48) + (inches * 2.54);

			cout << endl << "     Now let's analyze your BMR" << endl; // BMR calculations begin here.

			// Men	BMR = (10 × weight in kg) + (6.25 × height in cm) - (5 × age in years) + 5
			// Women	BMR = (10 × weight in kg) + (6.25 × height in cm) - (5 × age in years) - 161

			do
			{
				cout << endl;
				cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;
				cout << "     B M R   M E N U" << endl;
				cout << "     1. Male" << endl;
				cout << "     2. Female" << endl;
				cout << "     0. Exit" << endl;

				cout << "     Select number ===> " << endl;
				cin >> gender;

				switch (gender)
				{
				case 1:

					cout << "     How many hours do you exercise a day? ";
					cin >> exercise;

					if (exercise >= 2)
					{
						BMR = ((10 * kilogram) + (6.25*centimeter) - (5 * age) + 5) * 2.25;
						cout << "     Your BMR is: " << BMR << endl;
					}
					else if (exercise == 1)
					{
						BMR = ((10 * kilogram) + (6.25*centimeter) - (5 * age) + 5) * 1.76;
						cout << "     Your BMR is: " << BMR << endl;
					}
					else if (exercise == 0)
					{
						BMR = ((10 * kilogram) + (6.25*centimeter) - (5 * age) + 5) * 1.53;
						cout << "     Your BMR is: " << BMR << endl;
					}

					break;
				case 2:

					cout << "     How many hours do you exercise a day? ";
					cin >> exercise;

					if (exercise >= 2)
					{
						BMR = ((10 * kilogram) + (6.25*centimeter) - (5 * age) - 161) * 2.25;
						cout << "     Your BMR is: " << BMR << endl;
					}
					else if (exercise == 1)
					{
						BMR = ((10 * kilogram) + (6.25*centimeter) - (5 * age) - 161) * 1.76;
						cout << "     Your BMR is: " << BMR << endl;
					}
					else if (exercise == 0)
					{
						BMR = ((10 * kilogram) + (6.25*centimeter) - (5 * age) - 161) * 1.53;
						cout << "     Your BMR is: " << BMR << endl;
					}

					break;
				case 0:
					break;
				}

			} while (gender != 0);

			break;
		case 3:

			// This selection is going to measure how many calories does one burn running/jogging in x hours (1 to 4 hours) depending on our weight and intenisty level

			cout << "     Select intensity level from 1 to 3" << endl;
			cout << "     1 being the lowest and 3 the highest" << endl << endl;
			cout << "             Select level of intensity: ";
			cin >> intensity;

			if (intensity == 3)
			{
				cout << "     Enter weight: ";
				cin >> pound;

				kilogram = pound * 0.453592;

				for (int i = 1; i <= 4; i++)
				{
					MET = 7;
					calories = i * (MET * kilogram);
					cout << "     In " << i << " hours you burned " << calories << endl;
				}
			}

			else if (intensity == 2)
			{
				cout << "     Enter weight: ";
				cin >> pound;

				kilogram = pound * 0.453592;

				for (int i = 1; i <= 4; i++)
				{
					MET = 3.6;
					calories = i * (MET * kilogram);
					cout << "     In " << i << " hours you burned " << calories << endl;
				}
			}

			else if (intensity == 1)
			{
				cout << "     Enter weight: ";
				cin >> pound;

				kilogram = pound * 0.453592;

				for (int i = 1; i <= 4; i++)
				{
					MET = 2.3;
					calories = i * (MET * kilogram);
					cout << "     In " << i << " hours you burned " << calories << endl;
				}

			}
			else if (intensity == 0)
			{
				cout << endl << "     Wrong intensity level" << endl;
			}

			else if (intensity >= 4)
			{
				cout << endl << "     Wrong intensity level" << endl;
			}

			break;
		case 4:

			//This selection is going to allow us to calculate our body's fat percentage

			char gender2;

			cout << "     We are going to measure your body's fat percentage" << endl;
			cout << "     Enter M or m for male" << endl << "     F or f for female" << endl << endl;
			cout << "     Enter gender: ";
			cin >> gender2;

			switch (gender2)
			{
			case 'M':
			case 'm':

				cout << "     Enter your weight: ";
				cin >> weight;
				cout << "     Enter your waist measurement(inches): ";
				cin >> waist;

				//Factor 1 (Total body weight x 1.082) + 94.42
				//Factor 2 Waist measurement x 4.15
				int mfactor1 = (weight * 1.082) + 94.42;
				int mfactor2 = waist * 4.15;
				int bodymass = mfactor1 - mfactor2;
				int fatWeight = weight - bodymass;
				int fatPercentage = (fatWeight * 100) / weight;

				cout << "     Your body fat percentage is: " << fatPercentage << "%" << endl;

				break;

			}
			switch (gender2)
			{
			case 'F':
			case 'f':

				cout << "     Enter your weight: ";
				cin >> weight;
				cout << "     Enter your wrist measurement(inches): ";
				cin >> wrist;
				cout << "     Enter your waist measurement(inches): ";
				cin >> waist;
				cout << "     Enter your hip measurement(inches): ";
				cin >> hip;
				cout << "     Enter your forearm meausurement(inches): ";
				cin >> forearm;

				//Factor 1 (Total body weight x 0.732) + 8.987
				//Factor 2 Wrist measurement  3.140
				//Factor 3 Waist measurement x 0.157
				//Factor 4 Hip measurement x 0.249
				//Factor 5 Forearm measurement x 0.434

				int ffactor1 = (weight * 0.732) + 8.987;
				int ffactor2 = wrist / 3.140;
				int ffactor3 = waist * 0.157;
				int ffactor4 = hip * 0.249;
				int ffactor5 = forearm * 0.434;

				int bodymass = ffactor1 + ffactor2 - ffactor3 - ffactor4 + ffactor5;
				int fatWeight = weight - bodymass;
				int fatPercentage = (fatWeight * 100) / weight;

				cout << "     Your body fat percentage is: " << fatPercentage << "%" << endl;

				break;
			}

			break;
		case 5:

			// This section will display which muscles to work out in 7 days

			while (row <= 7)
			{
				while (col <= 1)
				{

					{
						if (row * col == 1)

							cout << "     Day " << (row * col) << " ==> Chest & Shoulders";

						else if (row * col == 2)

							cout << "     Day " << (row * col) << " ===============> Back";

						else if (row * col == 3)

							cout << "     Day " << (row * col) << " ===============> REST";

						else if (row * col == 4)

							cout << "     Day " << (row * col) << " ===> Biceps & Triceps";

						else if (row * col == 5)

							cout << "     Day " << (row * col) << " ===============> Legs";

						else if (row * col == 6)

							cout << "     Day " << (row * col) << " ===============> REST";

						else if (row * col == 7)

							cout << "     Day " << (row * col) << " ===============> REST";
					}
					col += 1;
				}
				cout << endl;
				col = 1;
				row += 1;
			}
			break;

		case 0:
			break;
		}
	} while (play != 0);


	cout << "        Good-bye and Have a great Workout!" << endl;


	system("PAUSE");

	return 0;
}

