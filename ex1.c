/******************
Name: Alon Cohen
ID: 213713019
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE. not even "==, &&, ||, !="

int main()
{

    // Ascii
    printf("Ascii:\n");
    printf("Please enter a character\n");
    char c;
    c = getchar();
    printf("Its numerical value is: %d\n", c);
    printf("0 for even, 1 for odd: %d", c&1);


    // 2's complement and other representations
    printf("\n2's complement to other representations:\n");
    printf("Please enter a negative integer\n");
    int n;
    scanf("%d", &n);
    printf("1's complement: %d\n", ~n);
    printf("unsigned: %u\n", n);
    

    // Shifting right and left
    printf("\nShifting right and left:\n");
    printf("Please enter 3 integers\n ");
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("After shifting right and left: %d\n", num1>> num2 << num3);
    

    // Even - Odd
    printf("\nEven - Odd:\n");
    printf("Please enter 3 integers\n ");
    scanf("%d %d %d", &num1, &num2, &num3);
    // Checks all combinations of the integers to determine if the majority are odd.
    int odd1 = num1 & 1;
    int odd2 = num2 & 1;
    int odd3 = num3 & 1;
    int mostly_odd = (odd1 & odd2) | (odd2 & odd3) | (odd1 & odd3); 
    printf("0 - most of them are even, 1 - most of them are odd: %d\n", mostly_odd);

    // Different Bases
    printf("\nDifferent Bases:\n");
    printf("Please enter two numbers in octal and hexadecimal bases\n ");
    int octal_num, hex_num;
    scanf("%o %x", &octal_num, &hex_num);
    printf("LSBs: %d %d \n", octal_num&1, hex_num&1);
    printf("MSBs: %d %d \n", (octal_num >>31)&1, (hex_num >>31)&1);

    printf("Bye!\n");

    return 0;
}
