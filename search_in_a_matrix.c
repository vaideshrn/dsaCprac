#include<stdio.h>
int main() {
    int mat[3][3] = {{6,23,21},{4,45,32},{69,11,87}};
    int x = 32;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(mat[i][j] == x) {
                printf("%d is present in the matrix",x);
                break;
            }
            else {
                continue;
            }
        }
    }
}