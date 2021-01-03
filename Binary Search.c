#include<stdio.h>
int main()
{
    int m,c,d,i,j,n,mid;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b=0;
    int e;
    e=n-1;
    int key;
    scanf("%d",&key);
    while(b<=e)
    {
        mid=(b+e)/2;
        if(a[mid]==key)
        {
            printf("Found the number %d at %d index\n",a[mid],mid);
            break;
        }
        else if(a[mid]<key)
        {
            b=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    if(b>e)
    {
        printf("Not Found\n");
    }
    return 0;
}
