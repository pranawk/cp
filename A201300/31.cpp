#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int n1=n;
    int sum=0;
    while(n--){
     int nn;
     cin>>nn;
     sum+=nn;
    }
    int res=0;
    for(int i=1; i<=5; i++){
        if((sum+i)%(n1+1)!=1)res++;
    }
    cout<<res<<endl;
    return 0;
}