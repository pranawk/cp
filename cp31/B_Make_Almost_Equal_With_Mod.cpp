//  B. Make Almost Equal With Mod

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
        long long ii=1;
        bool fl=false;
        while(1){
            long long num=(1ll<<ii);
            long long n1=-1;
            for(int i=0; i<n; i++){
                if(n1==-1)n1=a[i]%num;
                else if(a[i]%num!= n1){fl=true;break;}
            }
            if(fl==true)break;
            ii++;
        }
        cout<<(1ll<<ii)<<'\n';
    }
    return 0;
}