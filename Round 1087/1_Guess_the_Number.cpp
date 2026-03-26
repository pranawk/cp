//  1. Guess the Number

#include<bits/stdc++.h>

using namespace std;

int main(){
    int sm=0, bg=1000001;
    int mid=sm+(bg-sm)/2;
    string s;
        while(1){
            cout<<mid<<endl;
            cin>>s;
            if(s==">="){
                sm =mid;
                mid=sm+(bg-sm)/2;
            }
            else {
                bg=mid;
                mid=sm+(bg-sm)/2;
            }
            if(mid==0){cout<<"! 1"<<endl;break;}
            if(bg==mid || sm==mid){cout<<"! "<<mid<<endl;break;}
        }
    return 0;
}