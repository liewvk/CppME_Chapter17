#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
    string brand;
    string color;
    int speed;

    void displayInfo()
    {
        cout << "Brand: " << brand << ", Color: " << color << ", Speed: " << speed << endl;
    }
};

int main()
{
    Car car1, car2;

    car1.brand = "Toyota";
    car1.color = "Red";
    car1.speed = 120;

    car2.brand = "Honda";
    car2.color = "Blue";
    car2.speed = 140;

    car1.displayInfo();
    car2.displayInfo();

    return 0;
}
