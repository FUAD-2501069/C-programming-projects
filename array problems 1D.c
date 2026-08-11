//sum and average of some digits
#include<stdio.h>
int main(){
int value[]={4,7,9,2,5},i,sum=0,n;
 n=sizeof(value)/sizeof(value[0]);
for(i=0;i<n;i++){
    sum=sum+value[i];
}printf("sum=%d",sum);
float average=sum/5.0;
printf("average=%.2f",average);
}
//reverse the array elements
#include<stdio.h>
int main(){
int value[50],i,n,j;
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&value[i]);
}
for(i=n-1;i>=0;i--){

  printf("%d ",value[i]);
}
}
//Find largest,second largest,smallest number
#include<stdio.h>
int main(){
int value[100],n,i,largest,smallest;
printf("How many number are you want to input:");
scanf("%d",&n);
printf("enter the value:");
for(i=0;i<n;i++){
    scanf("%d",&value[i]);
}
largest=value[0];
for(i=1;i<n;i++){
    if(largest<value[i])
        largest=value[i];
}
printf("Largest value is:%d",largest);
}
//smallest
#include<stdio.h>
int main(){
int value[100],n,i,largest,smallest;
printf("How many number are you want to input:");
scanf("%d",&n);
printf("enter the value:");
for(i=0;i<n;i++){
    scanf("%d",&value[i]);
}
smallest=value[0];
for(i=1;i<n;i++){
    if(smallest>value[i])
        smallest=value[i];
}
printf("smallest value is:%d",smallest);
}
//second largest
#include<stdio.h>
int main(){
int value[100],n,i,largest,second;
printf("How many number are you want to input:");
scanf("%d",&n);
printf("enter the value:");
for(i=0;i<n;i++){
    scanf("%d",&value[i]);
}
largest=value[0];
second=-1;
for(i=1;i<n;i++){
    if(largest<value[i]){
        second=largest;
        largest=value[i];}
    else if(value[i]>second&&value[i]!=largest){
        second=value[i];}
}
printf("Largest value is:%d\n",largest);
printf("second largest value is:%d",second);
}
//linear search
#include<stdio.h>
int main(){
int value[61]={0,17,16,13,18,19,15,18,15,18,15,18,18,18,16,14,8,18,11,15,8,18,11,16,16,11,10,0,12,18,8,9,15,11,15,7,6,16,14,15,12,11,15,16,11,15,0,11,18,18,8,15,17,20,12,15,17,10,0,5,5},found,i,j;
printf("Your math class test result has been published.Check your result fast.\nEnter your serial(ex:roll 61 input 1,roll 120 input 60) :");

scanf("%d",&found);
for(i=0;i<61;i++){
    if(found==i){
        j=value[i];
    }
}
printf("Your result:%d",j);
}
//binary search
#include<stdio.h>
int main(){
int value[10]={2,3,4,5,7,9,10,15,67,84},found,i,mid,j,low,high;
low=0;high=9;
scanf("%d",&found);
for(i=0;i<10;i++){
  mid=(low+high)/2;
  if(value[mid]==found){
    j=1;
  }else if(value[mid]>found){
    high=mid-1;      }
    else{low=mid+1;}
}
if(j==1)
    printf("Input number is exist");
else
    printf("Input number is not exist");
}
//double number count and print
#include<stdio.h>
int main(){
int value[5]={2,5,3,2,3},i,j;
for(i=0;i<5;i++){
    for(j=i+1;j<5;j++){
        if(value[i]==value[j]){
            printf("%d ",value[i]);
//not necessary
  break;}
    }
}
}
//bubble sorting
#include<stdio.h>
int main(){
int value[6]={8,5,7,9,4,6},i,j,temp;
for(i=0;i<6;i++){
    for(j=i+1;j<6;j++){
        if(value[i]>value[j]){
            temp=value[i];
        value[i]=value[j];
        value[j]=temp;}
    }
}
for(i=0;i<6;i++){
    printf("%d",value[i]);
}
}





