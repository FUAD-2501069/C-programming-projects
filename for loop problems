/*//sum of all digit of a number
#include<stdio.h>
int main(){
int n,sum=0;
scanf("%d",&n);
for(;n!=0;n=n/10){
    sum=sum+n%10;
}
printf("%d",sum);
}
//reverse number
#include<stdio.h>
int main(){
int n,rev;
scanf("%d",&n);
for(;n!=0;n=n/10){
   rev=n%10;
    printf("%d",rev);
}
}
//Verify the palindrome number
#include <stdio.h>
int main(){
    int n,rev=0,temp;
    scanf("%d",&n);
    temp=n;
    for(;n!=0;n=n/10){
        rev=rev*10+n%10;
    }
    if(temp==rev)
        printf("palindrome");
        else
            printf("not palindrome");
}
//Verify the amstrong number
#include<stdio.h>
#include<math.h>
int main(){
int i,n,r,sum=0,temp,c;
scanf("%d",&n);
temp=n;
c=n;
i=0;
for(;n!=0;n=n/10){
    i++;
}
for(;temp!=0;temp=temp/10){
  r=temp%10;
  sum=sum+pow(r,i);
}
if(sum==c)
    printf("amstrong");
else
    printf("not amstrong");
}
//factorial
#include<stdio.h>
int main(){
int n,r=1;
scanf("%d",&n);
for(;n>0;n=n-1){
    r=r*n;
}
printf("%d",r);
}
//Verify the strong number
#include<stdio.h>
int main(){
int n,temp,sum=0,r,i;
scanf("%d",&n);
temp=n;
for(;n!=0;n=n/10){
    r=n%10;

    i=1;
   for(;r>0;r=r-1){
    i=i*r;
} sum=sum+i;
}if(sum==temp)
printf("strong");
else
    printf("not strong");
}
//Verify the perfect number
#include<stdio.h>
int main(){
int n,sum=0,r,temp;
scanf("%d",&n);
temp=n;
for(r=1;r<n;r++){
    if(n%r==0){
        sum=sum+r;
    }
}if(sum==temp)
printf("perfect");
else
    printf("not perfect");
}
//Verify the prime number
#include<stdio.h>
int main(){
int n,i,t=0;
scanf("%d",&n);
if(n<=1)
    printf("not prime\n");
    else{
for(i=2;i<n;i++){
        if(n%i==0){
            t=1;
            break;}
}
if(t==1)
    printf("np");
else
    printf("p");}
}
//2 to n prime
#include<stdio.h>
int main(){
int i,j,n,r;
scanf("%d",&n);
for(i=2;i<=n;i++){
    r=1;
  for(j=2;j*j<=i;j++){
        if(i%j==0){
            r=0;
            break;}
}
 if(r ==1)
    printf("prime=%d\n",i);
else
    printf("not prime=%d\n",i);
}
}
//fibonacci series
#include<stdio.h>
int main(){
    int i,n,j=0,b=1,next;
    scanf("%d",&n);
    if(n<=0){
        printf("invalid input");
        return 0;}
    if(n==1){
       printf("0");}
       else{
        printf("%d %d",j,b);
    for(i=1;i<n-1;i++){
       next=j+b;
        printf(" %d",next);
        j=b;
        b=next;
    }
       }
}
*/
//sum of 3,7,13,21,31,.....series
#include<stdio.h>
int main(){
    int n,sum=3,r=3,i;
printf("Given series:3,7,13,21,31,...");
printf("This program give you  the partial sum  of n th series.Now ,input the value of n:");
scanf("%d",&n);
for(i=2;i<=n;i++){
    sum=sum+2*i;
    r=r+sum;
}
printf("Sum of until %d th series:%d",n,r);
}



