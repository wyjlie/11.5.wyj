#include<stdio.h>

int main(void)
{
    float i,m,t;
    printf("Enter m,t(m>=o)(t>=0):\n");
    scanf("%f%f",&m,&t);
    if(m<=3)
    {
          i=10+(t/5)*2;}
    else{
    if(m<=10){
          i=10+(t-3)*2;}
    else{
          i=10+(t-3)*2+(t-10)*3;}}
    printf("i is %.1|f\n",i);
    return 0;
        
}