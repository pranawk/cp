//  C. XOR Problem

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
        int pp=0;
        for(int i=0; i<=n; i++)pp|=i;
        int ii=pp;
        int aa=1;
        cout<<pp*2+1<<endl;
        multiset<int>ms;
        for(int i=1; i<=pp; i++){ms.insert(i);ms.insert(i);}
        cout<<"0 ";
        int cur=0;
        while(!ms.empty()){
            for(int i:ms){
                if((cur^i)<=n){
                    ms.erase(ms.find(i));
                    cout<<(cur^i)<<" ";
                    cur=i;
                    break;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}