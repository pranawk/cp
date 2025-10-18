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
        vector<int>arr(n);
        for(int i=0; i<n; i++)cin>>arr[i];
        vector<bool>ele(n,false);
        for(int i=0; i<n; i++){ele[arr[i]-1]=true;}
        int nu=-1;
        for(int i=0; i<n; i++)if(ele[i]==false){nu=i+1;break;}
        if(nu!=-1){
            if(k==0){cout<<endl;continue;}
            cout<<nu<<" ";k--;
            if(k==0){cout<<endl;continue;}
            int nu2;
            for(int i=1; i<n+1; i++)if(i!=nu && i!=arr[n-1]){cout<<i<<" ";nu2=i;k--;break;}
            int i=1;
            while(k--){
                while(i==nu || i==nu2)i++;
                cout<<i<<" ";
                i++;
            }
        }
        else{
            int i=0;
            while(k--){
                cout<<arr[i]<<" ";
                i++;
            }
        }
        cout<<endl;
    }
    return 0;
}