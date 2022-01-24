#include <stdio.h>

#define END 49

int main() {
    int c;
    
    while ((c = getchar()) != END) {
        if (c == '\t')
            printf("\\t\n");
        if (c == '\b')
            printf("\\b\n");
        if (c == '\\')
            printf("\\\\\n");
    }
    
    return 0;
}