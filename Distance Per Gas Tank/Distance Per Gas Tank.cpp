#include <iostream>
using namespace std;


double calcDistance(int gasTank, double R) //Distance = gallons × average miles per gallon
{
    return gasTank * R;
}

int main() {
    const int gasTank = 20; //Tank capacity in gallons.
    const double tMpg = 23.5; //Town Average Rate.
    const double hwMpg = 28.9; //Highway Average Rate.

    //Calculate distance possible
    double tDistance = calcDistance(gasTank, tMpg); 
    double hwDistance = calcDistance(gasTank, hwMpg);

    //Display results
    cout << "With a " << gasTank << "-gallon tank:" << endl;
    cout << "In Town driving " << tMpg << " mpg would give a Distance of " << tDistance << "miles" << endl;
    cout << "On Highway driving " << hwMpg << " mpg would give a Distance of " << hwDistance << "miles" << endl;

    return 0;
}
