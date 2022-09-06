#include <iostream>
using namespace std;

int main()
{
    long long int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if((a + b) % 3 == 0 && (min(a, b) * 2 >= max(a, b))){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    
    }
    return 0;
}