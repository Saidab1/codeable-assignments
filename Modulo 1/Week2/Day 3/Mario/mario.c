#include <cs50.h>
#include <stdio.h>

void draw(int n, string symbol);


int main(void)
{ 
    int height;
    
    do 
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    for(int i = 0; i < height; i++) 
    {
        draw(height - i - 1," " );
        draw(i + 1, "#");
        printf("\n");
    }
}

void draw(int n, string symbol) 
{
    for (int i = 0; i < n; i++)
    {
        printf("%s",symbol);
    }
}