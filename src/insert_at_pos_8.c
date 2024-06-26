void insert_at_loc(int *arr , int pos , int num , int size)
{
    for(int i = size; i >=pos ; i--)
    {
        *(arr + i) = *(arr + i - 1);
    }

    *(arr + pos - 1) = num;
}

