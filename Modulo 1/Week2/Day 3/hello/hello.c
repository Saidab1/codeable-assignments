#include <cs50.h>
#include <stdio.h>


int main(void)
{
    string username = get_string("What's your name?\n");
    printf("hello, %s\n",username);
}
