#include <vector>
#include <iostream>
using namespace std;


int findCenter(vector<vector<int>>& edges)
{
	// parameters: edges: a 2D vector representing the edges
	// like [[1, 2], [1, 3], [1, 4]]


	// لو لقيت ايدج واحده علي الاقل مشتركه فيهم نود واحد يبقي النود ده هو المركز

	// First edge
	int a = edges[0][0]; //1
	int b = edges[0][1]; //2

	// second edge
	int c = edges[1][0]; // 1
	int d = edges[1][1]; // 3

	//  //third edge
	//  int e = edges[2][0]; // 1
	//  int f = edges[2][1]; // 4

	// The center node must be connected to all other nodes
	// , so it must appear in both edges.
	if (a == c || a == d) return a;


	return b;  // If a is not the center, then b must be the center.


}


//	int main()
//	{
//		vector<vector<int>> edges = { {1, 2}, {1, 3}, {1, 2} };
//	
//		int center = findCenter(edges);
//		cout << center << endl;
//		return 0;
//	}



