//  A. Marisa Steals Reimu's Takeout

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
        int zc=0,oc=0,tc=0;
        for(int i=0; i<n; i++){cin>>a[i];a[i]%=3;if(a[i]==0)zc++;if(a[i]==1)oc++;if(a[i]==2)tc++;}
        cout<<zc+min(oc,tc)+(abs(oc-tc))/3<<endl;
    }
    return 0;
}