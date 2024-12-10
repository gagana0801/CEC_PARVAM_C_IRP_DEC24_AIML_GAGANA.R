#include<stdio.h>
//#include<string.h>

int main()
{
    char name[100];
    int no, remainder,count;
    printf("enter your name:");
    scanf("%s", &name);
    printf("your name is %s \n", name);

    for (int i = 0; name[i]!='\0'; i++)
    {
        count++;
    }
        if (count%2==0)
        {
            printf("even!!");

        }
        else
        printf("odd!!");

        
    

    //printf("the length of your name is : %lu \n", len(count));

return 0;
}              


