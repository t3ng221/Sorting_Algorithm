#include<stdio.h>
void quicksort(int a[25],int first,int last)
{
    int i, j, pivot, temp;
    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;
        while(i<j)
        {
            while(a[i]<=a[pivot]&&i<last)
                i++;
            while(a[j]>a[pivot])
                j--;
            if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        temp=a[pivot];
        a[pivot]=a[j];
        a[j]=temp;
        quicksort(a,first,j-1);
        quicksort(a,j+1,last);
    }
}
int main()
{
    int i, end, a[25];
    scanf("%d",&end);
    for(i=0; i<end; i++)
        scanf("%d",&a[i]);
    quicksort(a,0,end-1);
    for(i=0; i<end; i++)
        printf("%d ",a[i]);
    return 0;
}
