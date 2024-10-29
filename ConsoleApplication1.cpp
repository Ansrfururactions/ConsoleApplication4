// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int month, year, day;

	cout << "enter a month(1 - 12):" << endl;
	cin >> month;

	cout << "enter year:" << endl;
	cin >> year;

	if (year % 400 == 0 || year % 4 == 0)
	{
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			day == 31;
		else if (month == 4 || month == 6 || month == 9 || month == 11)
			day == 30;
		else
			day == 29;
	}
	else if (year % 400 != 0 || year % 4 != 0)
	{
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			day == 31;
		else if (month == 4 || month == 6 || month == 9 || month == 11)
			day == 30;
		else
			day == 28;
	}

	cout << "days" << day << endl;
    }


}

