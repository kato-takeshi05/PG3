#include <stdio.h>



    for (int i = 0; i < 4; i++) {
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