//Sweet Problem
#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        vector<int>rgb(3);
        cin>>rgb[0]>>rgb[1]>>rgb[2];
        sort(rgb.begin(),rgb.end());
        int count=0;
        if(rgb[0]+rgb[1]<=rgb[2])count+=min(rgb[2],rgb[0]+rgb[1]);
        else{

                if(rgb[2]-rgb[1]<=rgb[0]){
                    rgb[0]-=(rgb[2]-rgb[1]);
                    count+=rgb[2]-rgb[1];}
                else{
                    rgb[2]-=rgb[0];
                    count+=rgb[0];
                    rgb[0]=0;
                }

            count+=rgb[0]/2;
            rgb[2]-=rgb[0]/2;rgb[0]-=rgb[0]/2;
            count+=rgb[0];
            rgb[1]-=rgb[0];
            count+=min(rgb[1],rgb[2]);
        }
        cout<<count<<endl;
    }

return 0;}