#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,x;
        cin>>n>>x;
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        int sum=0;
        for(int i=0; i<n; i++)sum+=a[i];
        if(sum%x!=0)cout<<n<<'\n';
        else{
            vector<int>idx;
            for(int i=0; i<n; i++){if(a[i]%x!=0)idx.emplace_back(i);}
            if(idx.size()==0)cout<<-1<<'\n';
            else{
                cout<<max(n-1-idx[0],idx[idx.size()-1])<<'\n';
            }
        }

    }
    return 0;
}