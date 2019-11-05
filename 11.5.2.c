#include<stdio.h>

int main(void)
{
    int i;
    printf("Enter i:\n" );
    scanf("%d",&i);
    if(i<60){
        printf("E\n");
    }
    else if(60<=i<70){
        printf("D\n");
    }
    else if(70<=i<80){
        printf("C\n");
    }
    else if(80<=i<90){
        printf("B\n");
    }   
    else {printf("A\n");
        }
    return 0;
}