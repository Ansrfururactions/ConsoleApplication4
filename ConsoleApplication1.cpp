#include <iostream>
using namespace std;

int main()
{
	int month = 0, year = 0, day = 0;//defines the needed variables
	
	while (month < 1 || month > 12) //reruns the following statements if user provided an invalid value
	{
		cout << "enter a month(1 - 12):" << endl; //asks for month
		cin >> month;//stores month
	}

	cout << "enter year:" << endl;//asks for year
	cin >> year;//stores year

	if (year % 400 == 0 || year % 4 == 0)//checks if year is leap year
	{
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) //checks if the month has 31 days
			day = 31;//stores number for display later
		
		else if (month == 4 || month == 6 || month == 9 || month == 11)//checks if the month has 30 days
			day = 30;//stores number for display later
		
		else//automatically sets value to 29 if neither of the above conditions are met
			day = 29;//stores number for display later
		
	}
	else if (year % 400 != 0 || year % 4 != 0)
	{
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)//checks if the month has 31 days
			day = 31;//stores number for display later
		
		else if (month == 4 || month == 6 || month == 9 || month == 11)//checks if the month has 30 days
			day = 30;//stores number for display later
		
		else//automatically sets value to 28 if neither of the above conditions are met
			day = 28;//stores number for display later

    }

	cout << "days that that month had in " << year << ": " << day << endl;//displays the days in the given month of the given year
}

