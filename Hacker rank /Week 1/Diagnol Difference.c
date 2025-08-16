#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    int matrix [100][100];
      int leftsum=0;
      int rightsum=0;
      
    for(int i=0;i<n;i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
        
        
    }
       
       for(int i=0; i<n;i++)
        {
            leftsum+=matrix[i][i];
            rightsum+=matrix[i][n-i-1];
            
            
        }
        int diff= leftsum-rightsum;
        if (diff < 0) diff = -diff;
        printf("%d",diff);
} 
        
        
        
        
        
        
    
        
  
    
    
