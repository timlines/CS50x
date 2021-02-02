#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Ask their name and then say hello.
    string name = get_string("Hello, What is your name?\n");
    
    printf("Hello, %s. Nice to meet you.\n", name);
}
