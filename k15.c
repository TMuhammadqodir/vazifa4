#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    srand(time(0));
    int n,m;
    printf("matrissa o'lchami qatori:"); scanf("%d",&n);
    printf("matrissa o'lchami ustuni:"); scanf("%d",&m);
    int arr[n][m], a,b;
    printf("matrissa elementlari:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            arr[i][j]=rand()%90-30;
            printf("%d ",arr[i][j]);
            if(arr[i][j]<0){
                a=i; b=j;
            }
                
        }
        puts("");
    }
    puts("");
    if(b+1==m){
        a++;
        b=-1;
    }
    int sum=0, k=0;
    for(int i=a; i<n; i++){
        for(int j=b+1; j<m; j++){
                printf("%d+",arr[i][j]);
                sum+=arr[i][j];
        }
        b=0;
        
    }
    printf("=%d \n",sum);

    return 0;
}