#include <stdio.h>
int main()
{
long int n;
scanf("%ld",&n);
long int r[n],candies[n],i,sum=0;
candies[0]=1;
scanf("%ld",&r[i]);
for(i=1;i<n;i++)
{
scanf("%ld",&r[i]);
if(r[i]> r[i-1])
candies[i] = candies[i-1]+1;
else
candies[i] = 1;
}
sum=candies[n-1];
for(i=n-2;i>=0;i--)
{
if(r[i]>r[i+1] && candies[i] <= candies[i+1])
candies[i] = candies[i+1]+1;
sum=sum+candies[i];
}
printf("%ld",sum);    

}