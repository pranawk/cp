//  B. Reverse a Permutation

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
       vector<int>nums(n);
       for(int i=0; i<n; i++){cin>>nums[i]; }
       int ii=n;
       for(int i=0; i<n; i++){
           if(nums[i]!=ii){
                for(int j=i+1; j<n; j++){
                    if(nums[j]==ii){
                        int ll=i,rr=j;
                        while(ll<rr){
                            int temp=nums[ll];
                            nums[ll]=nums[rr];
                            nums[rr]=temp;
                            ll++;rr--;
                        }
                        break;
                    }
                }
                break;
           }
           ii--;
       }
       for(int i=0; i<n; i++)cout<<nums[i]<<" ";
       cout<<endl;
    }
    return 0;
}