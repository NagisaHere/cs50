#include <stdio.h>
#include <cs50.h>

int main (void) {
    int x = get_int("What is the first number? ");
    int y = get_int("What is the second number? ");

    // do one via if statements, and another through switch cases
    // okay no switch cases may be difficult lmao

    string ans = "";

    if (x > y) {
        ans = "x is greater than y";
    }
    else if (x < y) {
        ans = "y is greater than x";
    }
    else {
        ans = "x is equal to y";
    }


    printf("%s\n", ans);
}