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


main()
{
    LL t;
    cin>>t;
    getchar();
    while(t--)
    {
        S s;

        getline(cin,s);
        LL l=s.size();
        for(LL i=l-1;i>=0;i--)
            cout<<s[i];
        cout<<endl;
    }
}
