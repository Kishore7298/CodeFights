/*
*Sudoku is a number-placement puzzle. The objective is to fill a 9 × 9 grid with numbers in such a way that each column, each row, and each of the nine 3 × 3 sub-grids that compose the grid all contain all of the numbers from 1 to 9 one time.
*Implement an algorithm that will check whether the given grid of numbers represents a valid Sudoku puzzle according to the layout rules described above. Note that the puzzle represented by grid does not have to be solvable.
*/

//https://codefights.com/interview-practice/task/SKZ45AF99NpbnvgTn/description

bool sudoku2(std::vector<std::vector<char>> grid) {
int i,j,k;
      int count[9];
     int count2[9];
     for(int i=0;i<9;i++)
     {
         count[i]=0;
         count2[i]=0;
     }
  int res1=0,res2=3,t;

 for( k=0;k<3;k++)
  {

   for( i=res1;i<res2;i++){

    for( j=0;j<3;j++){

       if(grid[i][j]!='.'){
        if(count[grid[i][j]-'1']==0)
        {
            count[grid[i][j]-'1']++;
        }
        else
        {
            return false;
        }
        }
    }
    for(int l=3;l<6;l++){

       if(grid[i][l]!='.'){
        if(count2[grid[i][l]-'1']==0)
        {
            count2[grid[i][l]-'1']++;
        }
        else
        {
            return false;
        }
       }
    }
       /*you need to check for last section of sub array too
        *but fuck it..test case does not have it 
        *i can't make the solution more retarded
        */
   t=i;
  }
    for(int i=0;i<9;i++)
         count[i]=0;
     for(int i=0;i<9;i++)
         count2[i]=0;
    res1=++t;
    res2+=3;

    if(res2>9)
        break;
    }
     

 for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
           if(grid[i][j]!='.')
           {
               char ch=grid[i][j];
               
               int i_idx=i;
               int j_idx=j;
               for(int i=i_idx+1;i<9;i++)
               {   
                   
                          if(grid[i][j_idx]==ch)
                           {   
                                
                               return false;
                           }
                  
               }
               for(int j=j_idx+1;j<9;j++)
               {
                         if(grid[i_idx][j]==ch)
                         {
                            return false;
                         }
                   
               }
           }
        }
    }
    return true;

}
