#include <stdio.h>
int main(){
    int r, a, b, c ;
    scanf("%d", &r);
    a = r % 3 ;
    b = r % 5 ;
    c = r % 7 ;
    if (a>0 && b>0 && c>0)
    {
        printf("0");
    }
    else if (a==0)
    {
        printf("1");
    }
    else if (b==0)
    {
        printf("2");
    }
    else if (a==0&&b==0)
    {
        printf("3");
    }
    else if (c==0)
    {
        printf("4");
    }
    else if (c==0&&a==0)
    {
        printf("5");
    }
    else if (c==0&&b==0)
    {
        printf("6");
    }
    else 
    {
        printf("7");
    }
    
    return 0 ;
}