#include<stdio.h>

void xstrcpy(char *str1, char *str2);

int main()
{
        char p[30] = "A relatively long string...";
        char *str = "Copy this!";
        
        //xstrcpy(p, str);
        printf("\n%s", p);
        printf("\n%s", str);
        
        
        xstrcpy(p, str);
        printf("\n\nAfter copying second string to first\n\nFirst string: %s", p);
        printf("\nSecond string: %s\n", str);
        
        getch();
        return 0;
}

void xstrcpy(char *str1, char *str2)
{
     while(*str2 != '\0')
     {
           *str1 = *str2;
           str1++;
           str2++;                      
     }
     
     *str1 = '\0'; 
}
