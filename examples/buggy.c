#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Employee {
    char *name;
    int age;
};

struct Employee create_employee(const char *name, int age) {
    struct Employee e;
    e.name = (char*) malloc(strlen(name));
    strcpy(e.name, name);
    e.age = age;
    return e;
}

int main() {
    struct Employee employee = create_employee("Marco", 22);
    printf("%s %d\n", employee.name, employee.age);

    employee = create_employee("Giovanni", 33);
    printf("%s %d\n", employee.name, employee.age);
    free(employee.name);

    return 0;
}
