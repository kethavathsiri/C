//last
#include <stdio.h>
#include <stdlib.h>

int main() {
   FILE *fp1, *fp2, *fp3;
   char ch[100];
   fp1 = fopen("file.txt", "r"); // open first file for reading
   fp2 = fopen("fileupper.txt", "r");
   fp3 = fopen("filecopy.txt", "w");  // open second file for reading
   if (fp2 == NULL||fp1==NULL||fp3==NULL) {
      printf("Error opening file2.");
      exit(0);
   }
   // copy contents of first file to third file
   while ((fgets(ch,99,fp1)) != NULL) {
      fputs(ch, fp3);
   }

   // copy contents of second file to third file
   while (( fgets(ch,99,fp2)) != NULL) {
      fputs(ch, fp3);
   }

   fclose(fp1); // close first file
   fclose(fp2); // close second file
   fclose(fp3);
   printf("copied sucessfully"); // close third file
   return 0;
}
