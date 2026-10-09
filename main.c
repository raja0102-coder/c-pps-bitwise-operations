#include <stdio.h>

// Utility function to print an 8-bit binary representation
void printBinary8(unsigned char num) {
    printf("0b");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}

// 1. Set specific bit at position pos (0-indexed)
unsigned char setBit(unsigned char num, int pos) {
    return num | (1 << pos);
}

// 2. Clear specific bit at position pos
unsigned char clearBit(unsigned char num, int pos) {
    return num & ~(1 << pos);
}

// 3. Toggle specific bit at position pos
unsigned char toggleBit(unsigned char num, int pos) {
    return num ^ (1 << pos);
}

// 4. Check if bit at position pos is set
int isBitSet(unsigned char num, int pos) {
    return (num >> pos) & 1;
}

int main() {
    printf("==================================================\n");
    printf("      PPS BITWISE OPERATIONS & MASKING ENGINE     \n");
    printf("==================================================\n\n");

    unsigned char a = 12; // Binary: 00001100
    unsigned char b = 10; // Binary: 00001010

    // 1. Basic Bitwise Operations
    printf("[1] FUNDAMENTAL BITWISE OPERATORS:\n");
    printf("    a        = %3d -> ", a); printBinary8(a); printf("\n");
    printf("    b        = %3d -> ", b); printBinary8(b); printf("\n");
    
    printf("    a & b    = %3d -> ", a & b); printBinary8(a & b); printf("  (Bitwise AND)\n");
    printf("    a | b    = %3d -> ", a | b); printBinary8(a | b); printf("  (Bitwise OR)\n");
    printf("    a ^ b    = %3d -> ", a ^ b); printBinary8(a ^ b); printf("  (Bitwise XOR)\n");
    printf("    ~a       = %3d -> ", (unsigned char)~a); printBinary8(~a); printf("  (Bitwise NOT)\n\n");

    // 2. Shift Operations
    printf("[2] SHIFT OPERATORS:\n");
    printf("    a << 2   = %3d -> ", a << 2); printBinary8(a << 2); printf("  (Left Shift by 2: Multiply by 4)\n");
    printf("    a >> 1   = %3d -> ", a >> 1); printBinary8(a >> 1); printf("  (Right Shift by 1: Divide by 2)\n\n");

    // 3. Bit Manipulation Utilities
    int bitPos = 1;
    printf("[3] BIT MASKING OPERATIONS (Target Bit Position: %d):\n", bitPos);
    
    unsigned char setRes = setBit(a, bitPos);
    printf("    Set Bit   : "); printBinary8(setRes); printf(" (%d)\n", setRes);

    unsigned char clearRes = clearBit(a, 3);
    printf("    Clear Bit 3: "); printBinary8(clearRes); printf(" (%d)\n", clearRes);

    unsigned char toggleRes = toggleBit(a, bitPos);
    printf("    Toggle Bit: "); printBinary8(toggleRes); printf(" (%d)\n", toggleRes);

    printf("    Check Bit : Bit %d in %d is %s\n", bitPos, a, isBitSet(a, bitPos) ? "SET (1)" : "CLEAR (0)");

    printf("\n==================================================\n");

    return 0;
}
