#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int nn, mm;
    cin>>nn>>mm;int pp=0 ;
    int n=min(nn,mm),m=max(nn,mm);
        if(n%2==0){
            pp+=n-1;
            pp+=m-n;
        }
        else{
            pp+=n-1;
            pp+=m-n;
        }
    cout<<pp<<" "<<n+m-pp-1<<endl;
    return 0;
}