#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int nums[n];
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        int psum[n];
        psum[0]=0;
        for(int i=1;i<n;i++){
            if(nums[i]>=nums[psum[i-1]]){
                psum[i]=i;
            }else{
                psum[i]=psum[i-1];
            }
        }
        int cnt=1;
        for(int i=1;i<n;i++){
            if(psum[i]!=psum[i-1]){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}