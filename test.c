#include<stdio.h>

struct person
{
    char name[30];
    char address[30];
    float salary;
};
void salaryincrease(struct person[] );
void main()
{
    struct person s[2];
    int i;
    for(i=0;i<2;i++)
    {
        fflush(stdin);
        printf("Enter name: ");
        gets(s[i].name);
        printf("Enter address: ");
        gets(s[i].address);
        printf("Enter salary: ");
        scanf("%f",&s[i].salary);
    }
    printf("\nBefore Increase");
    for(i=0;i<2;i++)
    {
        printf("\nName: ");
        puts(s[i].name);
        printf("\nAddress: ");
        puts(s[i].address);
        printf("\nSalary : %f",s[i].salary);
    }
    
    salaryincrease(s);
    printf("\nAfter Increase");
    for(i=0;i<2;i++)
    {
        printf("\nName: ");
        puts(s[i].name);
        printf("\nAddress: ");
        puts(s[i].address);
        printf("\nSalary : %f",s[i].salary);
    }
}

void salaryincrease(struct person x[])
{
    int i;
    float term;
    //printf("\n");
    //puts(x[0].name);
    for(i=0;i<2;i++)
    {
        //printf("in func b. %f\n",x[i].salary);
        x[i].salary = x[i].salary + (15.0/100) * (x[i].salary);
        //printf("\nterm: %f",term);
        
    }
}