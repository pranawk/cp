#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    while(m--){
        int l,r;
        cin>>l>>r;
    }
    string s;
    for(int i=0; i<n; i++){
        int ii = i%2==0;
        s+=static_cast<char>(ii+'0');
    }
    cout<<s<<endl;
return 0;
}