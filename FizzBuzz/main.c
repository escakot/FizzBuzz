//
//  main.c
//  FizzBuzz
//
//  Created by Errol Cheong on 2017-05-22.
//  Copyright © 2017 Errol Cheong. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //FizzBuzz Program
    for (int i = 1; i < 100; i++) {
        //Prints FizzBuzz for multiples of 3 & 5
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        }
        //Prints Fizz for multiples of 3,
        else if (i % 3 == 0) {
            printf("Fizz\n");
        }
        //Prints Buzz for multiples of 5 and
        else if (i % 5 == 0) {
            printf("Buzz\n");
        }
        //Prints a number from 1-100
        else {
            printf("%d\n", i);
        }
    }
    return 0;
}
