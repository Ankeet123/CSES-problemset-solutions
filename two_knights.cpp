#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli n;
    cin>>n;
    for(lli i = 1; i<=n; i++){
        cout<<(i*i)*(i*i-1)/2 - 4*(i-1)*(i-2)<<endl;
    }
    return 0;
}