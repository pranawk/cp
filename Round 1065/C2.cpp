#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;cin>>n;
        vector<int>a1(n);
        vector<int>a2(n);
        int mx=0;
        for(int i=0; i<n; i++){cin>>a1[i];mx=max(a1[i],mx);}
        for(int i=0; i<n; i++){cin>>a2[i];mx=max(mx,a2[i]);}
        int msb=0;
        while(mx!=0){mx>>=1;msb++;}
        vector<int>cnmsb(msb+1,0);
        for(int i=0; i<n; i++){
            for(int j=0; j<msb; j++)cnmsb[j+1]+=((a1[i]&(1<<j))!=0)+((a2[i]&(1<<j))!=0);
        }
        //for(int i=0; i<msb+1; i++)cout<<cnmsb[i]<<" ";
        int ii=0;
        for(int i=msb; i>=0; i--){
            if(i==0){cout<<"Tie"<<endl;}
            if(cnmsb[i]%2==1){ii=i; break;}
        }
        if(ii!=0){
            int pp=0;
            ii--;
            for(int i=n-1; i>=0; i--){
                if(((a1[i]&(1<<ii))!=0)^((a2[i]&(1<<ii))!=0)){pp=i;break;}
            }
            //cout<<pp<<endl;
            if(pp%2==1)cout<<"Mai"<<endl;
            else cout<<"Ajisai"<<endl;
        }
//        if(aa<bb){cout<<"Mai"<<endl;}
//        else if(bb<aa)cout<<"Ajisai"<<endl;
//        else cout<<"Tie"<<endl;
    }
    return 0;
}