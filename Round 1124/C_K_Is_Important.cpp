//  C. K Is Important

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        if(n==k){
            cout<<max(a[0],a[n-1])<<endl;
            continue;
            }
        long long sum=0;
        int rem= k-1;
        int mins= n-k+1;
        int pp=min(rem,mins);
        for(int i=0; i<pp; i++){
            sum+=max(a[i],a[n-1 -i]);
        }
        for(int i=rem; i<mins; i++){
            sum+= a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}