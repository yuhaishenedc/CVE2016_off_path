//this only conclude the struct data structure in the paper

struct addrinfo{
	int 			ai_flags;
	int 			ai_family;
	int 			ai_socktype;
	int 			ai_protocol;
	socklen_t 		ai_addrlen;
	struct sockaddr *ai_addr;
	char 			*ai_canonname;
	struct addrinfo	*ai_next;
};

struct sockaddr{
	unsigned short int 	sa_family;
	char				sa_data[14];
};

struct sockaddr_in{
	unsigned short int	sin_family;
	uint16_t			sin_port;		//port number
	struct in_addr		sin_addr;		//internet address
	
	unsigned char size_zero[sizeof(struct sockaddr)-
					sizeof(unsigned short int)-
					sizeof(uint16_t)-
					sizeof(struct in_addr)];
}

struct in_addr{
	uint32_t s_addr;
}


/*
	/usr/include/pcap/pcap.h
*/
struct pcap_pkthdr{
	struct timeval ts;		//time stamp;	
	bpf_u_int32 caplen;		//the actual packet length we get
	bpf_u_int32 len;		//the length of the packet, also the maximum length we can get
}
