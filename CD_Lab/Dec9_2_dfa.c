#include <stdio.h>

int dfa() {
    char ch;
    int state = 0; 
    int accepted = 0;  
    
    printf("Enter a string:\n");
    
    while (1) {
        ch = getchar();  
        
        if (ch == '\n') 
            break;
        
        switch (state) {
            case 0:  
                if (ch == 'a') {
                    state = 1; 
                } else {
                    return 0; 
                }
                break;
            case 1: 
                if (ch == 'a' || ch == 'b') {
                    state = 1;  
                }
                break;
        }
    }
    

    if (state == 1 && ch == 'b') {
        accepted = 1;
    }
    
    return accepted;
}

int main() {
    if (dfa()) {
        printf("The string is accepted.\n");
    } else {
        printf("The string is rejected.\n");
    }
    
    return 0;
}
