int add_negative(int *arr , int size)
{
    int i;
    int sum = 0;
    for(i = 0; i < size ;i++)
    {
        if(*(arr + i) < 0)
            sum += *(arr + i);
    }
    return sum;
}
