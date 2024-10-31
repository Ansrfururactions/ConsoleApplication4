#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double weight = 0;//defines weight
    double price = 0;//defines price
    double distance = 0;//defines distance


    while (weight < 1 || weight > 20.0)//loops the cin statement if value given is invalid
    {
        cout << "enter the weight of your package" << endl;//asks for weight
        cin >> weight;//stores weight

        if (weight < 0.0 || weight > 20.0)//checks if value given is invaild
        {
            cout << "im sorry, we cannot accept the weight you've given us. please, try again." << endl << "" << endl;//lets user know if value given is invalid
        }
    }

    while (distance < 10.0 || distance > 3000.0)//loops the cin statement if value given is invalid
    {
        cout << "enter the distance that it needs to be shipped" << endl;//asks for distance
        cin >> distance;//stores distance

        if (distance < 10.0 || distance > 3000.0)//checks if value given is invaild
        {
            cout << "im sorry, we cannot accept the distance you've given us. please, try again." << endl << endl;//lets user know if value given is invalid
        }
    }

    if (weight <= 2)//checks for packages below 2kg
    {
        price = (1.10 / 500) * distance;//runs the calculation for the 2kg or below rate
    }
    else if (weight <= 6)//checks for packages above 2kg but not above 6kg
    {
        price = (2.20 / 500) * distance;//runs the calculation for the above 2kg but not above 6kg rate
    }
    else if (weight <= 10)//checks for packages above 6kg but not above 10kg
    {
        price = (3.70 / 500) * distance;//runs the calculation for the above 6kg but not above 10kg rate
    }
    else if (weight <= 20)//checks for packages above 10kg but not above 20kg
    {
        price = (4.80 / 500) * distance;//runs the calculation for the above 10kg but not above 20kg rate
    }

    cout << "you'll be charged $" << setprecision(3) << price << " in order to proceed with this shipment, thank you for using our service." << endl;//displays the price

}
