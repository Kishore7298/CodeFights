/*
Note: Try to solve this task in-place (with O(1) additional memory), since this is what you'll be asked to do during an interview.
You are given an n x n 2D matrix that represents an image. Rotate the image by 90 degrees (clockwise).
*/

void swap(int &a,int &b){
      int temp=a;
      a=b;
      b=temp;
}
std::vector<std::vector<int>> rotateImage(std::vector<std::vector<int>> a) {

      int n = a.size();
      for(int i=0;i<n;i++)
      {
            for(int j=i;j<n;j++)
            {
                  swap(a[i][j],a[j][i]);
            }
      }
      int k=n-1;
      for(int i=0;i<n;i++){
            for(int j=0;j<n/2;j++)
            {
                  swap(a[i][j],a[i][k]);
                  k--;
            }
            k=n-1;
      }
      return a;
}
