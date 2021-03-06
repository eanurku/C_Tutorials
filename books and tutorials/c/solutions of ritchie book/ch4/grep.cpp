#include<stdio.h>// Formatted console and file input/output operations
#include<conio.h>// Unformatted console i/o operations
#include<stdlib.h>//for Utility functions like malloc,random,arc & argv as  command line arguments etc.
#include<string.h>//for String functions like strlen,strcmp etc.
#include<ctype.h>// character class test/conversion functions like isalnum,tolower etc.
#include<stdarg.h>//for Variable arguments uses in function by va_list,va_start,va_arg etc.
#include<time.h>//
#include<math.h>//



#define MAX_LINE_SIZE  10000   
char *line=(char *)malloc(MAX_LINE_SIZE);

char *getline(void)
{  int c,len=0;
     *line='\0';
     while( len < MAX_LINE_SIZE-1 && ((c=getchar())!=EOF)&& c!='\n'){
           *(line+len++)=c;
     
     }
     if(c=='\n')   
           *(line+len++)=c;
     
           
     *(line+len++)='\0';
      return line;
 }
int strindex(char *line,char *pattern)
{  int i,j,tmp;
    for(i=0;i<strlen(line);i++)
    {
       tmp=i;
       j=0;
       while(pattern[j] && line[tmp]==pattern[j])
       {  tmp++;
          j++;
       }    
       if(j>0 && !pattern[j])
         return i+1;
              
    }
     
     return 0;
}

int main(int argc,char *argv[])
{ 
  char *line=(char *)malloc(MAX_LINE_SIZE);
  char pattern[100]=argv[0];
  while(strlen(line=getline()))
     if(strindex(line,pattern))
      printf("%s",line);
  
   free(line);
  getch();
  return 0;
}
