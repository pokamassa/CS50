#include <stdio.h>
// header for get_strind and string
#include <cs50.h>

int main(void)
{
    string name = get_string("What's your name?\n");
    printf("Hello, %s\n", name);
}
