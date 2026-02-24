//  D. Recollect Numbers

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        if(n>k || k>(n*2-1)){cout<<"NO"<<endl;continue;}
        vector<int>ans,freq(n+1,0);
        int don=0;
        int a=1,b=2;
        bool fs=true;
        while(k>0){
            if(k==(n-don)){
                for(int i=1; i<=n; i++){
                    while(freq[i]<2){ans.push_back(i); freq[i]++;}
                }
                break;
            }
            if(fs==true){
                ans.push_back(a);
                ans.push_back(b);
                fs=false;freq[a]++;freq[b]++;
                k-=1;b++;
            }
            else{
                ans.push_back(b);
                ans.push_back(a);
                freq[a]++;freq[b]++;
                don++;
                a++;b++;
                k-=2;
            }
        }
        cout<<"YES"<<endl;
        for(int i=0; i<2*n; i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}