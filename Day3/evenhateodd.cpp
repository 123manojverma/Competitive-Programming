#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int even=0,odd=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0){
                even++;
            }else{
                odd++;
            }
        }
        if(even==odd){
            cout<<0<<endl;
        }else if((even%2!=0 && odd%2==0) || (odd%2!=0 && even%2==0)){
            cout<<-1<<endl;
        }else{
            int op=0;
            while (even>odd)
            {
                even--;
                odd++;
                op++;
            }
            while(odd>even){
                odd--;
                even++;
                op++;
            }
            cout<<op<<endl;
        }
        
    }
}