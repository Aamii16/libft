#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int    countwords(char const *s, char c)
{
    int    count;
    
    count = 0;
    while (*s)
    {
        while (*s && *s== c)
            s++;
        while (*s && *s != c)
            s++;
        while (*s && *s== c)
            s++;
	count++;
    }
    return (count);
}

char    **ft_split(char const *s, char c)
{
    int    i;
    int    e;
    int	index;
    int    elements;
    int    w_size;
    char    **split;

    e = -1;
    i = 0;
    elements = countwords(s, c);
    printf("elements %d\n", elements);
    split = (char **)malloc((elements + 1) * sizeof(char *));
    while (e < elements && s[i])
    {   
	    printf("e is %d test %d\n ",e, i);    
	    w_size = 0;
            index = -1;
            while (s[i] == c && s[i])
                i++;
	    i--;
            while (s[++i] != c && s[i])
                w_size++;
            split[++e] = malloc((w_size + 1) * sizeof(char));
            while (++index < w_size)
                split[e][index] = s[index + i - w_size];
            split[e][w_size] = '\0';
    }
    split[elements] = '\0';
    return (split);
}
int main(){

	char **split = ft_split("ak,lk,ka", ',');
	int i = 0;
	while(split[i])
	{
		puts(split[i]);
		i++;
	}
}
