//  B. Circus

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string cl,ac;
    cin>>cl>>ac;
    int a=0,b=0,c=0,k=0;
    for(int i=0 ;i<n; i++){
        if(cl[i]==ac[i]){
            if(cl[i]=='0')a++;
            else {c++; k++;}
        }
        else{b++;if(ac[i]=='1')k++;}
    }
    int sm=n/2-k;
    int aa=INT_MAX,cc=INT_MAX;
    for(int i=0; i<=a; i++){
        for(int j=0; j<=c; j++){
            int bb = k - 2 * j;
            if(i-j==sm && bb>=0 && bb<=b){
                aa=i;cc=j;break;
            }
        }
    }
    if(aa==INT_MAX){cout<<-1<<endl;return 0;}
    int bb=k-2*cc;
//     cout<<aa<<" "<<bb<<" "<<cc<<endl;
//     cout<<aa+bb+cc<<endl;
    for(int i=0; i<n; i++){
        if(cl[i]==ac[i]){
            if(cl[i]=='0' && aa>0){cout<<i+1<<" ";aa--;}
            else if(cl[i]=='1' && cc>0){cout<<i+1<<" ";cc--;}
        }
        else if(bb>0){cout<<i+1<<" ";bb--;}
    }
    return 0;
}