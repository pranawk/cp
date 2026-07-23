//  C. MEXOR

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        long long n,k;
        cin>>n>>k;
        if(n==1&& k==0){cout<<"NO"<<endl;continue;}
        k^=n;
        if(k>(n+1)*(n)/2){
            cout<<"NO"<<endl;continue;
        }
        vector<int>a;
        int ii=1;
        while(k>0){
            if((ii&k)!=0){
                a.push_back(ii);
                k^=ii;
            }
            ii<<=1;
        }
        int l=0;
        vector<int>ans;
        for(int i=1; i<n; i++){
            if(l<a.size() && i==a[l]){l++;continue;}
            else ans.push_back(i);
        }
        ans.push_back(0);
        for(int i=0; i<a.size(); i++)ans.push_back(a[i]);
        if(ans.size()>n)cout<<"NO";
        else{
            cout<<"YES"<<endl;
            //int aa=0;
            for(int i=0; i<ans.size(); i++){cout<<ans[i]<<" ";}
//            cout<<endl;
//            cout<<aa<<" ";
        }
        cout<<endl;
    }
    return 0;
}