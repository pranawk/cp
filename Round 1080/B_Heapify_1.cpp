//  B. Heapify 1

#include<bits/stdc++.h>

using namespace std;
void swap(vector<int>&a, int i,int j){
    int c=a[i];
    a[i]=a[j];
    a[j]=c;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        bool fl=true;
        for(int i=0; i<n/2; i++){
            if(a[i]!=i+1){
                int j=(i+1)*2;
                while(j<=n){
                    if(a[j-1]==i+1)break;
                    j*=2;
                }
                if(j>n){fl=false;break;}
                swap(a, i, j-1 );}
        }
        for(int i=1; i<n; i++)if(a[i]<a[i-1])fl=false;
        cout<<(fl==false ? "NO" : "YES")<<endl;
    }
    return 0;
}