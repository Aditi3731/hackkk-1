#include<stdio.h>  
    int main()    
    {    
    int n,r,sum=0,temp;    
        
    printf("status-\n");  
    printf("enter the no=");    
    scanf("%d",&n);    
    temp=n;    
    while(n>0)    
    {    
    r=n%10;    
    sum=(sum*10)+r;    
    n=n/10;    
    }    
    if(temp==sum)    
    printf("palindrome no ");    
    else    
    printf("not palindrome");   
      
    printf("\nworking");  
    }   
