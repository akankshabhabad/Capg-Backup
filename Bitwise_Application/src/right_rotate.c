unsigned short right_rotate(unsigned short num,unsigned short n)
{
        
       return (num >> n) | (num << (16 - n));
}
