#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,m,n,max=10000;
    int a[max];                  
    scanf("%d",&t);             
    for(int i=1;i<=t;i++)
    {
        scanf("%d\n%d",&m,&n);
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=1;i<=n;i++)
        {        
            for(int j=i+1;j<=n;j++)
            {
                if((a[i]+a[j])==m)
                   printf("%d %d\n",i,j);    
            }  
        } 
        
    }
    return 0;
}