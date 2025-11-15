#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,a;
        cin>>n>>a;
        int lcn=0,mcn=0;
        int num;
        for(int i=0; i<n; i++){cin>>num; if(num<a)lcn++;if(num>a)mcn++;}
        cout<<(lcn>mcn ? a-1 : a+1)<<endl;
    }
    return 0;
}