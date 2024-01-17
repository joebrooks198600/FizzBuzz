// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
	int n;
	string s = "";
	//hash table for c++
	std::unordered_map<int, std::string> conditions;

	conditions[3] = "Fizz";
	conditions[5] = "Buzz";
	conditions[7] = "Jazz";
	cin >> n;

	for (int i = 1; i <= n; i++) 
	{
		for(const auto& entry : conditions)
		{
			if(i% entry.first == 0)
			{
				s += entry.second;
			}
		}
		if (s.empty()) {
			cout << i << endl;
		}
		else {
			cout << s << endl;
		}
	}
}


