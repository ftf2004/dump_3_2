#include <stdio.h>

int main() {
    int input[100];
    int i = 0;

    printf("Enter a number: ");
    
    while (scanf("%c", &input[i]) && input[i] != '\n' && i < 99) {
        i++;
    }
    input[i] = '\0';  

    for (int j = 0; j < i; j++) {
        if (input[j] == '1' && input[j+1] == '0' && input[j+2] == '1') {
            printf("The substring '101' is present in the input.\n");
            return 0;
        }
    }

    printf("The substring '101' is not present in the input.\n");
    return 0;
}
