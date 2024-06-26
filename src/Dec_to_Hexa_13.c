char* decimal_to_hexa(int num , char *hexa)
{
    int rem;
    char *temp = hexa;

    while(num > 0)
    {
        rem = num % 16;
        if(rem < 10)
        {
            *temp = rem + '0';
            temp++;
        }
        else
        {
            *temp = rem + 'A' - 10;
            temp++;
        }
        num /= 16;
    }

    char *start = hexa;
    char *end = temp - 1;
    while(start < end)
    {
        char tmp = *start;
        *start = *end;
        *end = tmp;
        start++;
        end--;
    }
    *temp = '\0';
    
    return hexa;


}
