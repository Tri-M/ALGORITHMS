#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
 
int main()
{
    char s[1000];
    gets(s);
    int len = strlen(s);
    int width, height;
    int lower = floor(sqrt(len)), high = ceil(sqrt(len));
    int i, j;
    bool flag = false;
    for(i = lower; i<=high; i++){
        for(j = i; j<=high; j++){
            
            if(i*j>=len)
             {
                flag = true;
                break;  
            }
        }
        if(flag)    //check flag variable condition
         break;
    }
    width = j; height = i;
    int index = 0;
    for(i = 0; i<width; i++)
    {
        for(j = 0; j<height; j++)
        {
            index = j*width +i;
            if(index<len)
             putchar(s[index]);
        }
        putchar(' ');
    }
}