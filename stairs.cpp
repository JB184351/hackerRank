#include <bits/stdc++.h>
#include <string> 

using namespace std;

// Complete the staircase function below.
void staircase(int n)
{
   // Still don’t know what the str function does
   string str(n, ' ');    
   for (int i = 1; i <= n; ++i) 
   {
      str[n-i] = '#';
         cout << str << endl;
   }

}

int main()
{
   int n;
   cin >> n;
   cin.ignore(numeric_limits <streamsize> ::max(), '\n');

   staircase(n);

   return 0;
}
