//  C. Production of Snowmen

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>a(n),b(n),c(n);
        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<n; i++)cin>>b[i];
        for(int i=0; i<n; i++)cin>>c[i];
        int aa=0,bb=0;
        int ii=0;int nn=n;
        while(nn--){
            for(int i=0; i<n; i++){
                if(a[i]>=b[(ii+i)%n])break;
                if(i==n-1)aa++;
            }ii++;
        }
        ii=0;nn=n;
        while(nn--){
            for(int i=0; i<n; i++){
                if(b[i]>=c[(ii+i)%n])break;
                if(i==n-1)bb++;
            }ii++;
        }
        cout<<1ll*aa*bb*n<<endl;
    }
    
    return 0;
}
