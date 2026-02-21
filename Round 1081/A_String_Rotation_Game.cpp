//  A. String Rotation Game

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
          int bc=1;
          bool thc=false,tc=false;
          int cn=1;
          for(int i=1; i<n; i++){
            if(s[i]!=s[i-1]){bc++;cn=1;}
            else cn++;
            if(cn==3)thc=true;
            if(cn==2)tc=true;
          }
          if(bc==1){cout<<1<<endl;continue;}
          if(thc==true && s[0]!=s[n-1]){cout<<bc+1<<endl;continue;}
          if(tc==true && s[0]!=s[n-1]){cout<<bc+1<<endl;continue;}
          cout<<bc<<endl;
    }
    return 0;
}