//  A. Riptide

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        vector<int>a(3);
        cin>>a[0]>>a[1]>>a[2];
        sort(a.begin(),a.end());
        cout<<min(a[2]-a[1], a[1]-a[0])<<endl;
    }
    return 0;
}