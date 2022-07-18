#include<stdio.h>
int main()
{   
    char name[20];
    printf("Enter your Name \n");
    scanf("%[^\n]s",&name);
    printf("%s",name);
    int i=0;
    for(i=0;i<20;i++)
    {
       if(name[i]==' ' && name[i+1]>97)
       name[i]=name[i];
    }
    return 0;
}