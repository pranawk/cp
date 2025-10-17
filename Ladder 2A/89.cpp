#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>x(n),y(n);
    for(int i=0; i<n; i++)cin>>x[i];
    for(int i=0; i<n ; i++)cin>>y[i];
    unordered_set<int>mp;
    for(int i=0; i<n; i++){mp.insert(x[i]); mp.insert(y[i]);}
    int count=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(mp.find(x[i]^y[j])!=mp.end())count++;
        }
    }
    cout<<(count%2==0 ? "Karen" : "Koyomi");
    return 0;
}