#include <stdio.h>


//variable delcarations
int useroption = 0;

//c links
void eval(int option);
    int main() {
    printf("Hello, World!\n------------\n1 - Hello, world!\n2 - Encoder\n3 - Decoder\n4 - Secret Options\n");
    scanf("%d", &useroption);
    eval(useroption);
    return 0;
}