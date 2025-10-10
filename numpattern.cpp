// print pattern 123
//               456
//               789




#include <iostream>
using namespace std;

int main(){

    int i;
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int num;
    num = 1;

    for(i=0; i< n; i++){
        for(int j=0; j<n; j++){
        cout << num << " ";
        num++;
        } 
        
        cout << endl;

        
    }


    return 0;
}