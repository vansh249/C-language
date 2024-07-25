//Structure in C Language
//Data Types: 
//1. Primitive Data Types
//  int, char, float, double
//2. Non Primitive Data Types
// User defined data types
// (a) struct
// (b) union
// (c) enum
#include<stdio.h>
#include<string.h>
//1. How to create a data type using struct?
//2. How to declare structure variable?
//3. How to initialize structure member variables during declaration?
//4. How to initialize structure member variables after declaration?
//5. How to take input from the user?
//6. How to create an array of structure variables?
//7. Function returning structure
//8. Function call by passing structure
//9. Structure Pointer
struct Employee
{
    int empid;
    char name[20];
    float salary;
};

void f1()
{
    struct Employee emp[5];
}
struct Employee input()
{
    struct Employee e1;
    printf("Enter the Employee ID, Name and Salary : ");
    scanf("%d",&e1.empid);
    fflush(stdin);
    fgets(e1.name,20,stdin);
    e1.name[strlen(e1.name)-1]='\0';
    scanf("%f",&e1.salary);
    printf("Employee ID : %d Name : %s and Salary : %f",e1.empid,e1.name,e1.salary);
    return e1;
}
void display(struct Employee e)
{
    printf("\n%d %s %f",e.empid,e.name,e.salary);
}
int main()
{
    int x;
    struct Employee e1={100,"Ravi",20000 },e2,e3;
    e2.empid=101;
    strcpy(e2.name,"Arun");
    e2.salary=30000;
    e3=input();
    display(e1);
    display(e2);
    display(e3);
    
}