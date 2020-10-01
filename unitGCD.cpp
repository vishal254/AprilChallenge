// https://www.codechef.com/APRIL20B/problems/UNITGCD
#define done "\n"
#define ll long long int
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n == 1)
        {
            cout<<1<<done<<"1 1"<<done;
            continue;
        }
        if(n == 2)
        {
            cout<<1<<done<<"2 1 2"<<done;
            continue;
        }
        if(n == 3)
        {
            cout<<1<<done<<"3 1 2 3"<<done;
            continue;
        }
        else
        {
            ll count = 1;
            if(n&1)
            {
                n = floor(n/2);
                cout<<n<<done<<"3 1 2 3"<<done;
                count = 4;
                for(ll i = 1; i < n; i++)
                {
                    cout<<2<<" "<<count<<" "<<count+1<<done;
                    count += 2;
                }
            }
            else
            {
                n = n>>1;
                cout<<n<<done;
                for(ll i = 0; i < n; i++)
                {
                    cout<<"2 "<<count<<" "<<count+1<<done;
                    count += 2;
                }
            }
        }
    }
    return 0;
}