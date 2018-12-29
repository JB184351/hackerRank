#include <iostream>
#include <string>

using namespace std;
int main()
{
	string ampm = "12:11:22PM";
	
	// Getting the last two characters in a string
	string ampmcheck = ampm.substr(ampm.length() - 2);
	
	// Getting the first two characters in a string
	string firsttwo = ampm.substr(0, 2);
	
	cout << ampmcheck << endl;
	cout << firsttwo << endl;
	
	// Checking if it is 12am
	if (ampmcheck == "am" || ampmcheck == "AM")
	{
		if (firsttwo == "12")
		{
			ampm.replace(0, 2, "00");
		}
	}
	
	// Otherwise replace all pm times with appropriate military times
	else
	{
		if (firsttwo == "01")
		{
			ampm.replace(0, 2, "13");
		}
		
		else if (firsttwo == "02")
		{
			ampm.replace(0, 2, "14");
		}
		
		else if (firsttwo == "03")
		{
			ampm.replace(0, 2, "15");
		}
		
		else if (firsttwo == "04")
		{
			ampm.replace(0, 2, "16");
		}
		
		else if (firsttwo == "05")
		{
			ampm.replace(0, 2, "17");
		}
		
		else if (firsttwo == "06")
		{
			ampm.replace(0, 2, "18");
		}
		
		else if (firsttwo == "07")
		{
			ampm.replace(0, 2, "19");
		}
		
		else if (firsttwo == "08")
		{
			ampm.replace(0, 2, "20");
		}
		
		else if (firsttwo == "09")
		{
			ampm.replace(0, 2, "21");
		}
		
		else if (firsttwo == "10")
		{
			ampm.replace(0, 2, "22");
		}
		
		else if (firsttwo == "11")
		{
			ampm.replace(0, 2, "23");
		}
		
	}
	
	// Also don't forget to delete the AM or PM
	ampm.replace (ampm.length() - 2, ampm.length(),  "  ");
	
	cout << ampm;
}