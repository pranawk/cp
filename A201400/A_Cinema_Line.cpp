//  A. Cinema Line

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int tfc=0,fc=0;
    bool fl=true;
    int ii;
    while(n--){
        cin>>ii;
        if(ii==50 && tfc==0)fl=false;
        else if(ii==50){tfc--;fc++;}
        else if(ii==25)tfc++;
        else if(ii==100){
            if(fc>0){
                fc--;
                if(tfc>0)tfc--;
                else fl=false;
            }
            else{
                if(tfc<3)fl=false;
                else tfc-=3;
            }
        }
    }
    cout<<(fl==true ? "YES" : "NO");
    return 0;
}