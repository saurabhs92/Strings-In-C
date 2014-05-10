/*   Reverse the words in a string   
     eg. "This is the input string" ==> "string input the is This"
     
     Steps    
     1)    gnirts tupni eht si sihT
     2)    string input the is This
*/

#include<stdio.h>
#define OUT 0
#define IN 1

void reverseWords(char str[]);

int main()
{
    char str[] = "words to be reversed in this string!";
    printf("Input string: %s", str);
    reverseWords(str);
    
    
    getch();
    return 0;    
}


void reverseWords(char str[])
{
    strrev(str);
    printf("\nAfter reversing: %s", str);
    
    char res_word[20], result[50] = "";
    int i = 0, state = OUT;
    int j = 0;
    while(str[i] != '\0')
    {
                 
                 if(str[i] == ' ' || str[i + 1] == '\0')
                 {
                           if(str[i] == ' ')
                           {
                       res_word[j] = '\0';
                       strrev(res_word);
                       strcat(result, res_word);
                       strcat(result, " ");
                       
                                
                       state = OUT;
                       i++; 
                            }else
                            {
                                 res_word[j++] = str[i++];
                                 res_word[j] = '\0';
                                   strrev(res_word);
                                   strcat(result, res_word);
                                   result[i] = '\0';
                                           
                       
                                      
                            }         
                 }else if(state == OUT)    //and not state = OUT  !!! 
                 {
                       j = 0;
                       res_word[j++] = str[i++];
                       state = IN;      
                 }else // inside a word
                 {
                      res_word[j++] = str[i++];
                      
                 }
                          
    } 
    
    result[i] = '\0';
    
    printf("\n\nAfter reverse operation: %s", result);
}
