#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int options=0;//defines & initiallizes the variable used for selecting options
	double area=0.0, base = 0.0, radius, height = 0.0, length = 0.0, width = 0.0;// defines & initiallizes variables used in the equations

	while (options <= 0 || options > 4) // provides a failsafe for when the user enters an invalid option
	{
		cout << "type a number from 1-4 to select the following options: " << endl << "1. Calculate the Area of a Circle" << endl << "2. Calculate the Area of a Rectangle" << endl << "3. Calculate the Area of a Triangle" << endl << "4. Quit" << endl;//provides the options for the user to enter
		cin >> options;//stores the option as an integer

		if (options <= 0 || options > 4)//acts as a trigger for the following cout statement
			cout << "this is not an option provided, please try again." << endl;//lets user know that they entered an ivalid option
	}

	if (options == 1)//runs option 1 if selected
	{
		cout << "enter radius" << endl;//asks for radius
		cin >> radius;//stores radius

		area = 3.14159 * pow(radius, 2);// calculates area

		cout << "the area of your circle is " << area << endl;//displays area
	}
	else if (options == 2)
	{
		cout << "enter length" << endl;//asks for length
    	cin >> length;//stores length

		cout << "enter width" << endl;//asks for width
		cin >> width;//stores width

		area = length * width;// calculates area

		cout << "the area of your rectangle is " << area << endl;//displays area
	}
	else if (options == 3)
	{
		cout << "enter base" << endl;//asks for base
		cin >> base;//stores base

		cout << "enter height" << endl;//asks for height
		cin >> height;//stores height

		area = base * height * 0.5;// calculates area

		cout << "the area of your triangle is " << area << endl; //displays area
	}
	else
	{
		return 0; //terminates the program
	}
}
