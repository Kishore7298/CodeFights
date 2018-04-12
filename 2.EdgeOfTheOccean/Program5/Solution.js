function matrixElementsSum(matrix) {
    var i,j,p,k,l;
    var sum=0;
for(i=0;i<=3;i++)
    for(j=0;j<=4;j++)
        {
            if(matrix[i][j]== 0)
             for(p=i;p<3;p++)
                 {
                     matrix[p][j] = 0;
                 }
        }
    for(k=0;k<3;k++)
        for(l=0;l<4;l++)
            sum=sum+matrix[k][l];
    return sum;
        
}
