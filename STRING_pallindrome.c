#include<stdio.h>

int pallindrome_string(char str[], int len);

int main()
{
      char str[] = "iamai";
      
      int size = sizeof(str) / sizeof(char);
      int len = strlen(str);
      //printf("\n sizeof(str) gives: %d\n", size);   //Notice the difference => 6
      //printf("\n strlen(str) gives: %d\n", len);    // between the two      => 5
      
      int flag = pallindrome_string(str, len);
      if(flag)
              printf("\nThe given string '%s' is a pallindrome. ", str);
      else
              printf("\nThe given string '%s' is not a pallindrome! ", str);
      
      
      /*
      if(3)
           printf("\npos");
      if(0)
           printf("\nzero");
      if(-2)
           printf("\nneg");
      int i = -3;
      while(i)
      {
           printf("\n %d", i);
           i++;
                   
      }
      */
      
      getch();
      return 0;  
}



int pallindrome_string(char str[], int len)
{
    int i = 0, j = len - 1, flag = 1;
    while(i <= len / 2)
    {
            if(str[i] != str[j])
            {
                       flag = 0;
                       break;         
            }
            i++;
            j--;        
    }
    return flag;
}
