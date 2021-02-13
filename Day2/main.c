/* Exercise 2 */
#include <stdio.h>
#include <string.h>

int main()
{
/*int ctr;
for ( ctr = 65; ctr < 91; ctr++)
    printf("%c",ctr);
return 0;*/
char buffer[256];

printf("Enter your name and press <Enter>:\n");
gets(buffer);

printf("Your name has %d characters and spaces!",(int)strlen(buffer)); /*here strlen is already an int, casting is used just to avoid warning*/

return 0;


}
