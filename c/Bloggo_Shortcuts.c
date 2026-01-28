#include <stdio.h>
#include <string.h>
int main()
{
   char name[60];
   while (fgets(name, 60, stdin) != NULL)
   {
      int len = strlen(name) - 1;
      int count1 = 0;
      int count2 = 0;
      for (int i = 0; i < len; i++)
      {
         if (name[i] != '*' && name[i] != '_')
         {
            printf("%c", name[i]);
         }
         else if (name[i] == '*')
         {
            count1++;
            if (count1 == 1)
            {
               printf("<b>");
            }
            else if (count1 == 2)
            {
               printf("</b>");
               count1 = 0;
            }
         }
         else if (name[i] == '_')
         {
            count2++;
            if (count2 == 1)
            {
               printf("<i>");
            }
            else if (count2 == 2)
            {
               printf("</i>");
               count2 = 0;
            }
         }
      }

      printf("\n");
   }

   return 0;
}