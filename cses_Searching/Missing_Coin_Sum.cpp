//  Missing Coin Sum

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    sort(a.begin(), a.end());
    long long sum=0;
    int ii=0;
    while(ii<n){
        if(a[ii]-sum>=2){cout<<sum+1<<endl;return 0;}
        else sum+=a[ii];
        ii++;
    }
    cout<<sum+1<<endl;
    return 0;
}