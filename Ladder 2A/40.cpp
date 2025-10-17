//Be Positive
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0; i<n; i++)cin>>nums[i];
    int pcount=0,ncount=0;
    for(int i=0; i<n; i++){
        if(nums[i]>0)pcount++;
        if(nums[i]<0)ncount++;
    }
    if(n%2==0)n=n/2;
    else n=n/2+1;
    if(pcount>=n)cout<<1;
    else if(ncount>=n)cout<<-1;
    else cout<<0;
    cout<<endl;
return 0;}