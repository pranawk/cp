//  C. XOR-factorization

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        if(k%2==1){
            for(int i=0; i<k; i++)cout<<n<<" ";
            cout<<endl;
        }
        else{
            vector<int>nums(k,0);
            vector<bool>clamp(k,true);
            int clampc=0;
            int ii=30;
            while((1<<ii)>n)ii--;
            //cout<<(1<<ii)<<endl;
            while(ii>=0){
                bool fl=false;
                if((n&(1<<ii))==0){
                    int j=(clampc/2)*2;
                    for(int i=0; i<k; i++){
                        if(j>0 && clamp[i]==false){
                            nums[i]|=(1<<ii);
                            j--;
                        }
                    }
                }
                else{
                    fl=true;
                    if(k-clampc>=1){
                        for(int i=0; i<k; i++){
                            if(fl==true&&clamp[i]==true){fl=false;clamp[i]=false;clampc++;continue;}
                            nums[i]|=(1<<ii);
                        }
                    }
                    else{
                        for(int i=1; i<k; i++){
                            nums[i]|=(1<<ii);
                        }
                    }
                }
                ii--;
            }
            for(int i=0; i<k; i++)cout<<nums[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
//11110
