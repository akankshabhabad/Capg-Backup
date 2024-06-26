char* strncopy(char *dest , const char *src , int n)
{
    int i = 0;
    char *ptr = dest;
    while(*src != '\0' && i < n)
    {
        *dest = *src;
        dest++;
        src++;
        i++;
    }
    *dest = '\0';
    return ptr;
}
