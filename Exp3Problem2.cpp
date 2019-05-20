#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int a[7], b[7], c[7];
	string days[7] = { "Day1", "Day2", "Day3", "Day4", "Day5", "Day6", "Day7" };
	for (int i = 0; i < 7; i++)
	{
		cout << "Enter Province A temp, " << days[i] << ": "; cin >> a[i];
	}
	for (int i = 0; i < 7; i++)
	{
		cout << "Enter Province B temp, " << days[i] << ": "; cin >> b[i];
	}
	for (int i = 0; i < 7; i++)
	{
		cout << "Enter Province C temp, " << days[i] << ": "; cin >> c[i];
	}

	cout << "Displaying Values: " << endl;
	for (int i = 0; i < 7; i++)
	{
		cout << "Province A temp, " << days[i] << "= " << a[i];
		cout << endl;
	}
	for (int i = 0; i < 7; i++)
	{
		cout << "Province B temp, " << days[i] << "= " << b[i];
		cout << endl;
	}
	for (int i = 0; i < 7; i++)
	{
		cout << "Province C temp, " << days[i] << "= " << c[i];
		cout << endl;
	}
	_getch();
	return 0;
}