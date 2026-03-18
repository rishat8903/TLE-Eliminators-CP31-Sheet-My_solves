#include<bits/stdc++.h>
using namespace std; 
int main(){

    int t;
    cin>>t;
    while(t--){
        int n,i,m=0;
        cin>>n;
        vector<int> vect1(n), vect2;
        for(i=0;i<n;i++){
            cin>>vect1[i];
        }
        vect2.push_back(vect1[0]);
        for(i=1;i<n;i++){
            if(vect1[i]<vect1[i-1]){
                vect2.push_back(vect1[i]);
                vect2.push_back(vect1[i]);
            }
            else {vect2.push_back(vect1[i]);
            }
        }
        m=vect2.size();
        cout<<m<<endl;
        for(i=0;i<m;i++){
            cout<<vect2[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}