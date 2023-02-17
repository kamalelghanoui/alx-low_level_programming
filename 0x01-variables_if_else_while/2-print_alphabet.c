#include <stdlib.h>
#include <stdio.h>
int main() {
    char current_letter = 'a';
    while (current_letter <= 'z') {
        putchar(current_letter);
        current_letter++;
    }
    putchar('\n');
    return 0;
}
