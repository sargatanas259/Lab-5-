#include <iostream>
#include<cstdlib>
#include <ctime>
#include <cmath>

int Doubler;
using namespace std;


/*int Random_Number(int New_Number);
int Number_Doubler(int New_Number,int Doubler);
int Raise_Power(int New_Number,int Power_Raise);
int Number_Reverse(int New_Number,int  Reversed_Number);
int Number_Adding (int New_Number,int Added);
int Number_Raising(int New_Number,int Raised_Number);
}*/
int Random_Number(){
    srand(time(NULL));
    int New_Number;
    New_Number = ((rand()% 99) + 1);
    return New_Number;
}
int Number_Doubler(int New_Number){
    int Doubler =New_Number*2;
    return Doubler;
}

int Raise_Power(int New_Number){
    int Power_Raise, Option2;
    cout<<"Which power would you like to raise to 2,3,or 4?\n";
    cin>>Option2;
    switch (Option2) {
        case 2: Power_Raise= ::pow(New_Number, 2 );
            break;

        case 3: Power_Raise= ::pow(New_Number, 3 );
            break;
        case 4: Power_Raise= ::pow(New_Number, 4 );
            break;
    }
    return Power_Raise;
}

int Number_Reverse(int New_Number){
    int  Reversed_Number = 0, Remainder;
    while(New_Number != 0) {
        Remainder = New_Number % 10;
        Reversed_Number = Reversed_Number * 10 + Remainder;
        New_Number /= 10;
    }
    return Reversed_Number;
}

int Number_Adding (int New_Number){
    int Added, Remainder;
    while (New_Number>0){
        Remainder=New_Number%10;
        Added=Added+Remainder;
        New_Number=New_Number/10;
    }
    return Added;
}

int Number_Raising(int New_Number){
    int First_Number, Second_Number,Raised_Number;
    First_Number= New_Number / 10;
    Second_Number= New_Number % 10;
    Raised_Number= ::pow(First_Number,Second_Number);
    return Raised_Number;

}

int main() {
    int Option,Number,Doubler;
        Number= Random_Number();
    do {
        cout << "\nMenu" << endl
             << "1: Double Number" << endl

             << "2: Reverse the Number" << endl

             << "3: Raise to the Power of 2, 3, or 4."<<endl

             << "4: Add the numbers together. "<< endl

             << "5: Raise the First number by the Power of the Second Number "<<endl

             << "6: Take a 3 digit number and if the number is less than or equal to 4 raise the first two."<<endl

             << "7: Leave ";
        cin >> Option;

        switch (Option) {
            case 1:
                cout <<Number_Doubler(Number )<<endl;
                break;
            case 2:
                cout << Number_Reverse( Number)<<endl;

                break;
            case 3:
                cout << Raise_Power( Number)<<endl;

                break;
            case 4:
                cout << Number_Adding ( Number)<<endl;

                break;
            case 5:
                cout << Number_Raising( Number)<<endl;
                break;

            case 6:
                cout << " ";

                break;
        }
    }while(Option<6);
    return 0;
}
/*
int Random_Number(){
    srand(time(NULL));
    int New_Number = ((rand()% 99) + 1);
    return New_Number;
}
int Number_Doubler(int New_Number){
    int Doubler =New_Number*New_Number;
    return Doubler;
}

int Raise_Power(int New_Number){
    int Power_Raise, Option2;
    cout<<"Which power would you like to raise to 2,3,or 4?\n";
    cin>>Option2;
    switch (Option2) {
        case 2: Power_Raise= ::pow(New_Number, 2 );
            break;

        case 3: Power_Raise= ::pow(New_Number, 3 );
            break;
        case 4: Power_Raise= ::pow(New_Number, 4 );
            break;
    }
    return Power_Raise;
}

int Number_Reverse(int New_Number){
    int  Reversed_Number = 0, Remainder;
    while(New_Number != 0) {
        Remainder = New_Number % 10;
        Reversed_Number = Reversed_Number * 10 + Remainder;
        New_Number /= 10;
    }
    return Reversed_Number;
}

int Number_Adding (int New_Number){
    int Added, Remainder;
    while (New_Number>0){
        Remainder=New_Number%10;
        Added=Added+Remainder;
        New_Number=New_Number/10;
    }
    return Added;
}

int Number_Raising(int New_Number){
    int First_Number, Second_Number,Raised_Number;
    First_Number= New_Number / 10;
    Second_Number= New_Number % 10;
    Raised_Number= ::pow(First_Number,Second_Number);
    return Raised_Number;

}*/
