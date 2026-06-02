//  B. Cake Leveling

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
        vector<long long>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        long long sum=0;
        long long mn=INT_MAX;
        for(int i=0; i<n; i++){
            sum+=a[i];
            a[i]=min(mn,sum/(i+1));
            mn=min(mn,a[i]);
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}