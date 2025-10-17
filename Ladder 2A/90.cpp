#include<bits/stdc++.h>
using namespace std;
int main(){
    int r=0;
    string s;
    cin>>s;
    bool flag=true;
    vector<int>cn(3);
    for(size_t i=0; i<s.size(); i++){
        if(r==0 && s[i]=='a')cn[0]++;
        else if(s[i]=='b' && (r==0|| r==1)){r=1; cn[1]++;}
        else if(s[i]=='c' && (r==1|| r==2)){r=2; cn[2]++;}
        else{ flag=false; break;}
    }
    if(flag==true && (cn[2]==cn[0] || cn[2]==cn[1]))cout<<"YES"<<endl;
    else{cout<<"NO"<<endl;}
    return 0;
}