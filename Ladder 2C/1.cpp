#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n ;i++)cin>>a[i];
    sort(a.begin(),a.end());
    int l=0,r=n-1;
    long long ans=0;
    while(l<r){
        ans+=(a[l]+a[r])*(a[l]+a[r]);
        l++;r--;
    }
    cout<<ans<<endl;
return 0;
}