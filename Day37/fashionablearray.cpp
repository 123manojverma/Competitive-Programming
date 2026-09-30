#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n),freq(101,0);
        for(auto &x:a){
            cin>>x;
            freq[x]++;
        }
        
        bool flag=true;
        for(int i=100;i>0;i--){
            int occur=freq[i];
            if(occur<=0)continue;
            for(int j=100;j>=1;j--){
                for(int k=0;k<min(freq[j],occur);k++){
                    cout<<j<<" ";
                }
                freq[j]-=min(freq[j],occur);
            }
        }
        cout<<endl;
    }
}