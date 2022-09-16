#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("input length of text :");
    scanf("%d",&n);
    char *ptr;
    ptr= (char *) malloc(n * sizeof(char));
    fflush(stdin);
    fgets(ptr,n * sizeof(char) + 1,stdin);
    printf("You enter string - %s", ptr);
    return 0;
}

