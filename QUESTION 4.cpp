#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {8, 3, 10, 1, 6};
    int size = 5;

    int smallest = numbers[0];

    for(int i = 1; i < size; i++)
    {
        if(numbers[i] < smallest)
        {
            smallest = numbers[i];
        }
    }

    cout << "Smallest number = " << smallest << endl;

    return 0;
}
