//value input, print the matrix,sum,average,max,min,second largest
#include<stdio.h>
int main(){
int matrix[3][3],i,j,sum=0,largest,smallest;

printf("input the element of matrix:");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
            scanf("%d",&matrix[i][j]);}}
    printf("matrix:\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf(" %d ",matrix[i][j]);
    }printf("\n");}
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        sum=sum+matrix[i][j];
    }}
    printf("sum=%d\n",sum);
    float average=sum/9.0;
    printf("average=%0.2f\n",average);
    largest=matrix[0][0];
    int second=-1;
for(i=0;i<3;i++){
        for(j=0;j<3;j++){
    if(largest<matrix[i][j]){
            second=largest;
        largest=matrix[i][j];}
        else if(matrix[i][j]>second&&matrix[i][j]!=largest){
        second=matrix[i][j];}}
}
printf("Largest value is:%d\n",largest);
printf("second largest=%d\n",second);
smallest=matrix[0][0];
for(i=0;i<3;i++){
        for(j=0;j<3;j++){
    if(smallest>matrix[i][j])
        smallest=matrix[i][j];}
}
printf("smallest value is:%d",smallest);
return 0;
    }

//character input and find the character
#include<stdio.h>
int main(){
int i,j,r,c,u;
printf("input matrix row and column:");
scanf("%d%d",&r,&c);
char matrix[r][c];
printf("input character:");
for(i=0;i<r;i++){
        for(j=0;j<c;j++){
          scanf(" %c",&matrix[i][j]);}}

printf("matrix:\n");
    for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%c ",matrix[i][j]);
    }printf("\n");}
    char found='a';
    for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        if(found==matrix[i][j])
            u=1;}}
            if(u==1)
                printf("found");
            else
                printf("not found");
    return 0;
}

//printing upper or lower part of a matrix
#include<stdio.h>
int main(){
int matrix[3][3],i,j;
printf("input the element of matrix:");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
            scanf("%d",&matrix[i][j]);}}
    printf("matrix:\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
            if(j<=i)//(i<=j)for upper part
        printf("%-2d",matrix[i][j]);
        //else or space printing is not necessary
    else
        printf("  ");
    }printf("\n");}
    return 0;
}

//sum of primary and secondary diagonal elements
#include<stdio.h>
int main(){
int matrix[3][3],i,j,sum=0,sum1=0;
printf("input the element of matrix:");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
            scanf("%d",&matrix[i][j]);}}
    printf("matrix:\n");
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf(" %d ",matrix[i][j]);
    }printf("\n");}
    printf("sum of primary diagonal:");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
           if(i==j )
            sum=sum+matrix[i][j];}}
            printf("%d\n",sum);
            printf("sum of secondary diagonal:");
            for(i=0;i<3;i++){
    for(j=0;j<3;j++){
           if(3-i-1==j )
            sum1=sum1+matrix[i][j];}}
            printf("%d",sum1);
    return 0;
            }

//sparse matrix verify and print the non zero element position
#include<stdio.h>
int main(){
int matrix[3][3],i,j,zero=0,non_zero=0;
printf("input the element of matrix:");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
            scanf("%d",&matrix[i][j]);}}
    printf("matrix:\n");
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf(" %d ",matrix[i][j]);
    }printf("\n");}
   for(i=0;i<3;i++){
    for(j=0;j<3;j++){
       if(matrix[i][j]==0){
        zero++;}
       // printf("%d%d\n",i,j);if you want to print zero elements position
       else{
        non_zero++;
        printf("%d%d\n",i,j);}
    }}
    if(zero>non_zero)
   printf("it is a sparse matrix");
   else
    printf("it is not a sparse matrix");
    return 0;
}

//sum of two matrix
#include<stdio.h>
int main(){
int matrix1[3][3],i,j,matrix2[3][3],sum_matrix[3][3];
printf("input the element of matrix1:");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
            scanf("%d",&matrix1[i][j]);}}
printf("input the element of matrix2:");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
            scanf("%d",&matrix2[i][j]);}}
            for(i=0;i<3;i++){
          for(j=0;j<3;j++){
               sum_matrix[i][j]=matrix1[i][j]+matrix2[i][j] ;
            }}
   for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%-2d ",sum_matrix[i][j]);
    }printf("\n");}
    return 0;
}

//transpose matrix
#include<stdio.h>
int main(){
int matrix[3][3],i,j,transpose[3][3];
printf("input the element of matrix:");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
            scanf("%d",&matrix[i][j]);}}
 for(i=0;i<3;i++){
    for(j=0;j<3;j++){
            transpose[i][j]=matrix[j][i];
          }}
    printf("real matrix:\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%-2d",matrix[i][j]);
    }printf("\n");}
    printf("transpose matrix:\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%-2d",transpose[i][j]);
    }printf("\n");}
    return 0;
}
