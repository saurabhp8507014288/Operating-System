#include<stdio.h>
int main()
{
    int t[20],d[20],atr[40];
    int n,h;
    int i,j,k,p,temp,sum=0;
    printf("enter no. of disk and header position: ");
    scanf("%d",&n);
    scanf("%d",&h);
    t[0]=0;
    t[1]=h;
    printf("\nenter all disk: ");
    for(i=2;i<n+2;i++)
    {
        scanf("%d",&t[i]);
    }
    for(i=1;i<n+2;i++)
    {
        for(j=1;j<(n+2)-i-1;j++)
        {
            if(t[j]>t[j+1])
            {
                temp=t[j];
                t[j]=t[j+1];
                t[j+1]=temp;
            }
        }
    }
    for(i=1;i<n+2;i++)
    {
        if(t[i]==h)
        {
            j=i;
            k=i;
        }
    }
    p=0;
    while(t[j]!=0)
    {
        atr[p]=t[j];
        j--;
        p++;
    }
    atr[p]=t[j];
    for(p=k+1;p<n+2;k++,p++)
    {
        atr[p]=t[k+1];
    }
    for(j=0;j<n+1;j++)
    {
        if(atr[j]>atr[j+1])
        {
            d[j]=atr[j]-atr[j+1];
        }
        else
        {
            d[j]=atr[j+1]-atr[j];
        }
        sum+=d[j];
    }
    printf("\naverage header time: %f",(float)sum/n);
    return 0;
}