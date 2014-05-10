#include<stdio.h>

int xstrcmp(char *p, char *q);

int main()
{
    char str1[] = "This is the first string.";
    char str2[] = "This is second!";
    /*
    char a = 'a';
    char A = 'A';
    char null = '\0';
    */
    printf("\nString 1: %s ", str1);
    printf("\nString 2: %s ", str2);
    
    //printf("\na is %d", a);
    //printf("\nA is %d", A);
    //printf("\nnull is %d", null);
    
    int value ;
    value = xstrcmp(str1, str2);
    printf("\n\nOn comparing strings using xstrcmp value is %d.", value);

    getch();
    return 0;    
}


int xstrcmp(char *p, char *q)
{
    while(*p == *q)
    {
             p++;
             q++;
             if(*p == '\0' || *q == '\0')
                   break;                 
    }    
    return *p - *q;
}
