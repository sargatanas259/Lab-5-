#include <iostream>
#include <iomanip>
using namespace std;
double inflationRate( double endingCost, double startingCost);

int main() {
    double inflatRate, endingCost, startingCost;
    cout << "What is the price of the starting cost?\n";
    cin >> startingCost;
    cout << "What is the price of the ending cost?\n";
    cin >> endingCost;
    cout<< setprecision(2) ;
    cout << inflationRate(endingCost,startingCost)*100<<"%"<<endl;
    if ((inflationRate(endingCost,startingCost)*100)>0){
        cout<<"The inflation rate has increased. ";

    }else
        cout<< "The inflation rate has decreased";
    return 0;
}
double inflationRate(double endingCost,double startingCost ) {

    return ((endingCost - startingCost) / startingCost);
}
