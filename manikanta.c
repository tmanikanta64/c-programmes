# include <stdio.h>
# include <stdlib.h>
# include <string.h>
int main()
{
 FILE *fptr;
 long int num;
 char a[20];
 int l,i;
 fptr = fopen("/home/anits/Desktop/details.txt","a");
 if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
   printf("Enter the name of emloyee\n");
   scanf("%s",a);

   fprintf(fptr,"%s",a);
   printf("enter contact number\n");
   scanf("%lu",&num);
   fprintf(fptr,"   %lu\n",num);
   
  fclose(fptr);
  }
