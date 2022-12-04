#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    srand(time(0));
    int n,m;
    printf("matrissa o'lchami qatori:"); scanf("%d",&n);
    printf("matrissa o'lchami ustuni:"); scanf("%d",&m);
    int arr[n][m];
    printf("matrissa elementlari:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            arr[i][j]=rand()%90-40;
            printf("%d ",arr[i][j]);
        }
        puts("");
    }
    puts("");
    int sum=0, k=0;
    for(int i=0; i<n; i++){
        if(k==1)
            break;
        for(int j=0; j<m; j++){
            if(arr[i][j]>=0){
                printf("%d+",arr[i][j]);
                sum+=arr[i][j];
            }else{
                k=1;
                break;
            }

        }
    }
    printf("=%d \n",sum);

    return 0;
}