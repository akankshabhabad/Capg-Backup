int countLines(char *str)
{
    int count = 0;

    while(*str != '\0')
    {
        if(*str == '\n')
        {
            count++;
        }
        str++;
    }

    return count;

}
