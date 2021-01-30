#include <iostream>
#include <Windows.h>
#include <conio.h>	
#include <cmath>



using namespace std;



int askLast()
{
	int choice2;
	bool lastChoice = true;
	while (lastChoice != false) {
		cout << "Anything else?\n";
		cout << "\n";
		cout << "1 - yes\n";
		cout << "\n";
		cout << "2 - no\n";

		cin >> choice2;

		switch (choice2) {
		case 1:
			cout << "\n";
			cout << "yes? ok!\n";
			cout << "\n";
			lastChoice = false;
			break;

		case 2:
			cout << "\n";
			cout << "no? ok byeee!\n";
			cout << "\n";
			Sleep(300);
			exit(0);
			break;

		default:
			cout << "that was not a valid choice!\n";
			cout << "choose again.\n";
			cin >> choice2;
			break;
		}

	}
}