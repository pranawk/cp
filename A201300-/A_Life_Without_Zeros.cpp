//  A. Life Without Zeros

#include<bits/stdc++.h>

using namespace std;
long long rev(long long a){
    long long c=0;
    while(a>0){c=c*10+a%10;a/=10;}
    return c;
}
int  main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a ,b;
    cin>>a>>b;
    long long ff=a+b;
    long long c=0,d=0;
    while(a>0){
        if(a%10==0){a/=10;continue;}
        else c=c*10+a%10;
        a/=10;
    }
    while(b>0){
        if(b%10==0){b/=10;continue;}
        else d=d*10+b%10;
        b/=10;
    }
    long long f=0;
    while(ff>0){
            if(ff%10==0){ff/=10;continue;}
            else f=f*10+ff%10;
            ff/=10;
        }
    long long e=rev(d)+rev(c);
    cout<<(rev(f)==e ? "YES": "NO")<<endl;
    return 0;
}