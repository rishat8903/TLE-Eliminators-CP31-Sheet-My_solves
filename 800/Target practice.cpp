#include<bits/stdc++.h>
using namespace std;
int main(){
    int scoreBoard[10][10]={
        {1,1,1,1,1,1,1,1,1,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,1,1,1,1,1,1,1,1,1} };
    int t;
    cin>>t;
    while(t--){
        string grid[10];
        int i;
        for(i=0;i<10;i++){
            cin>>grid[i];
        }
        int score=0;
        for(i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(grid[i][j]=='X'){
                    score+=scoreBoard[i][j];
                }
            }
        }
        cout<<score<<endl;
    }
    return 0;
}