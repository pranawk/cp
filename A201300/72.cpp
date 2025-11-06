#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned n;
    cin>>n;
    unsigned mn=UINT_MAX, mx=0;
    int ind=-1;int i=1;
    while(n--){
        int l,r;
        cin>>l>>r;
        if(l<mn){mn=l;ind=-1;}
        if(r>mx){mx=r;ind=-1;}

        if(l==mn && r==mx)ind=i;
        i++;
    }
    cout<<ind<<endl;
    return 0;
}