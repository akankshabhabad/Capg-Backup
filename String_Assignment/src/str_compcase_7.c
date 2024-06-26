extern void to_lower(char *s1);
int strcompcase(char *s1 , char *s2)
{
    to_lower(s1);
    to_lower(s2);
    while(*s1 != '\0' || *s2 !='\0')
    {
        if(*s1 == *s2)
        {
            s1++;
            s2++;
        }
        else if(*s1 > *s2)

            return 1;
        else

            return -1;

    }

    return 0;

}
