/*

Функция strstr() ищет первое вхождение подстроки to_find в строке str.
Завершающий символ `\0' не сравнивается.


*/


char    *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (to_find[0] == '\0')
        return (str);
    while (str[i] != '\0')
    {
        while (str[i + j] != '\0' && str[i + j] == to_find[j])
        {
            if (to_find[j + 1] == '\0')
                return (&str[i]);
            j++;
        }
        i++;
    }
    return (0); 
    
}