int ft_atoi(char *str)
{
    int count;
    int number;

    count = 0;
    number = 0;
    while (*str == '\n' || *str == ' ' || *str == '\t' || 
    *str == '\r' || *str == '\v' || *str == '\f')
    {
        str++;
    }
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            count++;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        if (count % 2 != 0)
            number = -(number * 10 + '0');
        else
            number = number * 10 + '0';
    }
    return (number);
}
