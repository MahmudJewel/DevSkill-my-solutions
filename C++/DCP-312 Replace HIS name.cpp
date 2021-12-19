/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 08/01/18              #                                  *
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
    for(LL j=1; j<=t; j++)
    {
        S s;
        getchar();
        getline(cin,s);
        LL l=s.size();
        S str="";
        S p="Sharif";
        for(LL i=0;i<l;i++)
        {
            LL temp=1;
            if(s[i]==p[0])
            {

                for(LL m=1;m<6;m++)
                {
                    if(s[i+m]==p[m])
                    {
                        temp++;
                    }
                }

            }

            if(temp==6)
                {
                    str+="Officer";
                    i+=6;
                }
                else
                    str+=s[i];
        }
        cout<<str<<endl;

    }
}
