//New Building for SIS
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h,a,b,k;
    cin>>n>>h>>a>>b>>k;
    for(int i=0; i<k; i++){
        int ta,fa,tb,fb;
        cin>>ta>>fa>>tb>>fb;
        int res=0;res+=abs(ta-tb);
        if(ta==tb)res+=abs(fa-fb);
        else{
            if(fa>b){res+=abs(fa-b);res+=abs(fb-b);}
            if(fa<a){res+=abs(fa-a);res+=abs(fb-a);}
            if(fa<=b && fa>=a)res+=abs(fa-fb);}
        cout<<res<<endl;
    }
    return 0;
}