// Program to create a file
/*
#include <stdio.h>
#include <conio.h>

int main()
{
FILE *f1;
char c;
f1 = fopen("write", "w");      //fopen();
clrscr();
printf("Enter the data to save in the file:");
while((c=getchar())!=EOF)
putc(c, f1);    //strcpy(s1,s2);
fclose(f1);
//getch();
return 0;
}

*/


// Program to delete a file

#include <stdio.h>
#include <conio.h>


int main()
{
int filestatus;
char namef[25];
clrscr();

printf("Enter the name of file which you want to delete\n");
gets(namef);

filestatus = remove(namef);

if(filestatus == 0)
printf("File is deleted successfully.\nName of deleted file: %s", namef);
else
{
	printf("Unable to locate file\n");
	printf("File not deleted\n");
	perror("Error");
}
getch();
return 0;
}
