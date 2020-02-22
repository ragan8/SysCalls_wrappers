void myMemset(char* s, int c, size_t n);

#define memset(s,c,n) myMemset( (s), (c), (n) )

