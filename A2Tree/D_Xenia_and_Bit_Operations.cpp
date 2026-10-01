//  D. Xenia and Bit Operations

#include<bits/stdc++.h>

using namespace std;
struct Tree{
    int data=-1;
    Tree*left=NULL, *right=NULL;
};

Tree* init(vector<int>&a, int l, int r, bool fl){
    if(l==r-1){
        Tree *tem=new Tree;
        if(fl==0)tem->data=a[l]|a[r];
        else tem->data=a[l]^a[r];
        return tem;
    }
    Tree *tem=new Tree;
    if(fl==0){
        tem->left= init(a, l,l+(r-l)/2, 1);
        tem->right= init(a,l+(r-l)/2+1,r, 1);
        tem->data=((tem->left->data)|(tem->right->data));
        return tem;
    }
    tem->left= init(a, l,l+(r-l)/2, 0);
    tem->right= init(a,l+(r-l)/2+1,r, 0);
    tem->data=((tem->left->data)^(tem->right->data));
    return tem;
}
int b1,b2,p;

void solve(Tree* tem, int l, int r, bool fl){
    if(abs(r-l)==1){
//         tem->data=b1;
//         return;
        if(fl==0)(tem->data)= (b1|b2);
        else {(tem->data)= (b1^b2);}
        return ;
    }
    if(p<=l+(r-l)/2){
        solve(tem->left, l, l+(r-l)/2, fl^1);
    }
    else{
        solve(tem->right, l+(r-l)/2 +1, r, fl^1);
    }
    if(fl==0)tem->data=(tem->left->data)|(tem->right->data);
    else tem->data=(tem->left->data)^(tem->right->data);
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int>a(1<<n);
    for(int i=0; i<(1<<n); i++){cin>>a[i];}
    Tree* tem= init(a,0,(1<<n)-1,(n%2)^1);
//     cout<<tem->data<<endl;
    while(m--){
        cin>>p>>b1;
        p--;
        a[p]=b1;
        if(p%2==0)b2=a[p+1];
        else b2=a[p-1];
        solve(tem, 0,(1<<n)-1, (n%2)^1);
        cout<<tem->data<<endl;
    }
    return 0;
}