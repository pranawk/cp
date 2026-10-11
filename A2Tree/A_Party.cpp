//  A. Party

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>man(n);
    for(int i=0; i<n; i++)cin>>man[i];
    vector<int>parent(n,-1);
    vector<bool>taken(n,false);
    while(1){
        bool fl2=true;
        for(int i=0 ; i<n; i++){
            if(taken[i]==false){
                if(man[i]==-1){parent[i]=1;
                    taken[i]=true;
                    fl2=false;}
                else if(parent[man[i]-1]!=-1){parent[i]=parent[man[i]-1]+1;
                    taken[i]=true;
                    fl2=false;}
            }
        }
        if(fl2==true)break;
    }
//     for(int i=0; i<n; i++)cout<<parent[i]<<" ";
    cout<<*max_element(parent.begin(),parent.end());
    return 0;
}