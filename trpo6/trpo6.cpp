#include <iostream>

using namespace std;

void month(int y);
void timeYear(int y);
void evenOrOdd(int x);
void arifmAvg(int x);

int main()
{
	int x, y, task;

	do {
		cout << "Select task number(1-4) or 0 to exit: "; cin >> task;
	} while (task >= 1 && task <= 4);

		switch (task)
		{
		case 1:
			cout << "Enter a number: "; cin >> (x);
			evenOrOdd(x);
			break;
		case 2:
			cout << "Enter a number: "; cin >> (x);
			arifmAvg(x);
			break;
		case 3:
			cout << "Enter the month number: "; cin >> (y);
			month(y);
			break;
		case 4:
			cout << "Enter the month number: "; cin >> (y);
			timeYear(y);
			break;
		}
	return 0;
}

void month(int y)
{
	switch (y)
	{
	case 1: cout << "January" << endl; break;
	case 2: cout << "February" << endl; break;
	case 3: cout << "March" << endl; break;
	case 4: cout << "April" << endl; break;
	case 5: cout << "May" << endl; break;
	case 6: cout << "June" << endl; break;
	case 7: cout << "July" << endl; break;
	case 8: cout << "August" << endl; break;
	case 9: cout << "September" << endl; break;
	case 10: cout << "October" << endl; break;
	case 11: cout << "November" << endl; break;
	case 12: cout << "December" << endl; break;
	default: cout << "Net takova mesyatsa =(" << endl;
	}
}

void timeYear(int y)
{
	switch (y)
	{
	case 1: cout << "Winter" << endl; break;
	case 2: cout << "Winter" << endl; break;
	case 3: cout << "Spring" << endl; break;
	case 4: cout << "Spring" << endl; break;
	case 5: cout << "Spring" << endl; break;
	case 6: cout << "Summer" << endl; break;
	case 7: cout << "Summer" << endl; break;
	case 8: cout << "Summer" << endl; break;
	case 9: cout << "Autumn" << endl; break;
	case 10: cout << "Autumn" << endl; break;
	case 11: cout << "Autumn" << endl; break;
	case 12: cout << "Winter" << endl; break;
	}
}

void evenOrOdd(int x)
{
	if (x % 2 == 0) cout << "Chetnoe" << endl;
		else cout << "Nechetnoe" << endl;
}

void arifmAvg(int x)
{
	x = (x / 100 + x % 10 + (x / 10) % 10) / 3;
	cout << x << endl << endl;
}