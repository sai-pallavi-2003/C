#include <stdio.h>

int main (void){
  
  int arr1[50][50],arr2[50][50],i,j,r,c;
 
       printf("Input the rows\n");
       scanf("%d",&r);
       printf("input the columns\n");
       scanf("%d",&c);

       printf("Input elements in the  matrix :\n");
       for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
	           printf("element[%d][%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        } 

 	 printf("\nThe matrix is :\n");
  		for(i=0;i<r;i++)
    		{
      		printf("\n");
      		for(j=0;j<c;j++)
          	printf("%d\t",arr1[i][j]);
    		}
  
  for(i=0;i<r;i++)
     {
      for(j=0;j<c;j++)
            {
                   arr2[j][i]=arr1[i][j];
            }
      }

      printf("\n\nThe transpose of a matrix is : ");
      for(i=0;i<c;i++){
      printf("\n");
      for(j=0;j<r;j++){
           printf("%d\t",arr2[i][j]);
      }
  }
      printf("\n\n");
      return 0;
}



