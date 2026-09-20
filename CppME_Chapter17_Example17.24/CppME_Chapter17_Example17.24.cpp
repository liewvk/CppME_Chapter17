#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
    string title;
    string author;
    double price;

    void setData(string t, string a, double p)
    {
        title = t;
        author = a;
        price = p;
    }

    void displayInfo()
    {
        cout << "Title : " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price : RM" << price << endl;
    }
};

int main()
{
    Book b1;

    b1.setData("C++ Made Easy", "Dr. Liew", 59.90);
    b1.displayInfo();

    return 0;
}
