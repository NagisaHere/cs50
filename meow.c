#include <stdio.h>
#include <cs50.h>

// make a function called woof

/*
Parameters:
n: how many times you want Woof to be printed
*/
void woof(int n) {
    for (int j = 0; j < n; j++) {
        printf("Woof\n");
    }
}

int main(void) {
    int i = 0;

    while (i < 3) {
        printf("Meow\n");
        i++;
    }

    // for loop version
    woof(4);
}

