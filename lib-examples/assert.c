#include <assert.h>
#include <stdio.h>

// Looking at assert - macro not really a function.
// Good for debuging

int main()
{
   int a;
   char * str;
	 
   printf("Enter an integer value >= 10: ");
   scanf("%d", &a);
   assert(a >= 10);
   printf("Integer entered is %d\n", a);
    
   printf("Enter string: ");
   scanf("%s", str);
   assert(str != NULL);
   printf("String entered is: %s\n", str);
	
   return(0);
}
