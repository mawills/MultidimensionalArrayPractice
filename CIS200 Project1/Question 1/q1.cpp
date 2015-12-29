#include <iostream>
#include <iomanip>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main()
{
    Vehicle x;
    cout << "Initial value for x: " << endl;
    cout << "Age = " << x.getAge() << " Price = " << x.getPrice() << endl;

    x.setAge(40);
    x.setPrice(20000);
    cout << "Modified value for x: " << endl;
    cout << "Age = " << x.getAge() << " Price = " << x.getPrice() << endl;

    Car y;
    cout << "Initial value for y: " << endl;
    cout << "Age = "            << y.getAge()
         << " Price = "         << y.getPrice()
         << " RaceCarStatus = " << y.getRaceCarStatus() << endl;

    y.setAge(25);
    y.setPrice(14520.50);
    y.setRaceCarStatus(true);
    cout << "Modified value for y: " << endl;
    cout << "Age = "            << y.getAge()
         << " Price = "         << y.getPrice()
         << " Race Car = " << y.getRaceCarStatus() << endl;

    Truck z;
    cout << "Initial value for z: " << endl;
    cout << "Age = "            << z.getAge()
         << " Price = "         << z.getPrice()
         << " Race Car = " << z.getDieselTypeStatus() << endl;

    z.setAge(150);
    z.setPrice(32500000.99);
    z.setDieselTypeStatus(true);
    cout << "Modified value for z: " << endl;
    cout << "Age = "            << z.getAge()
         << " Price = "         << z.getPrice()
         << " Diesel = "        << z.getDieselTypeStatus() << endl;


    return 0;
}
