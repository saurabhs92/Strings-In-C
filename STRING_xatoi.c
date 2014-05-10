#include<stdio.h>

int xatoi(char str[]);  // Also handles negative intergers, null strings, and strings with non numeric chars
int is_char_numeric(char ch);
int main()
{
    char str[20] = "-679151";
    int val = xatoi(str);
    printf("\nThe integer value of string %s is %d. ", str, val); 
    
    getch();
    return 0;
}


int xatoi(char str[])
{
    if(*str == NULL)
            return 0;
            
    int i = 0, sum = 0, sign = 1; //mul = 0;
    int digit;
    
    if(str[0] == '-')
    {
          sign = -1;
          i++;
    }
    
    while(str[i] != '\0')   // & not str[i++] or else i is incremented just after comparison
    {        
         digit = str[i] - '0';
         if(!is_char_numeric(str[i]))
             return 0;   
                
         sum = sum * 10 + digit;    
         i++;
    }
    return sign * sum;        
}


int is_char_numeric(char ch)
{
    return (ch <= '9' && ch >= '0')? 1 : 0;    
}



