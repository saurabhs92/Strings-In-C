#include<stdio.h>
#include<string.h>

void reverse(char *str);
//char *reverse(char *str); // don't use this.. modify str pointer and use it in main

int main()
{
    char str[] = "Saurabh";

    printf("\nString is '%s' and its length using strlen(str) is: %d", str, strlen(str)); // 4
    
    
    
    reverse(str);
    printf("\nThe reverse string is: %s ", str);
    
    getch();
    return 0;
}


void reverse(char *str)
{
     char temp, *begin, *end;
     int len = strlen(str), counts = 0;
     
     begin = str;
     end = str + len - 1;
     
     while(counts <= len / 2)
     {
                   temp = *begin;
                   *begin = *end;
                   *end = temp;  
                   
                   begin++;
                   end--;
                   counts++;
     }
     
}
