#include <iostream>
using namespace std;

int sum(int a=10, int b =10){

    int s = a + b;
    cout << s;
    return s;
}

int main() {

    int num1;
    int num2;
    cout << "enter value of a: ";
    cin >> num1;

    cout << "enter value of b: ";
    cin >> num2;

    sum(num1,num2);



    return 0;
}