#include <stdio.h>

#define END 49

int main() {
    int c, blanks, tabs, newlines;
    
    tabs = 0;
    newlines = 0;
    blanks = 0;
    
    while ((c = getchar()) != END) {
        if (c == '\n') {
            ++newlines;
        } else if (c == '\t') {
            ++tabs;
        } else if (c == ' ') {
            ++blanks;
        }
    }
    
    printf("I counted %d newlines, %d tabs and %d blanks.", newlines, tabs, blanks);
    return 0;
}