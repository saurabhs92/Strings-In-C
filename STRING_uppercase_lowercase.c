#include<stdio.h>

void uppercase(char *str);
void lowercase(char *lwr);

int main()
{
    char str[] = "Convert this to uppercase!";
    char lower[] = "AND THIS TO lowercase 123!@#$_+()";
    
    uppercase(str);
    lowercase(lower);
    
 
    getch ();
    return 0;
}

void uppercase(char *str)
{
     char *p = str;
     
     while(*p != '\0')
     {
             if(*p >= 'a' && *p <= 'z')
             {
                       *p = 'A' + (*p - 'a');  
             }
             p++;        
     }
     printf("\n%s ", str);
}


void lowercase(char *lwr)
{
     char *q = lwr;
     
     while(*q != '\0')
     {
             if(*q >= 'A' && *q <= 'Z')
             {
                   *q = 'a' + (*q - 'A');
             }
             q++;
     }
     
     printf("\n%s ", lwr);     
}
