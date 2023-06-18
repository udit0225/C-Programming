#include<stdio.h>
void main (){
    
    int a ;
    printf("enter a number for its table:   ");
    scanf("%d",&a);
    
    for(int i=1; i<=10; i++)
  {  int z;
    z=i*a;
    printf("%d \t",z);
  }
}
