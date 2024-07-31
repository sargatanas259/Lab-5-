#include <iostream>
#include <string>
using namespace std;
int Time(int timeSpent);
float Income(float userIncome);
std::string Name();
double customer_Bill( float billingRate,float userIncome,float billingTime,float bill);
int main() {
    float billingRate, userIncome,billingTime;
    float customerBill,bill;
    cout<<"Income";
    cin >>userIncome ;
    cout<<"What is the rate per hour?";
    cin>>billingRate;
    cout<<"How long is the appointment?";
    cin>>billingTime;


   /* if (userIncome<=25000)
    {
        if (billingTime<=30)
            customerBill= billingRate;
        else
            customerBill= ((billingTime-30)/60)*(.4)*billingRate;
    }
    else if (userIncome>25000){
        if (billingTime<=20)
            customerBill= billingRate;
        else customerBill= ((billingTime-20)/60)*(.7)*billingRate;
    }
*/




    cout <<customer_Bill( billingRate, userIncome, billingTime, bill);
    return 0;
}


double customer_Bill( float billingRate,float userIncome,float billingTime,float bill)
{
    if (userIncome<=25000)
    {
        if (billingTime<=30)
        bill=billingRate;

        else
            bill=((billingTime-30)/60)*(.4)*billingRate;
            return bill;
    }
    else if (userIncome>25000){
        if (billingTime<=20)
        bill=billingRate;

        else
        bill=((billingTime-20)/60)*(.7)*billingRate;
        return bill;
    }
}

std::string Name(){
    std::string customerName;
    return customerName;
}
