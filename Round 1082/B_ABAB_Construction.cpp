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
        bool fl=true;
        if(n%2==1 && s[0]=='b')fl=false;
        else{
            int ii=0;
            if(n%2==1){ii++;}
            for(int i=ii; i<n; i+=2){
                int bc=0,ac=0;
                if(s[i]=='a')ac++;
                else if(s[i]=='b')bc++;
                if(s[i+1]=='a')ac++;
                else if(s[i+1]=='b')bc++;
                if(ac>=2 || bc>=2)fl=false;
            }
        }
        cout<<(fl==true ? "YES" : "NO")<<endl;

    }

    return 0;
}