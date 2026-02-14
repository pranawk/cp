//  B. Routine Problem

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    if((a*d)<(b*c)){
        int pp=a*d;
        int qq=b*c;
        pp=qq-pp;
        int ii=2;
        while(ii<=pp && ii<=qq ){
            while(pp%ii==0 && qq%ii==0){pp/=ii;qq/=ii;}
            ii++;
        }
        if(pp==0 || qq==0){cout<<0<<"/"<<1<<endl;return 0;}
        cout<<pp<<"/"<<qq<<endl;
    }
    else{
        int qq=a*d;
        int pp=qq-b*c;
        int ii=2;
        while(ii<=pp && ii<=qq ){
            while(pp%ii==0 && qq%ii==0){pp/=ii;qq/=ii;}
            ii++;
        }
        if(pp==0 || qq==0){cout<<0<<"/"<<1<<endl;return 0;}
        cout<<pp<<"/"<<qq<<endl;
    }
    return 0;
}