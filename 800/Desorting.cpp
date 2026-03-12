#include<bits/stdc++.h>
using namespace std; 
int main(){
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        int is_sorted=1;
        for(i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                is_sorted=0;
                break;
            }
        }
        int difference=INT_MAX;
        if(is_sorted==0){
           cout<<"0"<<endl;
        }
        else {
           for(i=0;i<n-1;i++){
             if(abs(arr[i+1]-arr[i])<difference){
                difference=abs(arr[i+1]-arr[i]);
             }
          }
          cout<<(difference/2+1)<<endl;
        }
    }
    return 0;
}