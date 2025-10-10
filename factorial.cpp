// Finding factorial of a number n

#include <iostream>
using namespace std;

int main(){


    int factorial;
    factorial = 1;
    int num;
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    
    while(n>=1){

        factorial = factorial*n;
        n = n-1;


    }


    cout << "factorial of the number n is: " << factorial;
    return 0;
}