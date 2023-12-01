#include <iostream> 
using namespace std;
int main() {
    int arr[105];
    int n;
    cin>> n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int mx = arr[0];
    for(int i=1; i<n; i++){
       if (arr[i]> mx){
           mx=arr[i];
       }
    }
     for(int i=n; i>0; i--){
       if(arr[i] == mx){
           swap (arr[i] , arr[n-1]);
       }
     }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
