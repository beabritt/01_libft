#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/*reserva espacio y devuelve una substring*/
//ft_strlcpy(subs, &s[start], (size_t)len + 1);


char
    *substr(char const *s, unsigned int start, size_t len)
{
    size_t    i;
    size_t    j;
    char    *str;

    str = (char*)malloc(sizeof(*s) * (len + 1));
    if (!str)
        return (NULL);
    i = 0;
    j = 0;
    while (s[i])
    {
        if (i >= start && j < len)
        {
            str[j] = s[i];
            j++;
        }
        i++;
    }
    str[j] = 0;
    return (str);
}

int main(void)
{
    char const        s [15] = "Soy Bea Camino";
    //char            *p;
    char            *pr;
    unsigned int    start;
    size_t            len;

    start = 2;
    len = 5;
    //p = ft_substr(s, start, len);
    pr = substr(s, start, len);
    //printf("%s \n", p);
    printf("%s \n", pr);
    //free (p);
    free (pr);
    return (0);
}