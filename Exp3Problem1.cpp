#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int num[10], i;
	float sum = 0, max, min;
	cout << "Enter 10 numbers: " << endl;
	for (i = 0; i < 10; i++)
	{
		cin >> num[i];
			if (i == 0)
			{
				max = num[i];
				min = num[i];
			}
			else
			{
				if (num[i] > max)
					max = num[i];
				if (num[i] < min)
					min = num[i];
			}
			sum += num[i];
	}
	cout << "Largest Number = " << max << endl;
	cout << "Smallest Number = " << min << endl;
	cout << "Total: " << sum << endl;
	cout << "Average = " << sum / 10 << endl;
	_getch();
	return 0;
}