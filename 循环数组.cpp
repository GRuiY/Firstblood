#include<stdio.h>
int main()
{
    int a[100];
    int i,j,n,m,temp=0;
    scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}    
    scanf("%d",&m);
    for(j=0;j<(m%n);j++) //移动次数 
    {
        temp=a[n-1];   //保存最后一位数 
        for(i=n-1;i>=0;i--)     
        {       
            a[i]=a[i-1];    //向后移动 
            if(i==0)
            {
                a[i]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
 
        printf("%d ",a[i]);
        
    }
    return 0;
}
