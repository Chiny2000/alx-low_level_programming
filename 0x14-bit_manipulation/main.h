#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_uint(const char *bn);
void print_binary(unsigned long int nb);
int get_bit(unsigned long int ns, unsigned int indexb);
int set_bit(unsigned long int *np, unsigned int indexb);
int clear_bit(unsigned long int *np, unsigned int indexb);
unsigned int flip_bits(unsigned long int fn, unsigned long int sn);
int _atoi(const char *s);
int _putchar(char c);
int get_endianness(void);

#endif
