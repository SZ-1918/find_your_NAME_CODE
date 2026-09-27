#include<iostream>
#include <map>
using namespace std;

//Though a built in function
bool is_alphabet(char a, char b) 
{
    if(
        ('a'<= a && a<='z') && ('a'<= b && b<='z') ||
        ('A'<= a && a<='Z') && ('A'<= b && b<='Z') ||
        ('a'<= a && a<='z') && ('A'<= b && b<='Z') ||
        ('A'<= a && a<='Z') && ('a'<= b && b<='z')
        
      ) {
        return true;
      } else {
        return false;
      }
}

int main() 
{   
    string nm1,nm2;

    cout << "First Name : ";
    cin >> nm1;

    if(nm1.size() != 0) {
        cout << "Last Name : ";
        cin >> nm2;
    } else {
        cout << "Enter First name first -_- ";
    }
    

    //main logic : an alphabet (lowercase/uppercase) - ascii value of that alphabet (lowercase/uppercase) = 0 
    // a - 97 = 0 or A - 65 = 0
    //so, adding 1 with the result gives the position of the alphabet in alphabetical order 
    
    //NOTE : try converting the character into upper or lower case then substract their ascii value
    //only alphabets are allowed

    if(is_alphabet(nm1[0], nm2[0])) {
        if(nm1.size() == 1 && nm2.size() == 1) {
            cout << "It's not your full name! Anyway," << endl;
        }
        cout << "Your name code : " << tolower(nm1[0]) - 96 << " " << tolower(nm2[0]) - 96 << endl;
        cout << "In Alphabetical order(A to Z) - "<< endl; 
        cout << "Position of '" << nm1[0] << "' is : " << tolower(nm1[0]) - 96 << endl;
        cout << "and Position of '" << nm2[0] << "' is : " << tolower(nm2[0]) - 96 << endl;
    } else {
        cout << "Lol, '"<< nm1 << " " << nm2 << "' can't be a name! -_- ";
    }
    return 0;
} 

