#include <iostream>
#include <string>

using namespace std;
int x;

void IntToString(int d, string s, char c)
{
	while (x != 0) {

		d = x % 10;
		x = x / 10;
		c = (char)(d + 48);
		s = c + s;
	}
	cout << "Строка: " << s << endl;
}

void IntToString(int d, string s, char c, int t)
{
	cout << "Введите количество элементов для перевода: "; cin >> t;

	for (int i = 0; i < t; i++) {

		d = x % 10;
		x = x / 10;
		c = (char)(d + 48);
		s = c + s;
	}
	cout << "Строка: " << s << endl;
}


int main()
{
	setlocale(LC_ALL, "ru");
	int d = 0, t = 0;
	string s = "";
	char c = ' ';

	cout << "Число:"; cin >> x;
	cout << "nomer 1" << endl;
	IntToString(d, s, c);

	cout << endl << "Число:"; cin >> x;
	cout << "nomer 2" << endl;
	IntToString(d, s, c, t);

	return 0;
}

