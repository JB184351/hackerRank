// Complete the diagonalDifference function below.
int diagonalDifference(vector<vector<int>> arr) {
    
    // Creating two different sums to compare to each other
    
    // sum1 will be the sum of the primary digaonal
    int sum1 = 0;
    // sum2 will be the sum of the secondary diagonal
    int sum2 = 0;

    for(int i = 0; i < arr.size(); i++)
    {
        sum1 += arr[i][i];
    }
    
    int j = arr.size() - 1;
    for(int i = 0; i < arr.size(); i++)
    {
        sum2 += arr[i][j];
        j--;
    }
    
    // Getting the absolute based on the sums of diagonals
    int dif = 0;
    if(sum1 > sum2)
    {
        dif = sum1 - sum2;
    }
    
    else
    {
        dif = sum2 - sum1;
    }
    
    return dif;
}
