#include <stdio.h>
struct employee{
  char name[100];
  int empid;
  float salary;
};
int main()
{
    struct employee emp;
    
    scanf("%d",&emp.empid);
    
    

    scanf("%s",emp.name);
    
   
    scanf("%f",&emp.salary);


printf("Eid:%d \n",emp.empid);
printf("EName:%s \n",emp.name);
printf("Sal:%.2f \n",emp.salary);
    return 0;
}
