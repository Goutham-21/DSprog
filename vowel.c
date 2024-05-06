#include<stdio.h>
void main()
{
    char s[100];
    int i,count = 0,c = 0;
    printf("Enter the input string :");
    gets(s);
    for(i=0;i<s[i];i++){
        if(s[i] == 'A' || s[i] == 'a'){
            count++;
        }
        else{
            c++;
        }
    }
    printf("No of vowels in the string :%d",count);
    printf("No of consonant in the string :%d",c);

}
