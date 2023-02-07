//char *strcat(char *destination, const char *source);
#include<stdio.h>
#include<string.h>
int main(void)
{
    char str1[100]="This is ",str2[]="bank statement.c";
    //concatenates str1 and str2
    //The resultant string is stored in str1
    strcat(str1,str2);//stores str2 in str1 
    puts(str1);// now str1 contains the concatenated string.c
    puts(str2);
}
