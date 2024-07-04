// main.c

#include <stdio.h>
#include "hello_world.h"

int main() {
    int count;

    // Asking user for the number of times to print "Hello World"
    printf("Enter the number of times to print 'Hello World': ");
    scanf("%d", &count);

    // Calling the hello_world function
    hello_world(count);

    return 0;
}

