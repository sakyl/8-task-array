#include <iostream>
using namespace std;
int main() {
    int arr[105];
    int n,k;
   cin>>n>>k;
   for( int i=0; i<n; i++){
     cin>>arr[i];
   }
  int i,j, cnt=0;
   for( i=0; i<n; i++){
     for(j=i+1; j<n; j++){
       if ((arr[i] + arr[j])%k==0) { 
           cnt++;
       }
     }
   }
   cout<<cnt;
    return 0;
}