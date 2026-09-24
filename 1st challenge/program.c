//A student has marks for five subjects. Write a C program to read the marks of all five subjects and calculatethe total marks, average marks, and percentage. Display all three results clearly.
#include<stdio.h>
int main(){
int marks;
float marks1,marks2,marks3,marks4,marks5;
float total,average,percentage;
printf("enter the marks for 5marks:");
scanf("%f %f %f %f %f",&marks1,&marks2,&marks3,&marks4,&marks5);
total =(marks1+marks2+marks3+marks4+marks5);
average=total/5;
percentage=(total/500)*100;
printf("total marks =%f\n",total);
printf("average marks =%f\n",average);
printf("percentage =%f\n",percentage);
return 0;
}
