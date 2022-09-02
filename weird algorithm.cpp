#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin>>n;
    while(true){
        cout<<n<<" ";
        if(n==1) break;
        if(n%2==0) n/=2;
        else n = n*3+1;
    }
    cout<<"\n";
}

