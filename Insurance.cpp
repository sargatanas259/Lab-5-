#include <iostream>
using namespace std;



float Insurance_Rate();
float Annual_Rate(float InsuranceRate);

int main() {
   int Menu,Dependents;
   cout<<"Lets begin enter \n";
   Dependents=Insurance_Rate();
   cout<<"The annual rate will be\n";
   cout<<"$"<< Annual_Rate(Dependents);
   return 0;
}
float Insurance_Rate(){
    int Dependent_Number;
    cout<<"How many dependents do you have?";
    cin>>Dependent_Number;
    float RatePerDependent=43.35,InsuranceRate ;
    InsuranceRate=Dependent_Number*RatePerDependent;
    cout<< "$"<< InsuranceRate<<endl;
    return InsuranceRate;
}
float Annual_Rate(float InsuranceRate){
    int Year=12, AnnualRate;
    AnnualRate=Year*InsuranceRate;
    return AnnualRate;
}