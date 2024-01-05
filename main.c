#include <stdio.h>
#include <stdlib.h>

int objectArea(int length, int width, int height);
int objectVol(int l, int w, int h);

int main() {
    int selection;

    printf("Welcome.\n");
    printf("Kindly select 1 for Surface area computation or 2 for Volume: ");
    scanf("%d", &selection);

    if (selection == 1) {
        int length, width, height;
        printf("The Surface Area of the object is: %d\n", objectArea(length, width, height));
    } else if (selection == 2) {
        int length, width, height;
        printf("The Volume of the object is: %d\n", objectVol(length, width, height));
    } else {
        printf("You have input an invalid selection.\n");
    }

    return 0;
}

int objectArea(int length, int width, int height) {
    printf("Please input the Length: ");
    scanf("%d", &length);
    printf("Width: ");
    scanf("%d", &width);
    printf("Height: ");
    scanf("%d", &height);

    int surfaceArea = 2 * ((length * width) + (width * height) + (height * length));
    return surfaceArea;
}

int objectVol(int l, int w, int h) {
    printf("You have selected to compute volume of the cube.\n");
    printf("Please input the Length: ");
    scanf("%d", &l);
    printf("Width: ");
    scanf("%d", &w);
    printf("Height: ");
    scanf("%d", &h);

    int result = l * w * h;
    return result;
}
