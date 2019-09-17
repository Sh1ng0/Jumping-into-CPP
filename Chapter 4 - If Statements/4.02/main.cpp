/*

Jumping into C++

Chapter 4
Practice Problem

2. Implement a simple "password" system that takes a password in the form of a number. Make it
so that either of two numbers are valid, but use only one if statement to do the check.

*/


#include <iostream>

using namespace std;

int main() {
  int inputedPassword; 
  int password = 500; //Practice wants you to accept two numbers for a password, this integer is declared as 500 which is oly one number.
  cout << "Please enter your password. (Must be in the form of a number)" << endl;
  cin >> inputedPassword;
  if (inputedPassword == password) { //In order for the password to acept two different passwords we can instead the boolean opeartor OR
    cout << "Access Grained" << endl;
  } else {
    cout << "Access Denied" << endl;
  }
}

Correct answer:

#include <iostream>

using namespace std;

int main()
{
    int a;


    cout << "Please enter your password: " << endl;
    cout << "Password: ";
    cin >> a;

    if ( a == 1500 || a == 1234)
    {
        cout << "Acces granted" << endl;
    }
    else
    {
        cout << "Acces denied" << endl;
    }
    return 0;
}


