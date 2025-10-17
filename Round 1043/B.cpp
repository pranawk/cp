#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        long long n;
        cin>>n;
        int ans=0;
        vector<long long>res;
        int i=2;
        long long num=10;
        while(num<pow(10,18) && num<n){
            if(n%(num+1)==0){res.emplace_back(n/(num+1));ans++;}
            num= pow(10,i);
            i++;
        }
        if(ans==0)cout<<0<<endl;
        else{
            cout<<ans<<endl;
            sort(res.begin(),res.end());
            for(int i=0; i<res.size(); i++){
                cout<<res[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}