#include <iostream>
#include <cstdlib>

using namespace std;

void no1();
void no2();
void no4();
void no5();

int main()
{
	setlocale(LC_ALL, "ru");

	int choice;
	cout << "Выберите задание: "; cin >> choice;

	switch (choice)
	{
	case 1: no1();
		break;
	case 2: no2();
		break;
	case 4: no4();
		break;
	case 5: no5();
		break;
	}

	return 0;
}

    void no1()
	{
		cout << "// // // // Задание 1 // // // //" << endl;

		int a, b, s, p;

		cout << "Введите стороны:" << endl;
		cin >> a >> b;

		s = a * b; p = (a + b) * 2;
		cout << "Площадь: " << s << endl;
		cout << "Периметр: " << p << endl;

		for (int i = 0; i < b; i++) {

			for (int j = 0; j < a; j++) {
				cout << "X ";
			}
			cout << " " << endl;
		}
		cout << endl;
	}

	void no2()
	{
		cout << "// // // // Задание 2 // // // //" << endl;

		int n, fact = 1, x = 0, f1 = 0, f2 = 1, f = 0;
	
		cout << "Введите число (n > 0): " << endl;
		cin >> n;

		if (n == 1) {
			cout << x;
		}

		if (n == 2) {
			cout << x << " ";
			x += 1;
			cout << x;
		}

		if (n > 2) {
			for (int i = 0; i <= n; i++) {

				f = f1 + f2;
				f2 = f1;
				f1 = f;

				cout << f << " ";
			}
		}

		for (int i = 2; i <= n; i++)
			fact *= i;
		cout << fact;

		cout << endl << endl;
	}

	void no4()
	{
		cout << "// // // // Задание 4 // // // //" << endl;

		int x;

		cout << "Введите число: " << endl;
		cin >> x;

		if (x % 2 == 0)
			cout << 0;

		else
			cout << 1;

		while (x != 1) {

			x = x / 2;
			if (x % 2 == 0)
				cout << 0;

			else
				cout << 1;

		}
		cout << endl;
	}

	void no5()
	{
		cout << "// // // // Задание 5 // // // //" << endl;

		srand(1);

		for (int c = 1; c < 100; c++) {

			cout << rand() << " ";

			if ((c + 1) % 5 == 0)

				cout << endl;
		}
	}