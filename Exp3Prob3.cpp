#include <iostream>
#include<cstring>
using namespace std;

int main()
{
	char arr[100], a;

	cout << "Enter elements to be sorted: \n";
	cin >> arr;
	cout << "The reverse order of array: ";

	for (a = strlen(arr); a >= 0; a--)
	{
		cout << arr[a];
	}
	cout << " \n";
	cout << "The size of the Array is = " << strlen(arr) << endl;
	system("pause");

	return 0;
}