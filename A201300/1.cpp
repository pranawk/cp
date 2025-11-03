//https://codeforces.com/problemset/problem/69/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int n;
     cin>>n;
     int x=0,y=0,z=0;
     while(n--){
        int p,q,r;
        cin>>p>>q>>r;
        x+=p;y+=q;z+=r;
     }
     if(x==0&&y==0&&z==0)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
 return 0;
}