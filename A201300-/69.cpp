#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned n;
    cin>>n;
    unsigned oc=0, tc=0;
    for(unsigned i=0; i<n; i++){
        int n;cin>>n;
        if(n==100)oc++;
        else tc++;
    }
    if((tc*2+oc)%2!=0){printf("NO"); return 0;}
    if(n%2==0){printf("YES"); return 0;}
    if(oc!=0){printf("YES"); return 0;}
    printf("NO");
    return 0;
}