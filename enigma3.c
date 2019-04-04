#include<stdio.h>
/*long long int appy(long long int a,long long int b,long long int n,long long int j,long long int f)
{
    ++j;
    if(j>n)
        return f;
    if(j%a==0&&j%(a*b)!=0)
               {++f;
               }
    if(j%b==0&&j%(a*b)!=0)
                {++f;
                }
    appy(a,b,n,j,f);
}*/
long long int main()
{
    long long int i,t,n,k,a,b,c;
    scanf("%llld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%llld%llld%llld%llld",&n,&a,&b,&k);
        c=(n/a)+(n/b)-(n/(a*b));
        if(c>=k)
            printf("\nWin\n");
        else
            printf("\nLose\n");
    }
    return 0;
}
