#include <iostream>
using namespace std;

// Function to calculate average of three scores
double calculateAverage(double score1, double score2, double score3)
{
    double average;
    average = (score1 + score2 + score3) / 3;
    return average;
}

int main()
{
    double s1, s2, s3;

    cout << "Enter three scores: ";
    cin >> s1 >> s2 >> s3;

    cout << "Average score = " << calculateAverage(s1, s2, s3) << endl;

    return 0;
}
