#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[100];
    int n,i = 0;
    gets(str);
    scanf("%d", &n);
    while(str[i] != '\0')
    {
        if(islower(str[i]))  
            str[i] = (str[i] - 97 + n) % 26 + 97;
        if(isupper(str[i]))
            str[i] = (str[i] - 65 + n) % 26 + 65;
        i++;
    }
    printf("%s", str);
    return 0;
}