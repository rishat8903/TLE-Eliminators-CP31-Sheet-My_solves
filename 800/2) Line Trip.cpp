#include<bits/stdc++.h>
using namespace std;
int main(){

   int t;
   cin>>t;
   while(t--){
    int n, x, i;
    cin>>n>>x;
    int arr[n+1];
    arr[0]=0;
    for(i=1; i<=n; i++){
        cin>>arr[i];
    }
    int vol_gas=2*(x-arr[n]);
    for(int i=0; i<n; i++){
        if(arr[i+1]-arr[i]>vol_gas){
            vol_gas=arr[i+1]-arr[i];
        }
    }
    cout<<vol_gas<<endl;
   }
   return 0;
}
