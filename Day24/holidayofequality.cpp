#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    int maxi=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        maxi=max(a[i],maxi);
    }
    int spend=0;
    for(int i=0;i<n;i++){
        spend+=maxi-a[i];
    }
    cout<<spend<<endl;
}