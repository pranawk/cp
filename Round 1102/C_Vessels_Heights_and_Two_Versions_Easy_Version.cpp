//  C. Vessels, Heights and Two Versions (Easy Version)

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<long long>a(n),ans;
        for(int i=0; i<n; i++)cin>>a[i];

        int mx=0;
        for(int i=0; i<n; i++)if(a[i]>a[mx])mx=i;

        for(int i=0; i<n; i++){
            long long sum=0;
            long long cur_max=0;

            int r=i;
            while(r!=mx){
                cur_max=max(cur_max,a[r]);
                r=(r+1)%n;
                sum+=cur_max;
            }

            cur_max=0;
            int l=(i-1+n)%n;
            while(l!=mx){
                cur_max=max(cur_max,a[l]);
                sum+=cur_max;
                l=(l-1+n)%n;
            }

            ans.push_back(sum);
        }
        for(int i=0; i<ans.size(); i++)cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}