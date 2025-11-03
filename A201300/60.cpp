#include<bits/stdc++.h>
using namespace std;

void solve(vector<string>&board, int i,int j,char c,int n,int m){
    char c1;
    if(c=='B')c1='W';else c1='B';
    if(j+1<m&& board[i][j+1]=='.'){board[i][j+1]=c1;solve(board,i,j+1,c1,n,m);}
    if(j-1>=0&& board[i][j-1]=='.'){board[i][j-1]=c1;solve(board,i,j-1,c1,n,m);}
    if(i+1<n&& board[i+1][j]=='.'){board[i+1][j]=c1;solve(board,i+1,j,c1,n,m);}
    if(i-1>=0&& board[i-1][j]=='.'){board[i-1][j]=c1;solve(board,i-1,j,c1,n,m);}
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<string>board(n);
    for(int i=0; i<n; i++){
        cin>>board[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(board[i][j]=='.'){
                board[i][j]='B';
                solve(board,i,j,'B',n,m);
            }
        }
    }
    for(int i=0; i<n; i++){
            for(int j=0; j<m; j++)cout<<board[i][j];
            cout<<endl;
    }
    return 0;
}