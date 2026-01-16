//  A. Boys and Girls

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    ifstream inputFile("input.txt");
    inputFile>>n;
    inputFile>>m;
    inputFile.close();
    string s;
    if(n>=m){
        int i=0;
        while(m>0){
            if(n>0 && i==0){s+="B"; n--;}
            else {s+="G" ; m--;}
            i^=1;
        }
        while(n--)s+="B";
        while(m--)s+="G";
    }
    else{
        int i=0;
        while(n>0){
            if(m>0 && i==0){s+="G"; m--;}
            else {s+="B" ; n--;}
            i^=1;
        }
        while(n--)s+="B";
        while(m--)s+="G";
    }
    ofstream outputFile("output.txt");
    outputFile<<s;
    outputFile.close();
    return 0;
}