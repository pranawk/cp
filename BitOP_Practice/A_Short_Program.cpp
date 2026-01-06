//  A. Short Program

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin>>tt;
    int ss=1023;
    int ss2=0;
    while(tt--){
        char c;
        cin>>c;
        int num=0;cin>>num;
        if(c=='|'){ss|=num;ss2|=num;}
        else if(c=='&'){ss&=num;ss2&=num;}
        else {ss^=num;ss2^=num;}
        //cout<<num<<endl;
    }
    cout<<2<<endl;
    cout<<'|'<<" "<<(ss2^(ss^1023))<<endl;
    cout<<'^'<<" "<<(ss^1023)<<"\n";

    return 0;
}
