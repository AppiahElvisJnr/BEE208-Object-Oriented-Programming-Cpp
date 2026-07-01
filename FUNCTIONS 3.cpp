#include <iostream>
using namespace std;

// Function to calculate total cost
double totalCost(double item1, double item2)
{
    return item1 + item2;
}

int main()
{
    double price1, price2;

    cout << "Enter the cost of first item: ";
    cin >> price1;

    cout << "Enter the cost of second item: ";
    cin >> price2;

    cout << "Total cost = " << totalCost(price1, price2) << endl;

    return 0;
}
