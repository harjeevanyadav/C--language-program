// Write a program to check if a character is a vowel or consonant.
#include<stdio.h>

int main(){
    char ch;
    printf("Enter letter: ");
scanf("%c",&ch);
if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
{
    printf ("'%c' is a vowel character",ch);
}else
{
    printf("'%c' is a consonant character", ch);
}


     return 0;
}