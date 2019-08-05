int countingValleys(int n, string s) {
int level = 0;
int valleys = 0;

   // Loop through string
   for (int i = 0; i < n; i++)
   {
      // Checking if we are going up
      if (s[i] == 'U')
      {
         // Checking if we are already going through a valley which is determined by our level
         // If the level is -1 then we are in a valley
         if (level == -1)
         {
            valleys++;
         }
   
      level++;
   }

    // Level decreases when we go down
    if (s[i] == 'D')
    {
        level--;
    }
  }

  cout << valleys << endl;
  return valleys;
}


