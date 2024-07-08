#include <stdio.h>
#include <cs50.h>

int main(void) {

    // system cant find path to cs50.h properly
    // shoutout to https://stackoverflow.com/questions/71507578/undefined-reference-to-get-string-compiling-cs50-code
    string answer = get_string("What s your name? ");

    // printf("hello, world\n");

    printf("hello, %s \n", answer);
}