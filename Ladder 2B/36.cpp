#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, c;
        cin>>n>>c;
        vector<int>nums(n);
        priority_queue<int, vector<int>, greater<int>>pq;
        for(int i=0; i<n; i++)cin>>nums[i];
        int ecn=0,ocn=0;
        for(int i=0; i<n-1; i++){
            if(nums[i]%2==0)ecn++;
            else ocn++;
            if(ecn==ocn)pq.push(abs(nums[i]-nums[i+1]));
        }
        int count=0;
        while(!pq.empty() && c>0){
            if(pq.top()<=c){count++; c-=pq.top(); pq.pop();}
            else break;
        }
        cout<<count<<endl;

    return 0;
}