#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<int>fact;
//     for(int i=1;i*i<=n;i++){
//         if(n%i==0){
//             fact.push_back(i);
//             if(i!=n/i){
//                 fact.push_back(n/i);
//             }
//         }
//     }
//     for(int x:fact){
//         cout<<x<<" ";
//     }
//     // T.C -> O(sqrt(N))
// }

void SieveOfEratosthenes(int N){
    bool prime[N+1];
    
    for(int i=0;i<=N;i++){
        prime[i]=1;
    }
    prime[0]=prime[1]=0;
    for(int i=2;i*i<=N;i++){
        if(prime[i]){
            for(int j=i*i;j<=N;j+=i){
                prime[j]=0;
            }
        }
    }
    for(int i=0;i<=N;i++){
        if(prime[i]){
            cout<<i<<" ";
        }
    }
}

void TrialDivision(int n){
    vector<int>prime_factor;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
                prime_factor.push_back(i);
            }
        }
    }
    if(n>1){
        prime_factor.push_back(n);
    }
    for(int x:prime_factor){
        cout<<x<<" ";
    }
}

void SmallestPrimeFactor(int n){
    vector<int>spf(n+1);
    for(int i=0;i<=n;i++){
        spf[i]=i;
    }

    for(int i=2;i*i<=n;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=n;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }

    // for(int x:spf){
    //     cout<<x<<" ";
    // }
    vector<int>prime_factors;
    while(n>1){
        prime_factors.push_back(spf[n]);
        n/=spf[n];
    }

    for(int x:prime_factors){
        cout<<x<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    // TrialDivision(n);
    // T.C -> O(sqrt(N))


    // SieveOfEratosthenes(n);
    // O(logn)
    // O(log(logn))


    SmallestPrimeFactor(n);
    // O(logn)
    // O(log(logn))
}
