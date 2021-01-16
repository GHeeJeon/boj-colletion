//
//  main.c
//  boj-number-2750
//
//  Created by 지민호 on 2021/01/16.
//

#include<stdio.h>


int N, array[1000] = { 0 };
int tmp;


void solveStart(){
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }
    
    //buble sort starts
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 1; j++) {
            if (array[j + 1] < array[j]) {
                tmp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = tmp;
            }
        }
    }
    for (int i = 0; i < N; i++) {
        printf("%d\n", array[i]);
    }
}


int main() {
    solveStart();
    return 0;
}
