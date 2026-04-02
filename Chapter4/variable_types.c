# include <stdio.h>
# include <limits.h>
# include <float.h>

// со страницы 204

int main()
{
    printf("Значение INT_MAX = %i\n", INT_MAX);
    printf("Значение INT_MIN = %i\n", INT_MIN);
    printf("int занимает %i байт\n\n", sizeof(int));

    printf("Значение FLT_MAX = %f\n", FLT_MAX);
    printf("Значение FLT_MIN = %.50f\n", FLT_MIN);
    printf("float занимает %li байт\n", sizeof(float));

    return 0;
}