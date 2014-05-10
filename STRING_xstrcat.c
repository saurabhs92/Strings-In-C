#include<stdio.h>

void xstrcat(char *p, char *q);

int main()
{
    char str1[60] = "This is the first string";
    char str2[] = " and this is the second string.";
    
    printf("%s\n", str1);
    printf("%s\n", str2);
    
    
    xstrcat(str1, str2);
    
    printf("\nAfter concatination: \n%s\n", str1);
    
    
    getch();
    return 0;    
}


void xstrcat(char *p, char *q)
{
    while(*p != '\0')
             p++;
             
    while(*q != '\0')
    {
             *p = *q;
             p++;
             q++;         
    
    }
    *p = '\0';
            
}
