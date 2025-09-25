#include<stdlib.h>
#include<stdio.h>

int fibo(int x)
{
    if(x==0)
    {  
        return 0;
    }
    else if(x==1)
    {
        return 1;
    }
    else
    {
        return fibo(x-1)+fibo(x-2);
    }
}

int main(){
    printf("%d",fibo(3));

    return 0;
}