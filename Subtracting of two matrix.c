#include<stdio.h>
int main(){
          int n;
          scanf("%d",&n);

          int mtrx1[n][n];
          int mtrx2[n][n];

          int res_mtrx[n][n];

        //logic for taking input of two matrix

          for(int a=0;a<n;a++){
                for(int b=0;b<n;b++){
                    scanf("%d",&mtrx1[a][b]);
                }
          }


          for(int x=0;x<n;x++){
             for(int y=0;y<n;y++){
                scanf("%d",&mtrx2[x][y]);
             }
          }



          //logic for addition

          for(int i=0;i<n;i++){
              for(int j=0;j<n;j++){
                   res_mtrx[i][j]=mtrx1[i][j]-mtrx2[i][j];
                   printf("%d ",res_mtrx[i][j]);
              }
              printf("\n");
          }


    return 0;

}