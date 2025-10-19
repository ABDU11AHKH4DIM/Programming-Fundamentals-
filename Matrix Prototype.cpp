#include <stdio.h>

int main() {
   int matrix[3][3]; int rows = 3; int columns = 3;
   for(int i = 0 ; i < rows;i++){
       for(int j = 0;j < columns;j++){
       	   printf("enter array[%d][%d] : ",i,j);//save elements of matrix 
           scanf("%d",&matrix[i][j]);                                    
       }                                                                
   }
    printf("Orginal Matrix \n");
   for(int i = 0 ; i < rows;i++){
       for(int j = 0;j < columns;j++){
           printf("%d ",matrix[i][j]);//print the elements of matrix
       }
       printf("\n");
   }
   printf("Transpose Matrix\n");
   for(int i = 0 ; i < rows;i++){
       for(int j = 0;j < columns;j++){
           printf("%d ",matrix[j][i]);//print the elements of matrix
       }
       printf("\n");
   }
}