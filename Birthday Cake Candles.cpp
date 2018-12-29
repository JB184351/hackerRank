#include <iostream>
#include <vector>

using namespace std;
int main()
{
	vector <int> candles;
	
	candles.push_back(18);
	candles.push_back(90);
	candles.push_back(90);
	candles.push_back(13);
	candles.push_back(90);
	candles.push_back(75);
	candles.push_back(90);
	candles.push_back(8);
	candles.push_back(90);
	candles.push_back(43);
	
	
	int max = candles[0];
	int numCandles = 0;
	
	for (int i = 0; i < candles.size(); i++)
	{		
		if (max > candles[i])
			// do nothing
			;
		
		else
		{
			max = candles[i];
		}	
	}
	
	for (int i = 0; i < candles.size(); i++)
	{
		if (candles[i] == max)
			numCandles++;
	}
	
	cout << "Susie can blow out " << numCandles << " candle(s)." << endl;
}