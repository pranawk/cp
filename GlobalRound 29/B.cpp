#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>nums(2*n,0);
        int nn=n/2*2;
        int i=0;
        while(nn>0){
            nums[i]=nn;
            nums[i+nn]=nn;
            i++;
            nn-=2;
        }
        if(n%2==0)nn=n-1;
        else nn=n;
        if(nn!=1){nums[n/2]=nn;nums[n/2+nn]=nn;nn-=2;}
        i=(n/2*2)+1;
        while(nn>1){
            nums[i]=nn;
            nums[i+nn]=nn;
            nn-=2;
            i++;
        }
        for(int j=0; j<2*n; j++)if(nums[j]==0)nums[j]=1;

        for(int j=0; j<2*n; j++){
            cout<<nums[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}