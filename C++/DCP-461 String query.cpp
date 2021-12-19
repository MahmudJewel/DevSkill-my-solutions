/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 01/01/18              #                                  *
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
    while(t--)
    {
        S s;
        LL l;
        cin>>l>>s;
        LL q;
        cin>>q;
        for(LL m=0;m<q;m++)
        {
            LL k,ans=0;
            cin>>k;
            //LL n;
            /*if(k>=l)
                n=l;
            else
                n=k;*/
            for(LL i=0;i<l;i++)
            {

                for(LL j=i;j<l,j<=k;j++)
                {

                    if((i+j)==k && s[i]==s[j])
                        ans++;
                }
            }
             cout<<ans<<endl;
        }
    }
}
