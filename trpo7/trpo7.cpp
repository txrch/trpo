#include <iostream>
#include <string>
using namespace std;

struct student
{
	struct birthday
	{
		int day;
		int month;
		int year;
	};
	birthday date;
	string name;
	string surname;
	string midname;
	int group;
};

void createArray(int num, student* arr);
void showStudents(int num, struct student* arr);
string findMostCommonName(int num, student* arr);
int findAvgAge(int num, student* arr);
void sortByGroup(int num, student* arr);
void deleteArray(student* arr);

int main()
{
	setlocale(LC_ALL, "Rus");
	int num;
	cout << "Введите кол-во студентов: "; cin >> num;

	student* arr = new student[num];
	createArray(num, arr);
	showStudents(num, arr);

	string mostCommonName = findMostCommonName(num, arr);
	cout << "\nСамое распространенное имя: " << mostCommonName << endl;

	int avgAge = findAvgAge(num, arr);
	cout << "\nСредний возраст студентов: " << avgAge << endl;

	sortByGroup(num, arr);

	deleteArray(arr);

	return 0;
}

void createArray(int num, student* arr)
{
	
	for (int i = 0; i < num; i++) {
		cout << i + 1 << ".cтудент" << endl;
		cout << "Введите номер группы:"; cin >> arr[i].group;
		cout << "Введите фамилию студента: "; cin >> arr[i].surname;
		cout << "Введите имя студента: "; cin >> arr[i].name;
		cout << "Введите отчество студента: "; cin >> arr[i].midname;
		do
		{
			cout << "Введите дату рождения(XX.XX.XXXX)" << endl;
			cout << "День: "; cin >> arr[i].date.day;
			cout << "Месяц: "; cin >> arr[i].date.month;
			cout << "Год:"; cin >> arr[i].date.year;
		} while (arr[i].date.day < 1 || arr[i].date.day > 31 ||
				 arr[i].date.month < 1 || arr[i].date.month > 12 ||
				 arr[i].date.year < 1920 || arr[i].date.year > 2010);
	}
}

void showStudents(int num, student* arr) 
{
	for (int i = 0; i < num; i++)
	{
		cout << i + 1 << ".";
		cout << "Группа " << arr[i].group << endl;
		cout << arr[i].surname << " " << arr[i].name << " " << arr[i].midname << endl;
		cout << arr[i].date.day << "." << arr[i].date.month << "." << arr[i].date.year;
		cout << "(" << 2021 - arr[i].date.year << " лет)" << endl;

	}
}

string findMostCommonName(int num, student* arr)
{
	int numOfRepeat = 0, maxRepeat = 0;
	string mostCommonName;
	for (int i = 0; i < num; i++)
	{

		for (int j = i + 1; j < num; j++)
		{
			if (arr[i].name == arr[j].name)
				numOfRepeat++;
			if (numOfRepeat > maxRepeat) {
				mostCommonName = arr[i].name;
				maxRepeat = numOfRepeat;
			}
			numOfRepeat = 0;
		}
	}
	if (maxRepeat == 0)
		mostCommonName = "Все имена разные.";

	return mostCommonName;
}

int findAvgAge(int num, student* arr) 
{
	int sum = 0; double avgAge;

	for (int i = 0; i < num; i++)
	{
		sum += (2021 - arr[i].date.year);
	}
	avgAge = sum / num;
	return avgAge;
}

void sortByGroup(int num, student* arr) 
{
	student temp;
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			if (arr[j].group < arr[j + 1].group) {
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	showStudents(num, arr);
}

void deleteArray(student* arr)
{
	delete[] arr;
}