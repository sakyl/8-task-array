#include <iostream>
using namespace std;
 int main () {
    double number[100];
    int n, diff;
    cin>>n;
    for (int i=0;  i<n; i++){
        cin>>number[i];
    }
    int mn=number[0];
    
    for(int i=1; i<n; i++){
        if (number[i] < mn){
            mn=(number[i]);
        } 
            
    }
    for(int i=1; i<n; i++){
        if (number[i] == mn){
            swap (number[i], number[0]);
            break;
        }
    }
    for (int i=0;  i<n; i++){
        cout<<number[i]<<" ";
    }
    return 0;
 }

