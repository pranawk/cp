//  B. The Curse of the Frog

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
      int n;
      long long x;
      cin>>n>>x;
      long long a,b,c;
      long long pp=0;
      long long max_sum=-1;
      for(int i=0; i<n; i++){
        cin>>a>>b>>c;
        if(a*b-c>max_sum || (a*b-c==max_sum && a*(b-1)< mx_a*(mx_b-1))){
            max_sum=a*b-c;
        }
        pp+=1ll*a*(b-1);
      }
      if(pp>=x){cout<<0<<endl;continue;}
      if(max_sum<=0){cout<<-1<<endl;continue;}
      x-=pp;
      cout<<(x+max_sum-1)/max_sum<<endl;
    }
    return 0;
}