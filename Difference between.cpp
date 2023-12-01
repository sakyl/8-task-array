#include <iostream>
using namespace std;
int main () {
    double number[100];
    int n, diff;
    cin>>n;
    for (int i=0;  i<n; i++){
        cin>>number[i];
    }
    int mx=number[0];
    int mn=number[0];
    for (int i=1; i<n; i++){
        if ((number[i]) > mx ){
            mx=(number[i]);
        }
        if (number[i] < mn) {
        mn=(number[i]);
        }
}
    cout<<(mx - mn);
return 0; 
} 
