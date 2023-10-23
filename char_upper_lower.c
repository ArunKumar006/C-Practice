#include<stdio.h>
int main()
{
      //for initialize of character
          char c;
    
      //to take user input   
         printf("Enter any character : ");
         scanf("%c",&c);

     //to find true of upper case value.
        if(c>='A' && c<='Z')
             printf("character is  an upper case");
        
     //to check of lowercase character
        else if(c>='a' && c<='z')
            printf("character is a lower case");
       
    //to check it is not a character
       else if(c>='0'&& c<='9')
           printf("it is not a character");
       //all condition false than
         else
          printf("character is a special character");
    
   return 0;

}
