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
        int cm=0,cz=0;
        for(int i=0; i<n;i++){
            if(a[i]==-1)cm++;
            else if(a[i]==0)cz++;
        }
        if(cm%2!=0)cz+=2;
        cout<<cz<<endl;
    }

    return 0;
}