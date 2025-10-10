#include <iostream>
using namespace std;

int main(){
    
    int count;
    count = 1;
    int sum;
    sum = 0;
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    while (count <= n) {
        sum= sum + count;
        count++;
        
        
    } 

    cout << sum;
    
    return 0;

}