//Serval and Toy Bricks
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,h;
    cin>>n>>m>>h;
    vector<int>left(n), front(m);
    for(int i=0; i<m; i++)cin>>front[i];
    for(int i=0; i<n; i++)cin>>left[i];
    vector<vector<int>>heights(n, vector<int>(m));
    for(int i=0 ; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>heights[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){if(heights[i][j]==1)heights[i][j]=min(left[i],front[j]);}
    }


    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<heights[i][j]<<" ";
        }
        cout<<'\n';
    }
return 0;
}