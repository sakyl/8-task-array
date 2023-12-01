#include <iostream> 
using namespace std;
int main() {
    int arr[105];
    int n;
    cin>> n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0; i<n; i++){
       sum=sum+arr[i];
    }
    double awg = double (sum) / n;
    int s=0 , count=0;
     for(int i=0; i<n; i++){
       if (arr[i] > awg){
          s=s+arr[i];
          count++;
        }
     }
     cout<<s<<" "<<count;
     return 0;
}