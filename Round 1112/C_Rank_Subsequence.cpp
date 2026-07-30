//  C. Rank Subsequence

#include<bits/stdc++.h>

using namespace std;
struct quad{
    int f,s,t,fo;
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<quad>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i].f>>a[i].s>>a[i].t>>a[i].fo;
        }
        int ans=0;
        for(int i=1; i<=n; i++){
            int ii=1 , j=0;
            while(j<n && ii<=i){
                if(!((ii>=a[j].f && ii<=a[j].s)||(i-ii+1>=a[j].t && i-ii+1<=a[j].fo)))ii++;
                j++;
            }
            if(ii>i)ans=i;
        }
        cout<<ans<<endl;
    }
    return 0;
}