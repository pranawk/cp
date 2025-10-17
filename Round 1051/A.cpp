#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>p(n);
        for(int i=0 ;i<n; i++)cin>>p[i];
        bool change=false;
        if(n==1|| n==2){cout<<"YES"<<endl;continue;}
        for(int i=1; i<n-1; i++){
            if(p[i]<p[i+1]&& p[i]<p[i-1])change=true;
        }
        cout<<(change==true ? "NO" : "YES")<<endl;
    }
    return 0;
}