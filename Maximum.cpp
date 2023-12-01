#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main () {
    double numbers[100];
    int n;
    cin>>n;
    for (int i=i;  i<n; i++){
        cin>>numbers[i];
    }
    double mx=abs(numbers[0]);
    
    for(int i=1; i<n; i++){
        if ( abs(numbers[i]) > mx )
            mx=abs(numbers[i]);
        
    }
    cout<<fixed<<setprecision(2)<<mx;
return 0;
}