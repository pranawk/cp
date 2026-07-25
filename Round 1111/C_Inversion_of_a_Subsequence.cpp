//  C. Inversion of a Subsequence

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
        vector<int>a(n),b(n);
        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<n; i++)cin>>b[i];
        int cz=0,c1=0,c11=0,c00=0;
        for(int i=0; i<n; i++){
            if(a[i]!=b[i] && a[i]==0)cz++;
            if(a[i]!=b[i] && a[i]==1)c1++;
            if(a[i]==b[i]){
                if(a[i]==0)c00++;
                else c11++;
            }
        }
        if(c1>0){
            if(c1%2==0)cout<<2<<endl;
            else cout<<1<<endl;
        }
        else if(cz%2==1 && c11>0 && c00>0)cout<<2<<endl;
        else if(cz==0)cout<<0<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}