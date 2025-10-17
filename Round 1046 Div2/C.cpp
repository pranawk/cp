#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; i++)cin>>arr[i];
        vector<int>freq(n+1,0);
        vector<queue<int>>q(n+1);
        //count, 1st appear count;
        int ans=0;
        for(int i=0; i<n; i++){
            freq[arr[i]]++;
            q[arr[i]].push(ans);
            if(freq[arr[i]]==arr[i]){
                if(q[arr[i]].front()+arr[i] > ans){
                    ans=q[arr[i]].front()+arr[i];

                }
                q[arr[i]].pop();
                freq[arr[i]]--;
            }

        }
        cout<<ans<<endl;

    }
    return 0;
}