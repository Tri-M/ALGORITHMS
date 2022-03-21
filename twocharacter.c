#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int calculate(char one,char two,char *in){
    int length=strlen(in);
    int a;
    int flag=0;
    int count=0;
    for(a=0;a<length;++a){
        if(in[a]==one || in[a]==two)
        {
            count+=1;
            if(in[a]==one)
            {
                if(flag==-1)
                {
                    return 0;
                }
                else{
                    flag=-1;
                }
            }
            if(in[a]==two)
            {
                if(flag==1)
                {
                    return 0;
                }
                else{
                    flag=1;
                }
            }
        }
    }
    
    return count;
}
int main() {
    int n,a;
    scanf("%d",&n);
    char in[1000];
    scanf("%s",in);
    char list[26];
    for(a=0;a<26;++a){
        list[a]=0;
    }
    int length=strlen(in);
    for(a=0;a<length;++a){
        list[in[a]-'a']=1;
    }
    char one,two;
    int b,value,max;
    for(a=0;a<26;++a){
        if(list[a]==1){
            for(b=a+1;b<26;++b){
               if(list[b]==1){
                   one = a + 'a';
                   two = b + 'a';
                   value=calculate(one,two,in);
                   if(value>max){
                       max=value;
                   }
               } 
            }
            
        }
        
    }
    printf("%d",max);
      
    return 0;
}