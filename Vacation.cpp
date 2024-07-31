#include <iostream>
using namespace std;

void Years_Worked();

int main() {
    Years_Worked();

    return 0;
}
void Years_Worked(){
    int Years_Employed;
    cout<<"How many years have you been employed here\n";
    cin>>Years_Employed;
    if (Years_Employed==0) {
        cout<<"You have earned 10 days of vacation.\n";
    }
        else if (Years_Employed>0&&Years_Employed<5) {
        cout<<"You have earned 10 days of vacation.\n";
    }
    else if (Years_Employed>=5&&Years_Employed<=10) {
        cout<<"You have earned 15 days of vacation.\n";
    }
    else if (Years_Employed>10&&Years_Employed <= 20) {
        cout<<"You have earned 20 days of vacation.\n";
    }
    else if (Years_Employed>=21) {
        cout<<"You have earned 25 days of vacation.\n";
    }
    return ;
    }


