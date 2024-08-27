#include <stdio.h>

const unsigned razmer_stroky = 3;
const unsigned razmer_stolba = 2;

void VivodMassiva(int* data, size_t size_x, size_t  size_y);
void Lohovskiy_variant(int data[][razmer_stroky]);
int main(void)
{
    int IQ_Vovchika[razmer_stolba][razmer_stroky] = {{9, 7, 6},
                                                     {5, 4, 3}};

    VivodMassiva((int*)IQ_Vovchika, razmer_stolba, razmer_stroky);
    //Lohovskiy_variant(IQ_Vovchika);
    return 0;
}

void VivodMassiva(int* data, size_t size_x, size_t  size_y)
{
    for(unsigned j = 0; j < size_y; j++)
    {
        for(unsigned i = 0; i < size_x; i++)
        {
            printf("data[%d][%d] = %d ", i, j, *((int*)data + j * size_x + i));
        }
        printf("\n");
    }
}

void Lohovskiy_variant(int data[][razmer_stroky])
{
    for(unsigned i = 0; i < razmer_stroky; i++)
    {
        for(unsigned j = 0; j < razmer_stroky; j++)
        {
            printf("data[%d][%d] = %d ", i, j, data[i][j]);
        }
        printf("\n");
    }
}