int reverseNum(int num)
{
    int rem , rev = 0;

    while(num > 0)
    {
        rem = num % 10;  //Return the remainder
        rev = rev * 10 + rem;
        num /= 10;
    }
    return rev;
}

