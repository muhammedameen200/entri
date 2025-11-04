#include <stdio.h>
 int a=10;
 int *ptr = &a;
 int main(){
     printf("value of a=%d\n",a);
     printf("address of a=%p",&a);
     printf("\naddress of a variable a using pointer p and value stored pointer p=%p",ptr);
      printf("\nvalue inside the address stored in p =%p\n",&ptr );
      
 }