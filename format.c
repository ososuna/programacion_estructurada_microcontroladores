#include <stdio.h>

void print_binary(unsigned char c)
{
    unsigned char i1 = (1 << (sizeof(c) * 8 - 1));
    for (; i1; i1 >>= 1)
        printf("%d", (c & i1) != 0);
}

int main()
{
    char topLeftCorner = 201;
    char rightTopCorner = 187;
    char verticalBorderLine = 186;
    char horizontalBorderLine = 205;
    char borderLines = 186;
    printf("%c=======Print unsigned char range limits======%c", topLeftCorner, rightTopCorner);
    unsigned char unsingedChar = 0b00000000;
    printf("\n%c           Minimum unsigned char:%d           %c", verticalBorderLine, unsingedChar, verticalBorderLine);
    unsingedChar = 0b11111111;
    printf("\n%c           Maximum unsigned char:%d         %c", verticalBorderLine, unsingedChar, verticalBorderLine);
    printf("\n%c                                             %c", verticalBorderLine, verticalBorderLine);

    char singedChar = 0b10000000;
    printf("\n%c           Minimum signed char:%d          %c", verticalBorderLine, singedChar, verticalBorderLine);
    singedChar = 0b11111111;
    printf("\n%c           Maximum signed char:%d            %c", verticalBorderLine, singedChar, verticalBorderLine);

    puts("\n===============================================");

    return 0;
}