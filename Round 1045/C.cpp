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
        long long ans=0;
        if(arr[0]>arr[1]){ans+=arr[0]-arr[1];arr[0]=arr[1];}
        for(int i=0; i<n-1; i++){
            if(i%2==1){
                if(arr[i-1]+arr[i+1]>arr[i]){
                    if(arr[i-1]>=arr[i]){ans+=arr[i-1]-arr[i]; arr[i-1]=arr[i];
                                        ans+=arr[i+1]; arr[i+1]=0;}
                    else{
                        ans+=arr[i+1]+arr[i-1]-arr[i];
                        arr[i+1]=arr[i]-arr[i-1];
                    }
                }
            }
        }
        if((n-1)%2==1 && arr[n-1]<arr[n-2])ans+=arr[n-2]-arr[n-1];
        cout<<ans<<endl;
    }
    return 0;
}