#include<stdio.h>

int is_linient_pallindrome(char *str);
int is_punctuation(char *ch);
int char_compare(char *a, char *b);



int main()
{
    char str[] = "Madam I'm Adam";
    puts(str);
    
    if(is_linient_pallindrome(str))
               printf("Palindrome");
    else
               printf("Not pallindrome");
    
    
                                   
    
    getch();
    return 0;    
}


int is_linient_pallindrome(char *str)
{
    char *begin = str, *end;
    int len = 0, lcount = 0, rcount;
    
    while(*begin != '\0')
    {
                begin++; 
                len++;
    }
    begin = str;
    rcount = len;
    end = str + len - 1;
    
    while(lcount < rcount)
    {
                 if(!is_punctuation(begin) && !is_punctuation(end))
                 {
                                           if(!char_compare(begin, end))
                                                     return 0;
                                           
                                           begin++;
                                           lcount++;
                                           end--;
                                           rcount--;
                                                                   
                 }
                                          
                 if(is_punctuation(begin))
                 {
                                          begin++;
                                          lcount++;
                 
                 }
                 if(is_punctuation(end))
                 {
                                        end--;
                                        rcount--;
                                        
                 }
    }
       
    return 1;
        
}

int is_punctuation(char *ch)
{

         return (*ch == '!' || *ch == '\'' || *ch == ',' || * ch == '.' || *ch == ' ' || *ch == '\"');
        
}       

int char_compare(char *a, char *b)
{
     return (*a == *b || *a == ('a' + (*b - 'A')) || *a == ('A' + (*b - 'a')));
    
}
