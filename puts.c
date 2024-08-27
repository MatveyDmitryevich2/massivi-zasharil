int Schitalka(const char *cho_vivodit_nado)
{

    for( unsigned long i = 0; cho_vivodit_nado[i] != '\0'; i++ )
    {
        putchar(stroka[i]);
    }
    printf("\n");
    return 0;
}