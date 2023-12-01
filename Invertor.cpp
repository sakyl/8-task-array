#include <iostream>
using namespace std;
int main() {
   int arr[105];
   int n;
   cin>>n;
   for( int i=0; i<n; i++)
   cin>>arr[i];
   
  int i=0, j=n-1;
   while(i<j){
       swap (arr[i],arr[j] );
       i++;
       j--;
   }
   for(i=0; i<n; i++)
   cout<<arr[i]<<" ";
    return 0;
}
