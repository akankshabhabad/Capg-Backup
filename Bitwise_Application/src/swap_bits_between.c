int swap_bits_between(unsigned int *snum, unsigned int *dnum, unsigned int s, unsigned int d) {
    
    
    
    if (s >= 32|| d >= 32) {
        return -1; 
    }

   
    unsigned int bit_s = (*snum >> s) & 1;
    unsigned int bit_d = (*dnum >> d) & 1;

    unsigned int mask_s= 1<<s;
    unsigned int mask_d= 1<<d;
    if (bit_s != bit_d) {
        
        *snum ^= mask_s;

        *dnum ^= mask_d;
    }

    return 0; 
}
