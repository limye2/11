//
//  main.c
//  11
//
//  Created by 이예림 on 11/13/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i;
    int grade[5];
    int sum=0;
    
    for(i=0;i<5;i++)
    {
        printf("grade[%i] = ", i);
        scanf("%d", &grade[i]);
    }
    
    for(i=0; i<5; i++)
    {
        printf("grade[%i] - %i\n", i, *(grade+i));
        sum = sum + *(grade+i);
    }
    
    printf("Average : %i\n", sum/5);
    
    return 0;
}
