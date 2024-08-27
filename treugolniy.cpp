#include <stdio.h>

void VivodMassiva(int* data, size_t size_y);

int main(void)
{
    int IQ_Vovchika[] = {1, 
                         0, 2, 
                         0 , 0, 4, 
                         4, 2, 4, 1,
                         5, 1, 1, 3, 2,
                         6, 1, 1, 2, 1, 2,
                         1, 0, 0, 2, 2, 0, 3,
                         4, 2, 3, 0, 0, 3, 1, 1};

    VivodMassiva((int*)IQ_Vovchika, 8);
   
    return 0;
}

void VivodMassiva(int* data, size_t size_y)
{
    int kolichestvo_cifr_v_stroke = 1;
    int nomer_vivodimogo_simvola = 0;
    
    for (unsigned i = 0; i < size_y; i++)
    {
        for (unsigned j = 1; j < kolichestvo_cifr_v_stroke + 1; j++)
        {
            printf("%u ", *((int*)((size_t)data + nomer_vivodimogo_simvola * sizeof(int))));
            nomer_vivodimogo_simvola++;
        }

        kolichestvo_cifr_v_stroke++;
        printf( "\n");
    }
}