#include<iostream>
#include<cstdio>
#include<vector>



#define ll long long
using namespace std;

vector<ll> mergesort(vector<ll> data)
{
    if(data.size()==1)
        return data;
    vector<ll> left=mergesort(vector<ll>(data.begin(),data.begin()+(data.size()/2)));
    vector<ll> right=mergesort(vector<ll>(data.begin()+(data.size()/2),data.end()));
    vector<ll> result;
    ll lftptr=0;
    ll rgtptr=0;
    while(lftptr<left.size() && rgtptr<right.size())
    {
        if(left[lftptr]>right[rgtptr])
        {
            result.push_back(right[rgtptr]);
            rgtptr++;
        }
        else
        {
            result.push_back(left[lftptr]);
            lftptr++;
        }
    }
    if(lftptr==left.size())
    {
        while(rgtptr<right.size())
        {
            result.push_back(right[rgtptr]);
            rgtptr++;
        }
    }
    else
    {
        while(lftptr<left.size())
        {
            result.push_back(left[lftptr]);
            lftptr++;
        }
    }
    return result;

}
int main()
{
    ll t,k;
    scanf("%lld",&t);
    vector<ll> a;
    for(ll i=0;i<t;i++)
    {
        scanf("%lld",&k);
        a.push_back(k);
    }
    a=mergesort(a);
    for(int i=0;i<a.size();i++)
    {
        printf("%lld\n",a[i]);
    }
    return 0;
}
