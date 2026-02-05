//  A. Array

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)cin>>arr[i];
    sort(arr.begin(),arr.end());
    cout<<1<<" "<<arr[0]<<endl;
    if(arr[n-1]>0){
        cout<<1<<" "<<arr[n-1]<<endl;
        cout<<n-2<<" ";
        for(int i=1; i<n-1; i++)cout<<arr[i]<<" ";
    }
    else if(arr[n-1]==0){
        cout<<2<<" "<<arr[1]<<" "<<arr[2]<<endl;
        cout<<n-3<<" ";
        for(int i=3; i<n; i++)cout<<arr[i]<<" ";
    }

    return 0;
}