//sum of two digits
#include<stdio.h>
int sum(int a,int b){
   int result=a+b;
    return result;
}
int main(){
int a,b;
scanf("%d%d",&a,&b);
printf("%d",sum(a,b));
return 0;
}

//determine even or odd
#include<stdio.h>
void t(int j){
scanf("%d",&j);
if(j%2==0)
   printf("even");
else
    printf("odd");
}
int main(){
 int j;
t(j);
return 0;
}

//input two number and found large one
#include<stdio.h>
void maximum(int c,int f){
if(c>f)
    printf("%d",c);
else printf("%d",f);
}
int main(){
int a,b;
scanf("%d%d",&a,&b);
printf("maximum number is:");
maximum(a,b);
return 0;
}

//square of a number
#include<stdio.h>
int square(int a){
return a*a;
}
int main(){
int a;
scanf("%d",&a);
square(a);
printf("%d",square(a));
return 0;
}

//Determine factorial of a number
#include<stdio.h>
int factorial(int a){
    int j=1;
for(int i=1;i<=a;i++){
    j=j*i;
}return j;
}
int main(){
int n;
scanf("%d",&n);
factorial(n);
printf("%d",factorial(n));
return 0;
}

//Recursive Factorial Code
#include<stdio.h>
int factorial(int a){
if(a<=1)
    return 1;
else return a*factorial(a-1);
}
int main(){
int n;
scanf("%d",&n);
factorial(n);
printf("%d",factorial(n));
return 0;
}

//fibonacci series
#include<stdio.h>
int fibonacci(int a,int b,int n){
printf("0 1");
for(int i=2;i<n;i++){
  int c=a+b;
    printf(" %d",c);
    a=b;
    b=c;
}}
int main(){
int a=0,b=1,n;
scanf("%d",&n);
printf("Fibonacci series:");
fibonacci(a,b,n);
return 0;
}

//Recursive Fibonacci Code
#include<stdio.h>
int fibonacci(int n){
if(n==0)
    return 0;
else if(n==1)
    return 1;
else return fibonacci(n - 1)+fibonacci(n - 2);
}
int main(){
int a=0,b=1,c,n;
scanf("%d",&n);
printf("Fibonacci series:");
for(int i=0;i<n;i++){
    printf(" %d",fibonacci(i));
}
return 0;
}

//determine a number is prime.
#include<stdio.h>
int prime(int n,int t){
if(n<=1)
    return t=1;
    else {
for(int i=2;i<n;i++){
        if(n%i==0)
           t=1;
}return t;}
}
int main(){
int n,t=1;
scanf("%d",&n);
if(t==prime(n,t))
    printf("np");
else
    printf("p");
    return 0;
}

//find the Greatest Common Divisor (GCD) of two numbers
#include<stdio.h>
int gcd(int a,int b){
while(b!=0){
 int rem=a%b;
 a=b;
 b=rem;
}return a;
}
int main(){
int a,b;
scanf("%d%d",&a,&b);
printf("gcd=%d",gcd(a,b));
return 0;
}

//1D Array Operations(Display,Sum and search)
#include<stdio.h>
int value(int arr[10]){

for(int i=0;i<6;i++){
    printf("%d",arr[i]);}
}
int sum(int arr[10]){
int sum=0;
for(int i=0;i<6;i++){
    sum=sum+arr[i];
    }return sum;
}
void search(int arr[10]){
    int found,j=0;
scanf("%d",&found);
for(int i=0;i<6;i++){
    if(found==arr[i])
       j=1;
    }if(j==1)printf("found");
       else printf("not found");
}
int main(){
int arr[10],n;

for(int i=0;i<6;i++){
    scanf("%d",&arr[i]);
}
value(arr);
printf("\n%d\n",sum(arr));
search(arr);
return 0;
}

//2D Array operations using user-defined fonction
#include<stdio.h>
void display(int arr[3][3]){
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d",arr[i][j]);
    }
    printf("\n");
}
}
void sum(int arr[3][3]){
   int sum=0;
for(int i=0;i<3;i++){
  
    for(int j=0;j<3;j++){
      sum=sum+arr[i][j];
    }}
    printf("%d",sum);
}
int main(){
int arr[3][3];
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&arr[i][j]);
    }}
display(arr);
sum(arr);
return 0;
}

