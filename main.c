//
//  main.c
//  11
//
//  Created by 이예림 on 11/13/25.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int i=100;
    int *p = &i;
    int **q = &p;
    
    *p = 200;
    printf("i=%i, *p = %d, **q = %d\n", i, *p, **q);
    
    **q = 300;
    printf("i = %i, *p = %d, **q = %d\n", i, *p, **q);
    
    return 0;
}
