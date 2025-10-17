#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    sort(a.begin(),a.end());
    vector<int>ans;
    for(int i=n-1; i>=0; ){
        ans.push_back(a[i]);
        i--;
        if(i<0)break;
        ans.insert(ans.begin(),a[i]);
        i--;
    }
    for(int i=0; i<n; i++)cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}