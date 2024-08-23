//3.
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) 
{
   if (argc != 3) {
      printf("Usage: %s <filename> <character>\n", argv[0]);
      return 1;
   }
   FILE *fp = fopen(argv[1], "r");
   if (fp == NULL) {
      printf("Error opening file%s\n.",argv[1]);
      return 1;
   }
   char search_char=argv[2][0];
   int count=0;
   char ch;
   while ((ch = fgetc(fp)) != EOF) {
      if (ch == search_char) {
         count++;
      }
   }
   printf("The character '%c' occurs %d times in the file %s.\n", search_char, count, argv[1]);
   fclose(fp);
   return 0;
}
