//  C. Contrast Value

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
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        int cn=0;
        int ii=0;
        while(ii+1<n){
            while(ii+1<n && a[ii+1]==a[ii])ii++;
            if(ii+1==n)break;
            if(a[ii+1]>a[ii]){
                while(ii+1<n && a[ii+1]>=a[ii]){
                    ii++;
                }
                cn++;
            }
            else{
                while(ii+1<n && a[ii+1]<=a[ii]){
                    ii++;
                }
                cn++;
            }
        }
        cout<<cn+1<<'\n';
    }
    return 0;
}