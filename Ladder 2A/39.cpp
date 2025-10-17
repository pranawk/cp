//Left-handers, Right-handers and Ambidexters
#include<bits/stdc++.h>
using namespace std;

int main(){
    int l,r,a;
    cin>>l>>r>>a;
    if(min(l,r)+a<max(l,r))cout<<(min(l,r)+a)*2<<endl;
    else cout<<(l+r+a)/2 *2<<endl;
    return 0;
}