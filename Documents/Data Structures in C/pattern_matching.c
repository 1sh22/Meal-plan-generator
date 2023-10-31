/*1. Design, Develop and Implement a Program in C for the following operations on Strings 
     1. Read a main String (STR), a Pattern String (PAT) and a Replace String (REP) 
     2. Perform Pattern Matching Operation: Find and Replace all occurrences of PAT in STR with REP if PAT exists in STR. Report suitable messages in case PAT does not exist in STR. 
     3. Pattern Matching Algorithm: Brute Force / KMP 
     4. Support the program with functions for each of the above operations. Don't use Built-in functions 
      5. Check the following test cases. 
Test Case 1: STR = “VVCE MYSURU”, PAT=” MYSURU”, REP=” KARNATAKA”, OUTPUT=” VVCE KARNATAKA” 
Test Case 2: STR = “COMPUTER SCIENCE”, PAT=” COMPUTER”, REP=” BASIC”, OUTPUT=” BASIC SCIENCE” */

#include<stdio.h>
#include<stdlib.h>


char str[100], pat[50], rep[50], ans[100];
int i, j, c, m, k, flag=0;

void stringmatch()
{
i = m = c = j = 0;

while(str[c]!='\0')
{
    if(str[m]==pat[i]) // ...... matching
     {
       i++; m++;
       if(pat[i]=='\0') //.....found occurrences.
       {
       flag = 1; 
       for(k = 0; rep[k]!='\0'; k++, j++) //.... copy replace string in ans string.
       ans[j]=rep[k];
       i = 0;
       c = m;
       }
     } 
     else //... mismatch
     {
       ans[j]=str[c];
       j++;
       c++;
       m = c;
       i = 0;
     }
   } 
   ans[j]='\0';
} 

void main()
{
printf("\nEnter a main string \n");
gets(str);

printf("\nEnter a pattern string \n");
gets(pat);

printf("\nEnter a replace string \n");
gets(rep);

stringmatch();
if(flag==1)
printf("\nThe resultant string is\n %s" , ans);
else
printf("\nPattern string NOT found\n");
}


