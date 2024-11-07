//Employee structure
 /*
Name:Benard kimani
Reg no:CT101/G/23293/24
*/
 #include <stdio.h>
#include <string.h>

struct employee {
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
}e1;

int main() {
    
    struct employee e1 = {"John Doe", 12345, "Human Resources", 55000.50, "john.doe@company.com"};
    
    
    printf("Name: %s\n", e1.name);
    printf("ID: %d\n", e1.id);
    printf("Department: %s\n", e1.department);
    printf("Salary: %.2f\n", e1.salary);
    printf("Email: %s\n", e1.email);
    
    return 0;
}