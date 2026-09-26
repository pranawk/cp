//  D. What a SauSaGe! It's All Meat

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,q;
        cin>>n>>q;
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        vector<bool>db(n,false);
        int cn=0;
        for(int i=0; i<n; i++){
            if(a[i]%3==0 || a[i]==5 || a[i]==10){db[i]=true;cn++;}
        }
        cout<<cn<<" ";
        while(q--){
            int id, nm;
            cin>>id>>nm;
            if(db[id-1]==true)cn--;
            if(nm%3==0 || nm==5 || nm==10){db[id-1]=true;cn++;}
            else {db[id-1]=false;}
            cout<<cn<<" ";
        }
        cout<<endl;
    }
    return 0;
}