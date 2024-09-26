#include <stdio.h>

int main() {
    int n = 5;
    
    for (int i = 0; i < n; i++) {
        for (char ch = 'A' + i; ch >= 'A'; ch--) {
            printf("%c ", ch);
        }
        printf("\n");
    }

    return 0;
}
