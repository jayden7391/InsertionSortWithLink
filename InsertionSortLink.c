#include<stdio.h>

int a[9] = {-1,50, 10, 25, 30, 15, 70, 35, 55};
int link[9] = {0};

void Insertion1(int *a, int *link, int low, int high){
    //low부터 high까지 정렬
    int item = 0;
    for(int j=low; j<=high; j++){
        item = a[j];
        int i = 0;
        int t = link[i];
        //가장 작은 값부터 link를 따라가면서 자신의 위치를 찾음.
        while((link[i] != 0) && (item > a[t])){
            i = t;
            t = link[t];

        }
        //여기서 j는 새로 insert되는 값의 index, i는 a[j]보다 작은 수중에서 가장 큰 수의 index,
        //t는 a[j]보다 큰 수들중에서 가장 작은 수의 index.
        link[i] = j;
        link[j] = t;
    }
}

int main(void){

    
    Insertion1(a,link,1,8);

    for(int i=0; i<=8; i++)
        printf("%d ",a[i]);
    printf("\n");
    for(int i=0; i<=8; i++)
        printf("%d ",link[i]);
    printf("\n");

    return 0;


}
