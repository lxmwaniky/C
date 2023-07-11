#include <stdio.h>

int main() {
    char text[100];

    printf("Enter your text: ");
    fgets(text, sizeof(text), stdin);

    printf("\nASCII Art:\n");
    for (int i = 0; text[i] != '\0'; i++) {
        switch (text[i]) {
            case 'A':
            case 'a':
                printf("  A  \n A A \nAAAAA\nA   A\n\n");
                break;
            case 'B':
            case 'b':
                printf("BBBB \nB   B\nBBBB \nB   B\nBBBB \n\n");
                break;
            case 'C':
            case 'c':
                printf(" CCCC\nC    \nC    \nC    \n CCCC\n\n");
                break;
            case 'D':
            case 'd':
                printf("DDDD \nD   D\nD   D\nD   D\nDDDD \n\n");
                break;
            case 'E':
            case 'e':
                printf("EEEEE\nE    \nEEE  \nE    \nEEEEE\n\n");
                break;
            case 'F':
            case 'f':
                printf("FFFFF\nF    \nFFF  \nF    \nF    \n\n");
                break;
            case 'G':
            case 'g':
                printf(" GGGG\nG    \nG  GG\nG   G\n GGG \n\n");
                break;
            case 'H':
            case 'h':
                printf("H   H\nH   H\nHHHHH\nH   H\nH   H\n\n");
                break;
            case 'I':
            case 'i':
                printf("IIIII\n  I  \n  I  \n  I  \nIIIII\n\n");
                break;
            case 'J':
            case 'j':
                printf(" JJJJ\n   J \n   J \nJ  J \n JJ  \n\n");
                break;
            case 'K':
            case 'k':
                printf("K   K\nK  K \nKK   \nK  K \nK   K\n\n");
                break;
            case 'L':
            case 'l':
                printf("L    \nL    \nL    \nL    \nLLLLL\n\n");
                break;
            case 'M':
            case 'm':
                printf("M   M\nMM MM\nM M M\nM   M\nM   M\n\n");
                break;
            case 'N':
            case 'n':
                printf("N   N\nNN  N\nN N N\nN  NN\nN   N\n\n");
                break;
            case 'O':
            case 'o':
                printf(" OOO \nO   O\nO   O\nO   O\n OOO \n\n");
                break;
            case 'P':
            case 'p':
                printf("PPPP \nP   P\nPPPP \nP    \nP    \n\n");
                break;
            case 'Q':
            case 'q':
                printf(" QQQ \nQ   Q\nQ Q Q\nQ  QQ\n QQQQ\n    Q\n\n");
                break;
            case 'R':
            case 'r':
                printf("RRRR \nR   R\nRRRR \nR  R \nR   R\n\n");
                break;
            case 'S':
            case 's':
                printf(" SSS \nS    \n SSS \n    S\n SSS \n\n");
                break;
            case 'T':
            case 't':
                printf("TTTTT\n  T  \n  T  \n  T  \n  T  \n\n");
                break;
            case 'U':
            case 'u':
                printf("U   U\nU   U\nU   U\nU   U\n UUU \n\n");
                break;
            case 'V':
            case 'v':
                printf("V   V\nV   V\nV   V\n V V \n  V  \n\n");
                break;
            case 'W':
            case 'w':
                printf("W   W\nW   W\nW W W\nWW WW\nW   W\n\n");
                break;
            case 'X':
            case 'x':
                printf("X   X\n X X \n  X  \n X X \nX   X\n\n");
                break;
            case 'Y':
            case 'y':
                printf("Y   Y\n Y Y \n  Y  \n  Y  \n  Y  \n\n");
                break;
            case 'Z':
            case 'z':
                printf("ZZZZZ\n   Z \n  Z  \n Z   \nZZZZZ\n\n");
                break;
            default:
                printf("     \n  ?  \n     \n  ?  \n     \n\n");
                break;
        }
    }

    return 0;
}
