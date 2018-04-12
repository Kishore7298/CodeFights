function matrixElementsSum(matrix) {
    
    var sum=0;
for(var i=0;i<matrix.length;i++)
    for(var j=0;j<matrix[0].length;j++)
        {
            if(matrix[i][j]== 0)
             for(p=i;p<matrix.length;p++)
                 {
                     matrix[p][j] = 0;
                 }
        }
    for(var k=0;k<matrix.length;k++)
        for(var l=0;l<matrix[0].length;l++)
            sum=sum+matrix[k][l];
    return sum;
        
}
