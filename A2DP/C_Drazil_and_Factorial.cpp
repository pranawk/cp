//  C. Drazil and Factorial

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long long a;
    cin>>a;
    vector<int>cn(10,0);
    long long aa=a;
    while(aa!=0){
        int ti=aa%10;
        for(int i=1; i<=ti; i++)cn[i]++;
        aa/=10;
    }
//     for(int i=0; i<=7; i++)cout<<cn[i]<<" ";
    cn[2]+=2*cn[4];
    cn[4]=0;
    cn[2]+=cn[6];
    cn[3]+=cn[6];
    cn[6]=0;
    cn[2]+=3*cn[8];
    cn[8]=0;
    cn[3]+=2*cn[9];
    cn[9]=0;
    vector<int>cnn(8,0);
//     for(int i=0; i<=7; i++)cout<<cn[i]<<" ";
    for(int i=7; i>1; i--){
        int cp=cn[i];
        for(int j=i-1; j>1; j--){
            if(cn[j]<cp){
                if(j==4)cn[2]-=(cp-cn[4])*2;
                else if(j==6){cn[2]-=(cp-cn[6]);cn[3]-=(cp-cn[6]);}
            }
            else{
                cn[j]-=cp;
            }
        }
        cnn[i]=cp;
    }
    string ans;
    for(int i=7; i>1; i--){
        for(int j=0; j<cnn[i]; j++)ans+=('0'+i);
    }
    cout<<ans;
    return 0;
}