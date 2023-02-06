#include<stdio.h>

void print_array(int array[], int size);
void print_array(int array[], int size){
    printf("scores = ");
    for (int i=0; i<size; i++){
        printf("%d ", array[i]);
    }
}

int main(){
    const int SIZE = 6; //定数として配列のサイズを宣言                          
    int scores[SIZE] = {100, 60, 70, 100, 90, 80};
    //処理コード
    int i,j;
    int tmp;

    print_array(scores,SIZE);
    printf("\n" "result = ");

    for(int i=0; i<SIZE; i++){


        for(j= i+1; j<SIZE; j++){
            if(scores[i] <scores[j]){
                tmp = scores[i];
                scores[i] = scores[j];
                scores[j] = tmp;}
        }
    }

    for(int i=0; i<SIZE; i++){
            printf("%d ", scores[i]);
}
    return 0;
}