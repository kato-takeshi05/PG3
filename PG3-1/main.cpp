#include<stdio.h>
#include "Man.h"
#include "Penis.h"
#include "Ball.h"

int main() {

    Man* man_parts[3];


    for (int i = 0; i < 3; i++) {
        if (i < 1)
            man_parts[i] = new Penis;
        else
            man_parts[i] = new Ball;

    }



    for (int i = 0; i < 3; i++) {
        delete man_parts[i];
    }

    return 0;
}