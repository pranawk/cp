//  C. Snowfall

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        vector<int>d2,d3,d6,nr;
        int n;
        cin>>n;
        int temp;
        for(int i=0; i<n; i++){cin>>temp;
            if(temp%6==0)d6.push_back(temp);
            else if(temp%2==0)d2.push_back(temp);
            else if(temp%3==0)d3.push_back(temp);
            else nr.push_back(temp);
        }
        for(auto i:d6)cout<<i<<" ";
        for(auto i:d2)cout<<i<<" ";
        for(auto i:nr)cout<<i<<" ";
        for(auto i:d3)cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}