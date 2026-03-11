#include<bits/stdc++.h>
using namespace std;
int main(){

   int t;
   cin>>t;
   while(t--){
    int n, k, i;
    cin>>n>>k;
    vector<int>Array(n);
    for(i=0;i<n;i++){
        cin>>Array[i];
    }
    if(k>=2){
        cout<<"YES"<<endl;
    }
    else{
        if(is_sorted(Array.begin(), Array.end())){
            cout<<"YES\n";
            }
        else cout<<"NO\n";
    }
 }
 return 0;
}
