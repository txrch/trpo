#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));

	int n, k;

	cout << "Task1" << endl;                                         //
	cout << "Введите размер матрицы (n*k) : "; cin >> n >> k;
	
	int** matrix = new int* [n];

	for (int i = 0; i < n; i++) {

		matrix[i] = new int[k];

		for (int j = 0; j < k; j++)

			matrix[i][j] = rand() % 9;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			cout << matrix[i][j];
			cout << " ";
		}
		cout << endl;
	}
	
	cout << endl << "Task2" << endl;                                         //

	double q, sum = 0, sr = 0, c = 0;
	cout << "Введите размер массива: "; cin >> q;

	int* arr = new int[q];

	cout << "Массив: " << endl;
		for (int i = 0; i < q; i++) {

			arr[i] = rand() % 20 - 3;

			sum += arr[i]; c++;

			cout << arr[i] << " ";
		}
		cout << endl;

		sr = sum / c;

		cout << "Сумма элементов массива равна: " << sum << endl;
		cout << "Среднее значение элементов: " << sr << endl;

		cout << endl << "Task3" << endl;                                         //

		cout << "Первая матрица: " << endl;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < k; j++)
			{
				cout << matrix[i][j];
				cout << " ";
			}
			cout << endl;
		}

		cout << "Введите вторую матрицу(x*y), учитывая размер первой.(" << n << "*" << k << ")" << endl;
		
		int x, y;
		cin >> x >> y;

		if (x != k) {
			cout << "Ошибка ввода. Переменной x будет присвоено значение k." << endl;
				x = k;
		}

		int** matrix2 = new int* [x];

		for (int i = 0; i < x; i++) {

			matrix2[i] = new int[y];

			for (int j = 0; j < y; j++)

				matrix2[i][j] = rand() % 9;
		}

		for (int i = 0; i < x; i++)
		{
			for (int j = 0; j < y; j++)
			{
				cout << matrix2[i][j];
				cout << " ";
			}
			cout << endl;
		}

		
		int** matrix3 = new int* [n];

		for (int i = 0; i < n; i++) {

			matrix3[i] = new int[y];

			for (int j = 0; j < y; j++)

				matrix3[i][j] = 0;
		}

		for (int i = 0; i < n; i++)
			for (int j = 0; j < y; j++)
				for (int x = 0; x < k; x++)
					matrix3[i][j] += matrix[i][x] * matrix2[x][j];

		cout << "Результат перемножения матриц: " << endl;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < y; j++)
			{
				cout << matrix3[i][j];
				cout << " ";
			}
			cout << endl;
		}

	delete[]arr;

	for (int i = 0; i < n; i++)
		delete[] matrix[i];
	delete[] matrix;

	for (int i = 0; i < x; i++)
		delete[] matrix2[i];
	delete[] matrix2;

	for (int i = 0; i < n; i++)
		delete[] matrix3[i];
	delete[] matrix3;

	return 0;
}
