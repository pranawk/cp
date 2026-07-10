//  D. An Alternative Way

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
        vector<long long>a(n),b(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        bool fl=true;
        for(int i=n-1; i>=0; i--){
            if(i==0 && a[i]>b[i]){fl=false;continue;}
            if(a[i]>b[i]){
                a[i-1]+=a[i]-b[i];
            }
        }
        cout<<(fl==true ? "YES" : "NO")<<endl;
    }
    return 0;
}