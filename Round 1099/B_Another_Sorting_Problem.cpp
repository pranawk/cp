//  B. Another Sorting Problem

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
        int minreq=0;
        vector<int>kasak;
        int lmx=a[0];
        for(int i=1; i<n; i++){
            if(a[i]<lmx)kasak.push_back(lmx-a[i]);
            else lmx=a[i];
        }
        bool fl=true;
        for(int i=1 ; i<kasak.size(); i++)if(kasak[i]>kasak[i-1])fl=false;
        cout<<(fl==true ?"YES":"NO")<<endl;
    }
    return 0;
}