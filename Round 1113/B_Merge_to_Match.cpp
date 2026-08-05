//  B. Merge to Match

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,m;
        cin>>n>>m;
        vector<int>a(n),b(m);
        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<m; i++)cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        vector<bool>used(m,false);
        int l=0,r=0;
        vector<int>bl(m,0),br(m,0);
        int cn=0;
        bool fl=true;
        int uu=0;
        while(l<n && r<m){
            if(a[l]<b[r]){l++;cn++;}
            else if(a[l]==b[r]){used[r]=true;cn++; l++;r++;uu++;}
            else {bl[r]=cn;r++;}
        }
        if(l==n)bl[r]=cn;
        cn=0;
        l=n-1;r=m-1;
        while(l>=0 && r>=0){
            if(a[l]>b[r]){l--;cn++;}
            else if(a[l]==b[r]){r--;l--;cn++;}
            else{br[r]=cn;r--;}
        }
        //for(int i=0; i<m; i++)cout<<bl[i]<<" "<<bl[r]<<endl;
        if(l<0)br[r]=cn;
        for(int i=0; i<m; i++){
            if(n-uu<2*(m-uu)){fl=false;break;}
            if(b[i]>a[n-1]){fl=false;break;}
            if(used[i]==true){continue;}
            if(bl[i]<=i){fl=false;break;}
            if(br[i]<m-i){fl=false;break;}
        }
        if(fl==false )cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}