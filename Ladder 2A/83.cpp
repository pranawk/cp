//Snacktower
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=n;
    priority_queue<int>pq;
    while(n--){
        int x;
        cin>>x;
        pq.push(x);
        while(!pq.empty() && pq.top()==i){cout<<pq.top()<<" ";pq.pop();i--;}
        cout<<endl;
    }

return 0;
}