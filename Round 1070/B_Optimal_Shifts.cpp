//  B. Optimal Shifts

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        string nums;
        cin>>nums;
        int md=0;int curm=0;
        for(int i=0; i<n; i++){
            if(nums[i]!='0'){md=max(md,curm);curm=0;}
            else curm++;
        }
        int ii=0;
        while(nums[ii]=='0'){curm++;ii++;}
        md=max(md,curm);
        cout<<md<<endl;
    }
    
    return 0;
}
