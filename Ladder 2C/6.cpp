#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;

        if(n%4==0 ||(n+1)%4==0)cout<<0<<endl;
        else cout<<1<<endl;
        vector<int>nums;
        int i=n;
        long long s=n*static_cast<long long>(n+1)/4;
        while(s>=i){nums.push_back(i);s-=i; i--;}
        if(s>0)nums.push_back(s);
        cout<<nums.size()<<" ";
        for(int i=0; i<nums.size(); i++)cout<<nums[i]<<" ";


    return 0;
}
//    1 2 3 4 5 6 7 8 9
//    n(n+1)/2
//    7 5 2
//    22 9 8 5
//    45 13 12 11 9
//
