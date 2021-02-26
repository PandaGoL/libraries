/*

ОПИСАНИЕ:
Функция atoi() конвертирует начальную часть строки, на которую указывает str, в целое число.

*/


int     ft_atoi(char *str)
{
    int n;
    int i;

    i = 0;
    n = 0;
    if (str[0] == '-' && str[1] >= '0' && str[1] <= '9')
    {
        n = ft_atoi(str++);
        return (-n);
    }
    else if (str[0] != '-')
    {
        while (str[i] >= '0' && str[i] <= '9')
        {
            n = (n * 10) + (str[i] - '0');
            i++;
        }
    }
    return (n);
}