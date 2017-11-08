#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}

int repetidos(int vec[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int ii = i+1; ii < size; ++ii)
        {
            if (vec[i] == vec[ii])
                return 1;
        }
    }
    return 0;
}