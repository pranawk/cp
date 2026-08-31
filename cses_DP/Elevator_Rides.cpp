//  Elevator Rides
/* Great Question, can it be found less than 2^n time ??
 * Original pranaw thought n! , but this magic converts to 2^n
 * Bitmasks are for the positions, if at 'pos' is taken it changes to '1'
 */
#include<bits/stdc++.h>

using namespace std;
int n,x;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>x;
    vector<int>a(n);
    for (int i=0; i<n; i++)cin>>a[i];
    vector<pair<int,int>>bitmasks(1<<n,{INT_MAX,INT_MAX});
    int mx=(1<<n);
    bitmasks[0]={1,0};
    for (int i=1; i<mx; i++)
    {
        for (int bit=0; bit<n; bit++)
        {
            if ((1<<bit)&i)
            {
                int st=bitmasks[i^(1<<bit)].second;
                if (st+a[bit]<=x)
                {
                    bitmasks[i]=min(bitmasks[i],{bitmasks[i^(1<<bit)].first,st+a[bit]});
                }
                else
                {
                    bitmasks[i]=min(bitmasks[i],{bitmasks[i^(1<<bit)].first+1,a[bit]});
                }
            }
        }
    }
   // for (int i=0; i<mx; i++)cout<<i<<" "<<bitmasks[i].first <<" "<<bitmasks[i].second<<endl;
    cout<<bitmasks[mx-1].first;
    return 0;
}