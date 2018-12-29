vector<int> compareTriplets(vector<int> a, vector<int> b) 
{
    int i = 0;
    int allie = 0;
    int bob = 0;
    std::vector<int>::iterator it;
    vector <int> score(2);
    
    while(i < a.size() && i < b.size())
    {
        it = score.begin();
        if(a[i] < b[i])
        {
           bob = 1 + bob;
           score[1] = bob;
           
        }
        
        else if(b[i] < a[i])
        {
            allie = 1 + allie;
            score[0] = allie;
        
        }
        else if(b[i] == a[i])
        {
            
        }
        i++;
    }
    return score;
}
