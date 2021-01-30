#include <iostream>
#include <Windows.h>
#include <conio.h>	
#include <cmath>

using namespace std;

float takeInput1();
float takeInput2();


	void resultsAddition()
	{
		float x{ takeInput1() };
		float y{ takeInput2() };

		cout << "**********************************************\n";
		cout << "\n";

		cout << "Your answer is: ";

		cout << x << " + " << y << " = " << x + y << '\n';
		cout << "\n";

		cout << "**********************************************\n";
	}

	void resultsSubtraction()
	{
		float x{ takeInput1() };
		float y{ takeInput2() };

		cout << "**********************************************\n";
		cout << "\n";

		cout << "Your answer is: ";

		cout << x << " - " << y << " = " << x - y << '\n';
		cout << "\n";

		cout << "**********************************************\n";
	}

	void resultsMultiplication()
	{
		float x{ takeInput1() };
		float y{ takeInput2() };

		cout << "**********************************************\n";
		cout << "\n";

		cout << "Your answer is: ";

		cout << x << " * " << y << " = " << x * y << '\n';
		cout << "\n";

		cout << "**********************************************\n";
	}


	void resultsDivison()
	{
		float x{ takeInput1() };
		float y{ takeInput2() };

		cout << "**********************************************\n";
		cout << "\n";

		cout << "Your answer is: ";

		cout << x << " / " << y << " = " << x / y << '\n';
		cout << "\n";

		cout << "**********************************************\n";
	}
