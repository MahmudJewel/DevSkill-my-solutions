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
   while(t--)
   {
       D a,b,c;
       cin>>a>>b>>c;
       D r=sqrt(a*a+b*b+c*c);
       printf("%.2lf\n",r);
   }
}
