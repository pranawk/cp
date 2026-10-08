//  D. Backrooms Hill

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
        vector<int>b,c;
        for(int i=0; i<n; i++){
            if(i%2==0)b.push_back(a[i]);
            else c.push_back(a[i]);
        }
        sort(b.begin(),b.end());
        sort(c.begin(),c.end());
        fl=true;
        int l=0;
        for(int i=0; i<n; i++){
            if(a[i])
        }
        cout<<(fl==true ? "YES" : "NO")<<endl;
    }
    return 0;
}