#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

    for(int i=0;i<4;i++){


        if(i%2==0){ 
           for(int j=0;j<3;j++){
               printf("%d ",arr[i][j]);
            }
        }else{
            for(int j=2;j>=0;j--){
                printf("%d ",arr[i][j]);
            }
        }


        printf("\n");
    }


    return 0;
}
