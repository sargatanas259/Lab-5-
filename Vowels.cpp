#include <iostream>
using namespace std;

int vowelsInWord(int Vowels,char Words[150]){
    for (int i = 0; Words[i] !='\0' ; ++i)
    {
        if (Words[i] == 'a' || Words[i] == 'e' || Words[i] == 'i' || Words[i] == 'o' || Words[i] == 'u' ) {
           ++Vowels;
             }
    }
    return Vowels;
}int main() {
    char Words[150];
    int Vowels;
    cout<<" Please Enter a word"<< endl;
    cin.getline(Words,150);

    /*for (int i = 0; Words[i] !='\0' ; ++i)
    {
        if (Words[i] == 'a' || Words[i] == 'e' || Words[i] == 'i' || Words[i] == 'o' || Words[i] == 'u' ) {
            ++Vowels;
        }
    }*/
    cout<< "The number of vowels is \n";
    cout<< vowelsInWord(Vowels,Words);

    return 0;
}




