function matrixElementsSum(matrix) {
    var i,j,p,k,l;
    var sum=0;
for(i=0;i<matrix.length;i++)
    for(j=0;j<matrix[0].length;j++)
        {
            if(matrix[i][j]== 0)
             for(p=i;p<3;p++)
                 {
                     matrix[p][j] = 0;
                 }
        }
    for(k=0;k<matrix.length;k++)
        for(l=0;l<matrix[0].length;l++)
            sum=sum+matrix[k][l];
    return sum;
        
}
