//  A. Xenia and Divisors

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>cn(8,0);
    for(int i=0; i<n; i++){cin>>a[i];cn[a[i]]++;}
    if(cn[7]>0 || cn[5]>0){cout<<-1;return 0;}
    int fpar=0,spart=0,sparw=0;
    if(cn[4]>0){
        if(cn[2]<cn[4] || cn[1]<cn[4]){cout<<-1;return 0;}
        cn[2]-=cn[4];
        cn[1]-=cn[4];
        fpar+=cn[4];
    }
    if(cn[6]>0){
        if(cn[3]+cn[2]!=cn[6] || cn[1]!=cn[6]){cout<<-1; return 0;}
        sparw=cn[2];
        spart=cn[3];
    }
    if(cn[6]==0 && (cn[2]>0 || cn[3]>0 || cn[1]>0)){cout<<-1;return 0;}
    for(int i=0; i<fpar; i++)cout<<"1 2 4"<<endl;
    for(int i=0; i<sparw; i++)cout<<"1 2 6"<<endl;
    for(int i=0; i<spart; i++)cout<<"1 3 6"<<endl;
    return 0;
}