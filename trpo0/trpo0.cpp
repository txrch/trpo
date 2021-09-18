// trpo0.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int x, y;
	cout << "Vvedite chislo" << endl;
	cin >> (x);
	if (x % 2 == 0) cout << "Chetnoe" << endl;

	   else cout << "Nechetnoe" << endl;
	{
		x = (x / 100 + x % 10 + (x / 10) % 10)/3;
		cout << x << endl << endl;
	}
	


	cout << "Vvedite nomer mesyatsa" << endl;
	cin >> (y);
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
	switch(y)
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
	return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
