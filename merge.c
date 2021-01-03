#include<stdio.h>
int main()
{
    long long int p,q,r,s,rafiq,biplob,akhi,sum=0;
    scanf("%lld %lld %lld %lld",&p,&q,&r,&s);
    rafiq=(2*p)+s;
    biplob=q+s;
    akhi=r+s;
    sum=rafiq+biplob+akhi;
    printf("%lld\n",sum);
    return 0;

}
