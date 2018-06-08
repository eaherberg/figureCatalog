/** current variables are designed for categorizing an online toy store catalog **/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// include custom lib
#include "structs.h"

#define TOYS 2    // number of toys to log

int main(void) {

    toy toys[TOYS];

    for (int i = 0; i < TOYS; i++) {
        // create temp int variable to save price value

        printf("Theme: ");
        scanf("%s", toys[i].theme);   // EX: TMNT, Batman, Star Wars, etc.
        printf("Type: ");
        scanf("%s", toys[i].type);    // EX: Action Figure, Vehicle, Scene, etc.
        printf("Name: ");
        scanf("%s", toys[i].name);    // EX: Leonardo, Batmobile, Han Solo, etc.
        printf("Price: ");
        scanf("%lf", &toys[i].price); // ...self explanatory
    }

    for (int i = 0; i < TOYS; i++) {
        printf("%s > %s > %s > %.2f\n", toys[i].theme, toys[i].type, toys[i].name, toys[i].price);    // prints item path
    }
}
