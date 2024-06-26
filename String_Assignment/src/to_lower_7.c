void to_lower(char *str)
{
    
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str += 'a' - 'A';
        }

        str++;
    }
    
}
