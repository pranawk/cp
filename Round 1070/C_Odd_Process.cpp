//  C. Odd Process

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0; i<n; i++)cin>>nums[i];
        vector<int>evens,odds;
        for(int i=0; i<n; i++){
            if(nums[i]%2==0)evens.push_back(nums[i]);
            else odds.push_back(nums[i]);
        }
        sort(evens.begin(),evens.end());
        sort(odds.begin(),odds.end());
        if(evens.size()==0){
            int bl=1;
            for(int i=0; i<n; i++){
                if(bl==1)cout<<odds[odds.size()-1]<<" ";
                else cout<<0<<" ";
                bl^=1;
            }
        }
        else if(odds.size()==0){
            for(int i=0; i<n; i++)cout<<0<<" ";
        }
        else {
            long long evensum=odds[odds.size()-1];
            int l=evens.size();
            l--;
            cout<<odds[odds.size()-1]<<" ";
            int cn=1;
            while(l>=0){
                evensum+=evens[l];
                cout<<evensum<<" ";
                l--;cn++;
            }
            int bl=1;
            while(cn<n-1){
                if(bl==1)cout<<evensum-evens[0]<<" ";
                else cout<<evensum<<" ";
                cn++;
                bl^=1;
            }
            if(cn!=n){
            if(odds.size()%2==0)cout<<0<<" ";
            else{
              if(bl==1)cout<<evensum-evens[0]<<" ";
              else cout<<evensum<<" ";
            }}
        }
        cout<<endl;
    }
    return 0;
}
