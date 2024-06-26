



	unsigned int swap_bits_within(unsigned int num, unsigned int s, unsigned int d) {
		   
		    unsigned int bit_s = (num >> s) & 1;
		        unsigned int bit_d = (num >> d) & 1;

			    unsigned int x= bit_s^ bit_d;   
			        x=(x<<s)|(x<<d);
				    unsigned int result= num^ x;
				        return result;
	}

