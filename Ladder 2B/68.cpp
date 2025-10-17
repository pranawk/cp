#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<string>>matrix(9,vector<string>(3));
    for(int i=0; i<9; i++){
        for(int j=0 ;j<3; j++){cin>>matrix[i][j];}
    }
    int x,y;
    cin>>x>>y;
    x%=3;
    y%=3;
    int lb,le,cb,ce;
    if(x==1){lb=0;le=2;}else if(x==2){lb=3;le=5;}else if(x==0){lb=6; le=8;}
    if(y==1)cb=0;else if(y==2)cb=1; else if(y==0)cb=2;

    bool fl=false;
    for(int i=lb; i<=le; i++){
            for(int k=0; k<3; k++){
                if(matrix[i][cb][k]==46){matrix[i][cb][k]=33; fl=true;}
            }
    }
    if(fl==false){
        for(int i=0; i<9; i++){
            for(int j=0; j<3; j++){
                for(int k=0; k<3; k++){
                    if(matrix[i][j][k]==46){matrix[i][j][k]=33;}
                }
            }
        }
    }
    for(int i=0; i<9; i++){
        for(int j=0; j<3; j++){
            cout<<matrix[i][j]<<" ";
        }
        if(i==2 || i==5)cout<<endl;
        cout<<endl;
    }

    return 0;
}