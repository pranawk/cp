//  A. Three Piles

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        vector<int>a(3);
        for(int i=0; i<3; i++)cin>>a[i];
        sort(a.begin(),a.end());
        if(a[1]!=a[0]+1 || a[2]!=a[1]+1)cout<<"NO";
        else cout<<"YES";
        cout<<'\n';
    }
    return 0;
}