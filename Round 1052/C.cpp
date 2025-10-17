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
        vector<int>nums(n,0);
        int l=0,lr=0;
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                nums[i]=i+1;lr=i+1;
                int ll=i;
                int ii=i;
                for(int j=l; j<i; j++){
                    nums[j]=ii; ii--;
                }
                l=i+1;
                }
        }
        for(int i=n-1; i>=l; i--){
            nums[i]=lr+1;
            lr++;
        }
        bool fl=true;
        for(int i=0; i<n; i++){
            if(i==0){if(s[i]=='0'&&s[i+1]=='1')fl=false;}
            else if(i==n-1){if(s[i]=='0' &&s[i-1]=='1')fl=false;}
            else{
                if(s[i]=='0'&&s[i-1]=='1'&&s[i+1]=='1')fl=false;
            }
        }
        if(fl==false)cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for(int i=0; i<n; i++)cout<<nums[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
    }