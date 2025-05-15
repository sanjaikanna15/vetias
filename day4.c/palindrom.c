#include <stdio.h>

 int main()
 {
     int num,rev=0,rem,real;
     printf("Enter a number : ");
     scanf("%d",&num);
     real=num;
     while(num!=0)
     {
         rem=num%10;
         rev=rev*10+rem;
         num=num/10;
     }
     printf("\n The Reverse Numbers are : %d",rev);
     if(real==rev)
      printf("\n\n **The Numbers is palindrome **");
     else
      printf("\n\n **The Numbers is not palindrome **");   
      
     return 0;
 }