#include <stdio.h>
#include <string.h>

typedef struct complex
{
    float real;
    float imaginary;
} complex;

void storecomplex(complex* carr, int size);
void displaycomplex(complex* carr, int size);

void main()
{
    complex arr[2];

    printf("Enter complex number details:\n");
    storecomplex(arr, 2);

    printf("\nComplex number details:\n");
    displaycomplex(arr, 2);
}

void storecomplex(complex* carr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("\nEnter Real part: ");
        scanf("%f", &carr[i].real);

        printf("Enter Imaginary part: ");
        scanf("%f", &carr[i].imaginary);
    }
}

void displaycomplex(complex* carr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("\nComplex Number %d", i + 1);

        if(carr[i].imaginary >= 0)
        {
            printf("\nComplex: %.2f + %.2fi\n",
                   carr[i].real,
                   carr[i].imaginary);
        }
        else
        {
            printf("\nComplex: %.2f - %.2fi\n",
                   carr[i].real,
                   -carr[i].imaginary);
        }
    }
}