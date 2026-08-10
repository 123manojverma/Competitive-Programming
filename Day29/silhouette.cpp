#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>b(n);
        map<long long,long long>hm;
        for(int i=0;i<n;i++){
            cin>>b[i];
            hm[b[i]]++;
        }
        vector<long long>nums;
        for(auto i:hm){
            nums.push_back(i.first);
        }
        if(nums.size()==1){
            if(nums[0]!=0){
                cout<<-1<<endl;
            }else{
                for(int i=0;i<n;i++){
                    cout<<1<<" ";
                }
                cout<<endl;
            }
            continue;
        }
        sort(nums.begin(),nums.end());
        if(nums[0]!=0){
            cout<<-1<<endl;
            continue;
        }
        map<long long,long long>m;
        long long sum=0;
        bool flag=true;
        long long maxi=LONG_LONG_MIN;
        int size=nums.size();
        for(int i=1;i<size;i++){
            long long val=nums[i]-sum;
            long long cnt=hm[nums[i-1]];
            if(val%cnt==0){
                long long total=val/cnt;
                if(maxi>=total){
                    flag=false;
                    break;
                }else{
                    maxi=total;
                }
                m[nums[i-1]]=total;
                sum=nums[i];
            }else{
                flag=false;
                break;
            }
        }
        if(!flag){
            cout<<-1<<endl;
            continue;
        }
        maxi++;
        for(int i=0;i<n;i++){
            if(m.count(b[i])){
                cout<<m[b[i]]<<" ";
            }else{
                cout<<maxi<<" ";
            }
        }
        cout<<endl;
    }
}