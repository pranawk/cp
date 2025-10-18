#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)cin>>arr[i];
    cout<<n+1<<endl;
    int num=0;
    for(int i=n-1; i>=0; i--){
        int nn=0;
        if((arr[i]+num)%(n+1)!=i+1){
            if((arr[i]+num)%(n+1)<i+1)nn=i+1-(arr[i]+num)%(n+1);
            else nn= i+1+n+1-(arr[i]+num)%(n+1);
        }
        num+=nn;
        cout<<1<<" "<<i+1<<" "<<nn<<endl;
    }
    cout<<2<<" "<<n<<" "<<n+1<<endl;
    return 0;
}