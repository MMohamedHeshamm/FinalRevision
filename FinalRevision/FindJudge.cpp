#include <vector>
#include <iostream>
using namespace std;

int findJudge(int n, vector<vector<int>>& trust)
{
	// parameters: n: the number of people in the town
	// trust: a 2D vector where trust[i] = [a, b]
	// indicates that person a trusts person b

	//vector to store trust score for each person but start from 1 to n
	int j = trust[0][1];
	for (auto& t : trust)
	{
		if (j != t[1])
			return -1;
	}
	return j;



	vector<int> trustScore(n + 1, 0);
	// Update trust score based on the trust relationships
	for (auto& t : trust) {
		int a = t[0]; // a trusts b
		int b = t[1]; // b is trusted by a

		trustScore[a]--; // a trusts someone → decrease score
		trustScore[b]++; // b is trusted → increase score
	}

	// Find the judge by checking who has trusted by everyone
	for (int i = 1; i <= n; i++)
	{
		if (trustScore[i] == n - 1) return i;
	}

	return -1; //if No judge found return -1



	//Why decrease score for the person who trusts someone else?
	// 
	// Because the town judge trusts nobody,
	// so if a person trusts someone else,
	// they cannot be the judge.
	// By decreasing their score,
	// we can easily identify the judge as the one with a score of n - 1 
	// (trusted by everyone else and trusts no one).


}



//	int main()
//	{
//		// Example 1
//		int n1 = 2;
//		vector<vector<int>> trust1 = { {1,2} };
//	
//		cout << "Town Judge is: " << findJudge(n1, trust1) << endl; // Output: 2
//	
//		// Example 2
//		int n2 = 3;
//		vector<vector<int>> trust2 = { {1,3},{2,3} };
//		cout << "Town Judge is: " << findJudge(n2, trust2) << endl; // Output: 3
//	
//		// Example 3
//		int n3 = 3;
//		vector<vector<int>> trust3 = { {1,3},{2,3},{3,1} };
//		cout << "Town Judge is: " << findJudge(n3, trust3) << endl; // Output: -1
//	
//	}










