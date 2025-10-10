#include <iostream>
using namespace std;

int min(int a, int b){


    if(a>b){
        
        cout << "B is smaller than A";   
    }else{

        cout << "A is smaller than B";
    }

    return 0;
}

int main(){

    int num1;
        int num2;

        cout << "enter value of a: ";
        cin >> num1;
        
        cout << "Enter value of b: ";
        cin >> num2;

        min(num1,num2);
    return 0;
}