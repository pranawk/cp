//Choose Two Numbers
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>ns(n);
    for(int i=0; i<n; i++)cin>>ns[i];
    int m;
    cin>>m;
    vector<int>ms(m);
    for(int i=0; i<m; i++)cin>>ms[i];
    sort(ns.begin(),ns.end());
    sort(ms.begin(),ms.end());
    cout<<ns[ns.size()-1]<<" "<<ms[ms.size()-1]<<endl;

    return 0;

}