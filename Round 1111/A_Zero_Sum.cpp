//  A. Zero Sum

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
        int cnp=0;
        if(n%2==1){cout<<"NO"<<endl;continue;}
        for(int i=0; i<n-1; i+=2){
            if(a[i]==a[i+1])cnp++;
        }
        cout<<(cnp%2==0 ? "YES" : "NO")<<endl;
    }
    return 0;
}