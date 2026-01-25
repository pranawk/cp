//  A. DBMB and the Array

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,s,x;
        cin>>n>>s>>x;
//        cout<<n<<endl;
        int t_sum=0;
        vector<int>nums(n);
        for(int i=0; i<n; i++){
            cin>>nums[i];
        }
        for(int i=0; i<n; i++)t_sum+=nums[i];
        //cout<<t_sum;
        if(t_sum>s){cout<<"NO"<<endl;continue;}
        s-=t_sum;
        //cout<<s<<endl;
        if(s%x==0){cout<<"YES"<<endl;}
        else cout<<"NO"<<endl;
    }
    return 0;
}