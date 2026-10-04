//Printing memory address and value 
#include<stdio.h>
int main(){
int q=10;
int *p=&q;
printf("%p\n",&q);
printf("%p\n",p);
printf("%d",*p);
return 0;
}

//Reassigning pointer to different variables
#include<stdio.h>
int main(){
int x=10,y=20;
int *ptr;
ptr=&x;
printf("%d\n",*ptr);
ptr=&y;
printf("%d\n",*ptr);
return 0;
}

//Adding two numbers 
#include<stdio.h>
int main(){
int x=10,y=20;
int *ptr1=&x,*ptr2=&y;
int sum=*ptr1+*ptr2;
printf("%d",sum);
return 0;
}

//Swapping two numbers 
#include<stdio.h>
int main(){
int x=10,y=20,temp;
int *ptr1=&x,*ptr2=&y;
printf("Before swapping=%d\t%d\n",x,y);
temp=*ptr1;
*ptr1=*ptr2;
*ptr2=temp;
printf("After swapping=%d\t%d\n",x,y);
return 0;
}

//swapping two numbers by using function
#include<stdio.h>
void swapping(int *ptr1,int *ptr2){
int temp=*ptr1;
*ptr1=*ptr2;
*ptr2=temp;
}
int main(){
int x=10,y=20;
printf("Before:%d\t%d\n",x,y);
swapping(&x,&y);
printf("After: %d\t%d\n",x,y);
return 0;
}

//Print and determine the sum of the values of array
#include<stdio.h>
int main(){
int value[5]={1,2,3,4,5},sum=0;
int *ptr=&value[0];
for(int i=0;i<5;i++){
 printf("%d ",*ptr);
 sum=sum+*ptr;
 ptr++;
}
printf("\n%d",sum);
return 0;
}

//Declaring an array of pointers to integers
#include <stdio.h>
 int main() {
int var1 = 1;
int var2 = 2;
int var3 = 3;
int *ptr[3];
ptr[0] = &var1;
ptr[1] = &var2;
ptr[2] = &var3;
for (int i = 0; i < 3; i++) {
        printf("Value at ptr[%d] = %d\n", i, *ptr[i]);
 }
 return 0;
}

