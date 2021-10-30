// Assume that float takes 4 bytes, predict the output of the following program.

#include<stdio.h>
int main()
{
    float arr[5]= {13.5, 10.0, 13.5, 90.5, 0.5};
    float *ptr1=&arr[0];
    float *ptr2=ptr1 + 3;
    printf("%f",*ptr2);
    printf(" %d",ptr2-ptr1);
    return 0;

}