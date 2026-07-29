#include<bits/stdc++.h>
using namespace std;

int main(){
    // string s="abcde3efkjgab";
    // int i=0,len=0,l=0;
    // int n=s.size();
    // vector<bool>vis(128,0);
    // for(int j=0;j<n;j++){
    //     while(vis[s[j]]){
    //         vis[s[l]]=0;
    //         l++;
    //     }
    //     vis[s[j]]=1;
    //     if(j-l>len){
    //         len=j-l;
    //         i=l;
    //     }
    // }
    // cout<<s.substr(i,len+1);

    vector<int>nums={2,3,5,6,4,8,2,48,1,9,4};
    int target=10;
    sort(nums.begin(),nums.end());
    int i=0,j=nums.size()-1;
    int total=0;
    while(i<j){
        if(nums[j]+nums[i]>=target){
            total+=j-i;
            j--;
        }else{
            i++;
        }
    }   
    cout<<total;
}