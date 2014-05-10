#include<stdio.h>
#include<string.h>

int xstrlen(char *str);

int main()
{
    char string[] = "hey there!!";
    char *p = "this is a new string!";
    
    puts(string);
    int length = xstrlen(string);
    printf("length of string is: %d \n\n", length);
    
    puts(p);
    length = xstrlen(p);
    printf("length of string is: %d \n\n", length);
    
    puts("Another string");
    length = xstrlen("Another string");
    printf("length of string is: %d \n\n", length);
    
    
    getch();
    return 0;
}


int xstrlen(char *str)
{
    int count = 0;
    while(*str != '\0')
    {
               str++;
               count++;           
    }    
    
    return count;
}
