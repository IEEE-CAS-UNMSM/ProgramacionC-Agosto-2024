void mostrarBits(unsigned int valor, int nibbles)
{
    unsigned int mascara = 1 << 4*nibbles-1;
    for (unsigned int c = 1; c <= 4*nibbles; ++c) {
        putchar(valor & mascara ? '1' : '0');
        valor <<= 1;
    }
    putchar('\n');
}