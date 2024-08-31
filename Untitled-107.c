#include<stdio.h>
void main()
{
 int i=100;
 {
    int i=i+100;
    printf("%d\n",i);
 }
printf("%d",i);
}