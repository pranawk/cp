//  A. Translation

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;
    bool fl=true;
    if(s1.size()!=s2.size())fl=false;
    else{
        int n=s1.size(), l=0,r=n-1;
        while(l<n){
            if(s1[l]!=s2[r])fl=false;
            l++;r--;
        }
    }
    if(fl==true)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}