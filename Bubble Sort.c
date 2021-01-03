#include<stdio.h>
int main()
{
    int a[100],b,c,i,j,k,tmp;
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<b;i++)
    {
        for(j=i+1;j<b;j++)
        {
            if(a[i]>a[j])
            {
                tmp = a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    for(j=0;j<b;j++)
    {
        printf("%d\n",a[j]);
    }

}
