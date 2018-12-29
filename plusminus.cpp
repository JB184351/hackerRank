void plusMinus(vector<int> arr)
{
    float total = 0;
    float pos = 0;
    float neg = 0;
    float zero = 0;
    float posRatio = 0.0;
    float negRatio = 0.0;
    float zeroRatio = 0.0;
    
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] > 0)
        {
            pos++;
        }
        else if(arr[i] < 0)
        {
            neg++;    
        }
        else
        {
            zero++;
        }
        
        total++;
        
    }
    
    posRatio = pos / total;
    negRatio = neg / total;
    zeroRatio = zero / total;
    
    cout << posRatio << endl;
    cout << negRatio << endl;
    cout << zeroRatio << endl;
    
}
