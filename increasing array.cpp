#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n, answer = 0;
    cin>>n;
    cout<<"\n";
    ll values[n];
    for(int i = 0; i<n; i++){
        cin>>values[i];
    }
    for(int i = 1; i<n; i++){
        if(values[i]<values[i-1]){
            answer += (values[i-1]-values[i]);
            values[i] = values[i-1];
        }
    }
    cout<<answer;
    return 0;
}