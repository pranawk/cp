//  A. The Equalizer

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
      int n,k;
      cin>>n>>k;
      int sum=0,a=0;
      for(int i=0;i<n; i++){cin>>a; sum+=a;}
      if(sum%2==1 || (k*n)%2==0)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
    return 0;
}