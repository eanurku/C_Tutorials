#include<stdio.h>// Formatted console and file input/output operations
#include<conio.h>// Unformatted console i/o operations
#include<stdlib.h>//for Utility functions like malloc,random,arc & argv as  command line arguments etc.
#include<string.h>//for String functions like strlen,strcmp etc.
#include<ctype.h>// character class test/conversion functions like isalnum,tolower etc.
#include<stdarg.h>//for Variable arguments uses in function by va_list,va_start,va_arg etc.
#include<time.h>//
#include<math.h>//

#include<syscalls.h>
/*
#include "../library/algorithms.c"
*/

int main(int argc,char *argv[])
{
    char buff[BUFSIZ];
    int n;
    while(n=read(0,buff,BUFSIZ)>0)
       write(1,buff,n);


  getch();
  return 0;
}
