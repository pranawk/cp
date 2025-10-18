#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0; i<n; i++)cin>>arr[i];
    sort(arr.begin(),arr.end());
    int num=arr[n/2];
    int ii=1;
    int nn=n/2+1;
    while(nn<n){
        if(k/ii<1)break;
        while(nn<n && arr[nn]==num){nn++;ii++;}
        if(k/ii<1)break;
        if(nn>=n)break;
        else{
           // cout<<((arr[nn]-num)*ii)<<endl;
            long long ff=static_cast<long long>((arr[nn]-num))*ii;
            if(ff<=k){num=arr[nn];k-=ff;}
            else break;
        }
//        num++;
//        k-=ii;
    }
    //cout<<k<<endl;
    num+=k/ii;
    //while(k/ii>=1){num++;k-=ii;}
    cout<<num<<endl;
    return 0;
}