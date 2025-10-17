#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int cn=0;
        bool flag=true;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1')cn++;
            else{cn=0;}

            if(cn==k){flag=false; break;}
        }
        vector<int>nums(n);
        if(flag==true){

            int num=n;
            for(int i=n-1; i>=0;  i--){
                if(s[i]=='0'){nums[i]=num; num--;}
            }
            for(int i=0; i<n; i++){
                if(s[i]=='1'){nums[i]=num; num--;}
            }
        }
        if(flag==true){
            cout<<"YES"<<endl;
            for(int i=0; i<n; i++){
                cout<<nums[i]<<" ";
            }
            cout<<endl;
        }
        else{cout<<"NO"<<endl;}
    }
    return 0;
}