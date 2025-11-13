//
//  main.c
//  11
//
//  Created by 이예림 on 11/13/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 300;
    
    int *pi = &i;
    char *pc = &i;
    
    printf("%i, %i, %i\n", i, *pi, *pc); // 300, 300, 44
    return 0;
}
