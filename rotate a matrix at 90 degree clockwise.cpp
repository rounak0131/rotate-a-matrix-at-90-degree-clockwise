#include <stdio.h>

int main()
{
   
  
   int temp;
   int n;
  printf("enter number of rows &coloumn :-");
  scanf("%d",&n);
  int a[n][n];
  
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&a[i][j]);
    }
    }
    printf("\n");
  
        for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
           temp=a[i][j];
           a[i][j]=a[j][i];
           a[j][i]=temp;
         
    }
    printf("\n");
    }
     for(int i=0; i<n; i++){
          int  j=0;
          int  k=n-1;
             while(j<k){
               temp=a[i][j];
                  a[i][j]=a[i][k];
                  a[i][k]=temp;
                    j++;
                    k--;
        }
     }
         
     for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
          printf(" %d ",a[i][j]);
    }
    printf("\n");
    }
    return 0;
}
