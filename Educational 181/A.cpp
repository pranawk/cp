#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; ++i){
      int cF=0,cT=0,cN=0;
      string s;
      cin>>s;
      vector<char>other;
      for(int j=0; j<s.size(); j++){
        if(s[j]=='F')cF++;
        else if(s[j]=='T')cT++;
        else if(s[j]=='T')cT++;
        else{other.push_back(s[j]);}
      }
        while(cT--)cout<<'T';
        while(cF--)cout<<'F';
        while(cN--)cout<<'N';
        for(int j=0; j<other.size(); j++){
          cout<<other[j];
        }cout<<endl;
    }
    return 0;
}
