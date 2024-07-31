#include <iostream>
using namespace std;


float getHoursWorked();
float getPayRate();
float CalsGross(int PayRate, int HoursWorked);


int main() {
    int Menu,Pay,Hours;
    do {
        cout<<"Enter 1 first to put in the employees hours.\n"
            <<"Enter 2 second to enter the employees rate of pay\n"
            <<"Enter 3 third to get the gross pay\n"
            <<"Enter 4 to Leave";
        cin>>Menu;
        switch (Menu) {
            case 1:
                 Pay=getHoursWorked();
                break;
            case 2:
                Hours=getPayRate();
                break;
            case 3:
                cout<<"$"<< CalsGross(Pay,Hours)<<endl;
                break;
        }

    }while (Menu<4);
    return 0;
}

float getHoursWorked(){
    float HoursWorked;
    cout<<"How many hours did you work?";
    cin>>HoursWorked;
    return HoursWorked;
}
float getPayRate(){
    float PayRate;
    cout<<"What is the pay rate of the employee?";
    cin>>PayRate;
    return PayRate;
}

float CalsGross(int PayRate, int HoursWorked){
    float GrossPay=PayRate*HoursWorked;
    return GrossPay;
}