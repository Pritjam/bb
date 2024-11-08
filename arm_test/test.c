#include <stdio.h>
extern void catstr(char* first, char* second);

int main() {
    char hello[100] = "hello";
    char world[] = "world!";
    catstr(hello, world);
    printf("The resultant string: '%s'\n", hello);
}