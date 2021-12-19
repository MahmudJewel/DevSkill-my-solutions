/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 23/12/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define S string
#define D double
LL prime[10001];

void sieve(LL a[]);

main()
{
    LL t;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin>>t;
    sieve(prime);
    prime[0]=1;
    prime[1]=1;
    while(t--)
    {

        LL a;
        cin>>a;
        if(prime[a]==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}

void sieve(LL a[])
{
    LL s=sqrt(10001);
    for(LL i=2; i<=s; i++)
    {
        for(LL j=2; j*i<=10001; j++)
        {
            if(a[i*j]==0)
                a[i*j]=1;
        }
    }
}
