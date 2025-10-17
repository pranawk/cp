#include<bits/stdc++.h>
using namespace std;

long long retval(vector<int>arr, int l,int r){
    if(l==r)return 0;
    if(l==r-1)return arr[l];

    while(l<r && arr[l]==0){arr[l+1]--; l++;}

    if(l==r)return 0;
    if(l==r-1)return arr[l];

    int profit=INT_MIN;
    int ind=l;
    for(int i=l; i<r; i++){
        int lpro=0;
        lpro-=arr[i];
        lpro++;
        int j=i;
        while(j+1<r-1 && arr[j+1]==1){lpro++; j++;}
        if(lpro>=profit){
            ind=i; profit=lpro;
        }
    }

    if(ind+1<r)arr[ind+1]--;

    return arr[ind] + retval(arr,l, ind) + retval(arr,ind+1, r);
}

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; i++)cin>>arr[i];
        int ans=0;
        cout<< retval(arr,0,n)<<endl;
    }
    return 0;
    }
//    if(l==r)return 0;
//        long long ans=0;
//        if(l+1==r)return arr[l];
//
//        while(l<r &&arr[l]<=0){arr[l+1]-=1;l++;}
//        if(l==r)return 0;
//        if(l+1==r)return arr[l];
//
//        int maxin=l, maxe=arr[l];
//        for(int i=l; i<r; i++){
//            if(arr[i]>=maxe){maxe=arr[i]; maxin= i;}
//        }
//        if(maxin==l){
//            if(l+1<r)arr[l+1]--;
//            return arr[maxin]+ retval(arr,l+1,r);
//        }
//
//        arr[maxin]-=(maxin-l);
//        return arr[maxin-1]+ retval(arr, l,maxin-1)+ retval(arr,maxin,r);