#include <iostream>


char cInput2, cInput, cExit;
float fSum = 0, fNum, fN, fMul = 1, i;

using namespace std;

int main()
{

	cout << "Welcome To my C++ Calculator!" << endl << endl; //Introduction
	cout << "Please Enter The Amount Of Numbers You Will Be Using: ";
	cin >> fN;
	if (fN == 2)
	{
		cout << "Welcome To My More Complicated Calculator" << endl;
		cout << endl;
		cout << "Please select One Of The Following:" << endl << endl;

		cout << "A) Add Numbers" << endl;
		cout << "B) Multiply Numbers" << endl;
		cout << "C) Mean of Numbers" << endl;
		cout << "Option: ";
		cin >> cInput2;


		//Addition
		for (i = 1; i <= fN; i++)
		{
			cout << "Please Enter Number " << i << ": " << endl;
			cin >> fNum;

			if (cInput2 == 'a' || cInput2 == 'A')
			{
				fSum = fSum + fNum;
			}
			//Subtraction
			if (cInput2 == 'b' || cInput2 == 'B')
			{
				fMul = fMul * fNum;
			}

			if (cInput2 == 'c' || cInput2 == 'C')
			{
				fSum = fSum + fNum;
			}
			system("pause");
		}
	}
}