void my_strcpy(char *dst , char *src)
{
    //while(((*dst)++ = (*src)++) != '\0')

    while(*src != '\0')
    {
        *dst = *src;
        dst++;
        src++;
    } 
   
    *dst = '\0';
} 
