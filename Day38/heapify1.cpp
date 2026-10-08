#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n+1,0);
        vector<bool>used(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n/2;i++){
            if(!used[i]){
                vector<int>b;
                for(int j=i;j<=n;j*=2){
                    b.push_back(a[j]);
                    used[j]=1;
                }
                sort(b.begin(),b.end());
                int k=0;
                for(int j=i;j<=n;j*=2){
                    a[j]=b[k++];
                }
            }

        }
        bool flag=true;
        for(int i=1;i<=n;i++){
            if(a[i]!=i){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}