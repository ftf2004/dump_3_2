#include <stdio.h>
#include <string.h>

void removeLeftFactoring(char prod[]) {
    char alpha[10], beta1[10], beta2[10];
    int i = 3, j = 3, k = 0;

    // Finding the common prefix (alpha)
    while (prod[j] != '/' && prod[j] != '\0') j++;
    j++; // Move past '/'
    while (prod[i] == prod[j]) {
        alpha[k++] = prod[i++];
        j++;
    }
    alpha[k] = '\0';

    // Extracting the rest after the common prefix
    k = 0;
    while (prod[i] != '/' && prod[i] != '\0') {
        beta1[k++] = prod[i++];
    }
    beta1[k] = '\0';

    k = 0;
    while (prod[j] != '\0') {
        beta2[k++] = prod[j++];
    }
    beta2[k] = '\0';

    // Printing the new productions
    printf("\n%c->%s%c'\n", prod[0], alpha, prod[0]);
    printf("%c'->%s/%s\n", prod[0], beta1, beta2);
}

int main() {
    char prod[20];
    printf("Enter the production (e.g., A->abc/abd): ");
    scanf("%s", prod);

    if (prod[1] == '-' && prod[2] == '>') {
        removeLeftFactoring(prod);
    } else {
        printf("Invalid production format.\n");
    }
    return 0;
}
