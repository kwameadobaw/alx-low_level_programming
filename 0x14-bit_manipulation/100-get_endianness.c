#include "main.h"
/**
  * get_endianness - returns processor endianness
  * Return: 0 if big endian, 1 if little endian
  */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *byteptr = (unsigned char *)&num;

	return (*byteptr == 1);
}
