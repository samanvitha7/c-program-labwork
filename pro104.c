// pro104 AN ENUMERATION WITH COLOR NAMES CAN BE USED IN A SWITCH STATEMENT TO DISPLAY THE HEXADECIMAL COLOR CODE.
#include <stdio.h>

enum Color {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    BLACK,
    WHITE
};

int main() {
    enum Color color;
    int choice;

    printf("Enter a color choice:\n");
    printf("1. Red\n");
    printf("2. Green\n");
    printf("3. Blue\n");
    printf("4. Yellow\n");
    printf("5. Black\n");
    printf("6. White\n");
    scanf("%d", &choice);

    color = choice - 1;

    switch (color) {
        case RED:
            printf("Hexadecimal code for Red: #FF0000\n");
            break;
        case GREEN:
            printf("Hexadecimal code for Green: #00FF00\n");
            break;
        case BLUE:
            printf("Hexadecimal code for Blue: #0000FF\n");
            break;
        case YELLOW:
            printf("Hexadecimal code for Yellow: #FFFF00\n");
            break;
        case BLACK:
            printf("Hexadecimal code for Black: #000000\n");
            break;
        case WHITE:
            printf("Hexadecimal code for White: #FFFFFF\n");
            break;
        default:
            printf("Invalid color choice.\n");
    }

    return 0;
}
