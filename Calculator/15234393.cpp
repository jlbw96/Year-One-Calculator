#include <iostream>
#include <cmath>

double num1,num2,calc;
char cInput2, cInput, cExit;
float fSum, fNum, fN, fMul, i;

using namespace std;

int main()
{

	cout << "Welcome To my C++ Calculator!" << endl << endl; //Introduction
	cout << "Please Enter The Amount Of Numbers You Will Be Using: ";
	cin >> fN; //Input for the amount of numbers to be used
	if (fN > 2) // If input number is less than two run new part of calculator
	{
		cout << "Welcome To My More Complicated Calculator" << endl;
		cout << endl;
		cout << "Please select One Of The Following:" << endl << endl;

		cout << "A) Add Numbers" << endl; // Options
		cout << "B) Multiply Numbers" << endl;
		cout << "C) Mean of Numbers" << endl;
		cout << "Option: ";
		cin >> cInput2;
		fSum = 0;
		fMul = 1;

		for (i = 1; i <= fN; i++)
		{
			cout << "Please Enter Number " << i << ": " << endl;
			cin >> fNum;
			//Addition
			if (cInput2 == 'A' || cInput2 == 'a')
			{
				fSum = fSum + fNum;
			}
			//Subtraction
			if (cInput2 == 'B' || cInput2 == 'b')
			{
				fMul = fMul * fNum;
			}
			//Multiplication
			if (cInput2 == 'C' || cInput2 == 'c')
			{
				fSum = fSum + fNum;
			}
		}
			
			if (cInput2 == 'A' || cInput2 == 'a')
			{
				cout << "Your Answer Is: " << fSum << endl;
			}

			if (cInput2 == 'B' || cInput2 == 'b')
			{
				cout << "Your Answer Is: " << fMul << endl;
			}

			if (cInput2 == 'C' || cInput2 == 'c')
			{
				fSum = fSum / fN;
				cout << "Your Answer Is: " << fSum << endl;
			}

			cout << "Would You Like To Continue? Please Enter 'Y' or 'N'" << endl;
			cin >> cExit;

			if (cExit == 'Y' || cExit == 'y')
			{
				cout << "" << endl;
				main();
			}

			else if (cExit == 'N' || cExit == 'n')
			{
				exit;
			}

			else
			{
				cout << "Invalid Choice" << endl;
				system("pause");
			}

		//Subtraction
		system("pause");
	}
	if (fN == 2)
	{

		cout << "Now Input The First Number: " << endl; //Input first number
		cin >> num1; // assigns num1 to inputted number
		cout << "" << endl;
		cout << "And Now The Second Number: " << endl; //Input second number
		cin >> num2; // assigns num2 to inputted number
		cout << "" << endl;

		cout << "Please Select Any Of The Following (+,-,/,*)" << endl << endl; //
		cin >> cInput;

		if (cInput == '+')
		{
			calc = num1 + num2;
		}

		if (cInput == '-')
		{
			calc = num1 - num2;
		}

		if (cInput == '/' && num2 != 0)
		{
			calc = num1 / num2;
		}

		if (cInput == '*')
		{
			calc = num1 * num2;
		}

		if (cInput == '/' && num2 == 0)
		{
			cout << "Error: Cannot Divide Number By 0" << endl;
			cout << "Returning To Menu." << endl;
			main();
		}

		else
		{
			cout << "The answer is: " << calc << endl << endl;
		}

		cout << "Would You Like To Continue? Please Enter 'Y' or 'N'" << endl;
		cin >> cExit;

		if (cExit == 'Y' || cExit == 'y')
		{
			cout << "" << endl;
			main();
		}

		else if (cExit == 'N' || cExit == 'n')
		{
			exit;
		}

		else
		{
			cout << "Invalid Choice" << endl;
			system("pause");
		}

		return (0);
	}
}