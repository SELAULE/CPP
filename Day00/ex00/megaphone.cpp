#include <cctype>
#include <iostream>
#include <cstring>

int     ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int     main(int argc, char **argv)
{
    if (argc < 2)
        puts("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
    else
    {
        for (int j = 1; j < argc; j++)
            for (int i = 0; i < ft_strlen(argv[j]); i++)
                putchar(toupper(argv[j][i]));
    }
    return 0;
}
