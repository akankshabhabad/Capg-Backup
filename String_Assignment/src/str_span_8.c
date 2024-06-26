int strspan(const char *s1 , const char *s2)
{
    int count , flag;
    count = 0;
    while(*s1 != '\0')
    {
        flag = 0;   
        char *temp = s2;
        while(*temp != '\0')
        {

            if(*s1 == *temp)
            {
                flag = 1;
                count++;
                break;
                
            }
            
            temp++;
     
        }  

        if(flag == 0)
            break;
        s1++;
    }
    return count;
   
}
