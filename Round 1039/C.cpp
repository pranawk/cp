#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<long long>arr(n);
        for(int i=0; i<n; i++)cin>>arr[i];
        bool flag=true;
        int i=n-1;
        long long minm= *min_element(arr.begin(),arr.end());
        while(i>0){
            if(arr[i]>=minm<<1){flag=false;break;}
            if(minm==arr[i]){arr.pop_back();
                            i--;
                            minm=*min_element(arr.begin(),arr.end());continue;}
            arr.pop_back();
            i--;
        }
        if(flag==true)cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}
