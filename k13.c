#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    srand(time(0));
    int n;
    printf("matrissa o'lchami:"); scanf("%d",&n);
    int arr[n][n];
    printf("matrissa elementlari:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            arr[i][j]=rand()%90+10;
            printf("%d ",arr[i][j]);
        }
        puts("");
    }
    puts("");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i][0]);
    }


    return 0;
}