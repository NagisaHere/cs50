#include <cs50.h>
#include <stdio.h>

int main(void) {
    char c = get_char("Do you agree? ");
    
    if (c == 'y' || c == 'Y') {
        printf("Agreed\n");
    }
    else if (c == 'n' || c == 'N') {
        printf("Disagreed\n");
    }
    else {
        printf("Invalid Character\n");
    };

    /* switch (c) {
        case 'y':
            printf("Agreed\n");
            break;
        case 'n':
            printf("Disagreed\n");
            break;
        default:
            printf("Invalid character\n");
    }; */
}