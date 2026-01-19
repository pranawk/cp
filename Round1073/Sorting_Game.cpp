//  Sorting Game

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
       int n;
       cin>>n;
       string s;
       cin>>s;
       int cn=0;
       bool cc=false;
       int i=n-1;
       int oc=0;
       while(s[i]=='1')i--;
       while(i>0){
           if(s[i]=='1')oc++;
           if(i-1>0 && s[i]=='1'&& s[i-1]=='1')cc=true;
           i--;
       }
       if(oc%2==0 && cc=false)cout<<"Bob"<<endl;
       if(oc%2==1){
            cout<<"Alice"<<endl;
            int a=0;
            for(int)
        }
       if(cc==true){
        cout<<"Alice"<<endl;
       }

    }
    return 0;
}