#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));

	int size;
	cout << "Введите размер массива: "; cin >> size;

	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 9;
		cout << arr[i] << "\t";
	}
	cout << endl;

	int num, count = 0;
	cout << "Введите число: "; cin >> num;

	for (int i = 0; i < size; i++) {
		if (arr[i] == num)
			count++;
	}
	cout << "Число " << num << " встречается " << count;
	if (count == 2 || count == 3 || count == 4)
		cout << " раза." << endl;
	else
		cout << " раз." << endl;

	delete[] arr;

	return 0;
}
