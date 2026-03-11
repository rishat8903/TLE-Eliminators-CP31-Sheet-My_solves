#include<bits/stdc++.h>
using namespace std;
int main(){

   int t;
   cin>>t;
   while(t--){
    long long n, k, x, MinSum=0, MaxSum=0, i=0;
    cin>>n>>k>>x;
    MinSum=k*(k+1)/2;
    long long num=n-k;
    MaxSum=(n*(n+1)/2)-(num*(num+1)/2);
    if(x>=MinSum && x<=MaxSum){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
   }
    return 0;
}
