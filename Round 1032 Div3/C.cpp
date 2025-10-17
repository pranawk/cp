#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>>mat(n,vector<int>(m,0));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++)cin>>mat[i][j];
        }

        int max=0;
        vector<int>r;
        vector<int>c;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j]>max){r.clear();c.clear();max=mat[i][j];}
                if(mat[i][j]==max){r.push_back(i);c.push_back(j);}
                }
        }
        int cn=c.size();
        bool flag=false;
        vector<int>rr,cc;
        for(int i=0; i<n;i++){
            int cn=0;
            for(int j=0; j<m; j++){if(mat[i][j]==max)cn++;}
            rr.push_back(cn);
        }
        for(int j=0; j<m;j++){
            int cn=0;
            for(int i=0; i<n; i++){if(mat[i][j]==max)cn++;}
            cc.push_back(cn);
        }
//        for(int i=0; i<rr.size();i++)cout<<rr[i];
//                cout<<'\n';
//        for(int i=0; i<cc.size();i++)cout<<cc[i];
//                cout<<'\n'<<'\n';

        for(int i=0; i<rr.size(); i++){
            for(int j=0; j<cc.size();j++){
                if(mat[i][j]==max){
                    if(rr[i]+cc[j]-1==cn){flag=true;break;}
                }
                else{if(rr[i]+cc[j]==cn){flag=true;break;}}
            }
            if(flag==true)break;
        }

        if(c.size()==2)flag=true;


        cout<<(flag ? max-1 : max)<<'\n';
    }
    return 0;
}