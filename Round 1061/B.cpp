#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        bool bp=false;
        int cna=0, cnb=0;
        for(auto i:s){if(i=='B'){bp=true;cnb++;}if(i=='A')cna++;}
        int i=1;
//        cout<<bp<<endl;
        while(q--){
            int a;
            cin>>a;
            if(bp==false){cout<<a<<endl;continue;}
            int ii=0;
            int time=0;
            while(a!=0){
                if(s[ii]=='A')a--;
                else a/=2;
                ii++;
                ii%=n;
                time++;
            }
            cout<<time<<endl;
        }
    }
    return 0;
}