//  E. Repentance Is Already on the Way

#include<bits/stdc++.h>

using namespace std;
int n;
long long solve(vector<int>&a , vector<int>&b){
    vector<long long>aa(n,0);
    long long sm=0;
    for(int i=0; i<n; i++){
        if(a[i]==b[i])sm+=2;
        else sm++;
        if(i+1<n){
            if(a[i+1]==b[i])sm+=2;
            else sm++;
        }
        aa[i]=sm;
    }
    vector<long long> bb(n,0);
    sm=0;
    if(a[n-1]==b[n-1])sm+=2;
    else sm++;
    for(int i=n-1; i>=0; i--){
        if(i-1>=0){
            if( a[i-1]==b[i])sm+=2;
            else sm++;
            if( b[i-1]==a[i])sm+=2;
            else sm++;
        }
        bb[i]=sm;
    }
    long long ans=max(aa[n-1],bb[0]);
    for(int i=1; i<n-1; i++)
    {
//         cout<<aa[i]<<" "<<bb[i]<<" ";
        ans=max(ans,(aa[i-1]+bb[i+1]));
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
       cin>>n;
       vector<int>a(n),b(n);
       for(int i=0; i<n; i++)cin>>a[i];
       for(int i=0; i<n; i++)cin>>b[i];
       cout<<solve(a, b)<<endl;
    }
    return 0;
}