//Scarborough fair
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    while(m--){
        int l,r;
        cin>>l>>r;
        char c1,c2;
        cin>>c1>>c2;
        for(int x=l-1; x<r; x++){
            if(s[x]==c1)s[x]=c2;
        }
    }
    cout<<s<<endl;
    return 0;
}