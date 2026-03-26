//  A. Flip Flops

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        long long n,c,k;
        cin>>n>>c>>k;
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        sort(a.begin(),a.end());
        for(int i=0; i<n; i++){
            if(a[i]>c)break;
            if(k>(c-a[i])){
                k-=(c-a[i]);
                c*=2;
            }
            else{
                a[i]+=k;
                k=0;
                c+=a[i];
            }
        }
        cout<<c<<endl;
    }
    return 0;
}