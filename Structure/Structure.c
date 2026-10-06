//Using Structures to Store and Display Person Information
#include<stdio.h>
struct person{
int age;
float salary;
};
int main(){
struct person Messi,Hamza;
printf("Data for Messi\nAge:");
scanf("%d",&Messi.age);
printf("Salary:");
scanf("%f",&Messi.salary);
printf("Data for Hamza\nAge:");
scanf("%d",&Hamza.age);
printf("Salary:");
scanf("%f",&Hamza.salary);
printf("\n");
printf("\n");
printf("#Messi\n");
printf("Age:%d years\n",Messi.age);
printf("Salary:%.2f dollars\n",Messi.salary);
printf("#Hamza:\n");
printf("Age:%d years\n",Hamza.age);
printf("Salary:%.2f dollars\n",Hamza.salary);
return 0;
}

//Initializing and Comparing Structure Variables
#include<stdio.h>
struct person{
int age;
float salary;
};
int main(){
struct person Messi={23,33333},Hamza={12,234567};
printf("#Messi\n");
printf("Age:%d years\n",Messi.age);
printf("Salary:%.2f dollars\n",Messi.salary);
printf("\n");
printf("#Hamza:\n");
printf("Age:%d years\n",Hamza.age);
printf("Salary:%.2f dollars\n",Hamza.salary);
printf("\n");
if(Messi.age==Hamza.age&&Messi.salary==Hamza.salary)
    printf("They are same in age and salary.");
else printf("They are not same in age and salary.");
return 0;
}

//Input and Display of Multiple Records Using Structure Array
#include<stdio.h>
struct Person{
int age;
float salary;
};
int main(){
struct Person person[4];
for(int i=0;i<4;i++){
    printf("*Person %d\n",i+1);
    printf("Age:");
    scanf("%d",&person[i].age);
    printf("Salary:");
    scanf("%f",&person[i].salary);
}
printf("\n");
printf("\n");
for(int i=0;i<4;i++){
    printf("#Person %d\n",i+1);
    printf("Age:");
   printf("%d years\n",person[i].age);
    printf("Salary:");
    printf("%.2f dollars\n",person[i].salary);
    printf("\n");
}
return 0;
}

//Using a Function to Display Structure Data
#include<stdio.h>
struct Person{
int age;
float salary;
};
void display(struct Person man){
printf("Age:%d years\n",man.age);
printf("Salary:%.2f dollars\n",man.salary);
}
int main(){
struct Person person1={23,3214.56};
printf("#Person 1\n");
display(person1);
return 0;
}
