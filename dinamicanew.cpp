#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Prinatie_stroki(int colichestvo_strok, int** Massiv_ukazatelei, int* Kolichestvo_slov_v_strokah);
void Otnatie_massiva(int colichestvo_strok, int* Kolichestvo_slov_v_strokah, int** Massiv_ukazatelei);

int main(void)
{
    int kolichestvo_slov_v_stroke = 0;
    printf("Введи количество строк массива: ");
    int colichestvo_strok = 0;
    scanf("%d", &colichestvo_strok);
    
    printf("Введи максимальную длину строки, которую будешь использовать: ");
    int max_dlina_stroki = 0;
    scanf("%d", &max_dlina_stroki);
    
    int** Massiv_ukazatelei = (int**)calloc(colichestvo_strok, sizeof(int*));
    int* Kolichestvo_slov_v_strokah = (int*)calloc(max_dlina_stroki, sizeof(int));

    Prinatie_stroki(colichestvo_strok, Massiv_ukazatelei, Kolichestvo_slov_v_strokah);
    Otnatie_massiva(colichestvo_strok, Kolichestvo_slov_v_strokah, Massiv_ukazatelei);
    
    return 0;
}

void Prinatie_stroki(int colichestvo_strok, int** Massiv_ukazatelei, int* Kolichestvo_slov_v_strokah)
{
    for (int nomber_stroki = 0; nomber_stroki < colichestvo_strok; nomber_stroki++)
    {
        printf("\nВведи колчиество слов в %d строке: ", nomber_stroki + 1);
        scanf("%d", (Kolichestvo_slov_v_strokah + nomber_stroki));

        Massiv_ukazatelei[nomber_stroki] = (int*)calloc(Kolichestvo_slov_v_strokah[nomber_stroki], sizeof(int));
    
        for (int nomer_simvola = 0; nomer_simvola < *(Kolichestvo_slov_v_strokah + nomber_stroki); nomer_simvola++)
        {
            printf("\nВведи %d символ: ", nomer_simvola + 1);
            scanf("%d", (*(Massiv_ukazatelei + nomber_stroki) + nomer_simvola));
        }
    }
}

void Otnatie_massiva(int colichestvo_strok, int* Kolichestvo_slov_v_strokah, int** Massiv_ukazatelei)
{
    printf("\nВведенный тобой массив, чечик ;)\n");

    for(int nomber_stroki = 0; nomber_stroki < colichestvo_strok; nomber_stroki++)
    {
        for(int nomer_simvola = 0; nomer_simvola < *(Kolichestvo_slov_v_strokah + nomber_stroki); nomer_simvola++)
            printf("%d ", *(*(Massiv_ukazatelei + nomber_stroki) + nomer_simvola));
        printf("\n");
    }
}
