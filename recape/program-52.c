// string copy in c program....

#include <stdio.h>
#include <string.h>

int main() {
    char name1[] = "Habibor";
    char name2[] = "Habibor Rahaman";

    strcpy(name1, name2);

    puts(name1);


return 0;
}