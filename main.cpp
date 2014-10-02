#include<iostream>
using namespace std;
void printGrid(char grid[6][6])
{
 	for(int i=0;i<6;i++)
 	{
 		for(int j=0;j<6;j++)
 		{
 			cout<<grid[i][j]<<" ";
 		}
 		cout<<"\n";
 	}
}

bool isValidPoint(char grid[6][6],int x,int y)
{	
	if(x<0 || x>5 || y<0 || y>5)
	{
		return false;
	}
	if(grid[x][y]=='#')
	{
		return false;
	}
	return true;
}

int main()
{
	char grid[6][6] = {{'S','#','#','#','#','#'},{'.','.','.','.','.','#'},{'#','.','#','#','#','#'},{'#','.','#','#','#','#'},{'.','.','.','#','.','G'},{'#','#','.','.','.','#'}};
	cout<<"Initial grid is as follows :\n";
	printGrid(grid);

	cout<<"\nStarting at : (0,0)\nTracing the path to the Goal\n";
	return 0;
}