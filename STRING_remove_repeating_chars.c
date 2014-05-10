#include<stdio.h>
#define NO_OF_CHARS 256

void removeRepeatingChars(char str[]);
int *fillCountsArray(char *str, int *counts);

int main()
{
    char str[] = "Remove all repeating chars from this string!!!";
     printf("\nInput string is '%s'.", str);
    removeRepeatingChars(str);
    
    getch();
    return 0;    
}


void removeRepeatingChars(char str[])
{
     int curi = 0, resi = 0, temp; // current and resutant string index
     int *counts = (int *)calloc(sizeof(int), NO_OF_CHARS);
     counts = fillCountsArray(str, counts);
     
     /*
     //Debug: print counts array
     int i;
     for(i = 0; i < NO_OF_CHARS; i++)
     {
           printf("%d  ", counts[i]);      
     }
     */
     
     while(*(str + curi))
     {
                 temp = counts[*(str + curi)];
                 if(temp > 0)
                 {
                         counts[*(str + curi)] = 0;
                         *(str + resi) = *(str + curi);
                         resi++;       
                 }
                 curi++;     
     }
     *(str + resi) = '\0';
     
     printf("\nAfter removing repeating chars is '%s'.", str);
     
     free(counts);
}


int *fillCountsArray(char *str, int *counts)
{
     int i = 0;
     while(*(str + i))
     {
              counts[*(str + i)]++;
              i++;             
     }
     return counts;    
}



