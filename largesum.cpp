// Complete the aVeryBigSum function below.
long aVeryBigSum(vector<long> ar) {

    // Creating a new vector to hold a larger number
    vector<long long> largeSum;
    // Creating long long to hold a sum of long long vector
    long long sum = 0;
    
    // Copying long vector data into a long long vector
    for(int i = 0; i < ar.size(); i++)
    {
        largeSum.push_back(ar[i]);
    }
    
    // Adding all values now in the long long vector to the long long sum
    for(std::vector<long long>::iterator it = largeSum.begin(); it != largeSum.end(); it++)
    {
        sum += *it;
    }
    
    return sum;

}