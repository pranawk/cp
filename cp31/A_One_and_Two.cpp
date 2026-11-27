//  A. One and Two

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
        int c2=0;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]==2)c2++;
        }
        if(c2%2==1){cout<<-1<<'\n';continue;}
        int ii=0,xx=0;
        for(int i=0; i<n; i++){
            if(a[i]==2)xx++;
            if(xx==c2/2){ii=i+1;break;}
        }
        if(c2==0)cout<<1<<'\n';
        else cout<<ii<<'\n';
    }
    return 0;
}