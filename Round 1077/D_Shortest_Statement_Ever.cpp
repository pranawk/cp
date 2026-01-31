//  D. Shortest Statement Ever

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
      long long x,y;
      cin>>x>>y;
      long long mx,mn;
      bool fsx=true;
      if(x>=y){mx=x;mn=y;}
      else {fsx=false; mx=y;mn=x;}
      int ii=0;
      long long ans1=mx, ans2=0;
      while((1<<ii)<=mn){
        if(((1<<ii)&mx)==0 && ((1<<ii)&mn)!=0)ans2^=(1<<ii);
        ii++;
      }
      if(((1<<ii)&mx)==0&& (1<<ii)-mn<(mn-ans2))ans2=(1<<ii);
      int iii=0;
      long long pp=0;
      while(iii<ii-1){pp^=(1<<iii);iii++;}
      if((pp&mx)==0 && abs(pp-mn)< abs(ans2-mn))ans2=pp;

      long long ans3=0;
      ii=0;
      while((1<<ii)<mx){
        if(((1<<ii)&mn)==0&&((1<<ii)&mx)!=0)ans3^=(1<<ii);
        ii++;
      }
      if(((1<<ii)&mn)==0&& abs((1<<ii)-mx)<abs(ans3-mx))ans3=(1<<ii);
      iii=0;
      pp=0;
      while(iii<ii-1){pp^=(1<<iii); iii++;}
      if((pp&mn)==0&& abs(pp-mx)<abs(ans3-mx))ans3=pp;

      if(fsx==true){
        if(abs(ans3-mx)< abs(ans2-mn))cout<<ans3<<" "<<mn<<endl;
        else cout<<mx<<" "<<ans2<<endl;
      }
      else{
        if(abs(ans3-mx)<abs(ans2-mn))cout<<mn<<" "<<ans3<<endl;
        else cout<<ans2<<" "<<mx<<endl;
      }
    }
    return 0;
}