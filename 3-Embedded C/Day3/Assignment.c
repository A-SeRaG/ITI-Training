// Employee struct has name and salary and phone number attributes

#include <stdio.h>
#include <string.h>

// Define Employee struct
typedef struct Employee
{
    char name[20];
    int salary;
    char phone[11];
} emp;

// Main function
int main()
{
    emp person1, person2;
    printf("Enter data of two persons\n");
    printf("name of first person:\n");
    scanf("%s", person1.name);
    printf("salary of first person:\n");
    scanf("%d", &(person1.salary));
    printf("phone number of first person:\n+2");
    scanf("%s", person1.phone);

    strcpy(person2.name, "Marwan");
    person2.salary = 9000;
    strcpy(person2.phone, "01506847642");

    printf("Data of first person is:\n");
    printf("name: %s\n", person1.name);
    printf("salary: %d\n", person1.salary);
    printf("phone: +2%s\n", person1.phone);
    printf("-----------------------------\n");
    printf("Data of second person is:\n");
    printf("name: %s\n", person2.name);
    printf("salary: %d\n", person2.salary);
    printf("phone: +2%s\n", person2.phone);
    printf("-----------------------------\n");
    return 0;
}
