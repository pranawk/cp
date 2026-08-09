//  C. Hot Potatoes at the Fairy Warehouse

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
        string s;
        cin>>s;
        //odd red,even blue;
        int sr=0,sb=0;
        for(int i=0; i<2*n-1; i++){
            if(s[i]=='1' && s[i+1]=='0'){
                if(i%2==1)sb++;
                else sr++;
            }
            else if(s[i]=='1'){
                if(i%2==1)sr++;
                else sb++;
            }
        }
        if(s[2*n-1]=='1' && s[0]=='0')sb++;
        else if(s[2*n-1]=='1')sr++;
        cout<<sr<<" "<<sb<<endl;
    }
    return 0;
}