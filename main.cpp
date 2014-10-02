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
	if(grid[x][y]=='X' || grid[x][y]=='+')
	{
		return false;
	}
	return true;
}

bool traceMaze(char grid[6][6],int x,int y)
{
	if(!isValidPoint(grid,x,y))
	{
		return false;
	}
	if(grid[x][y]=='G')
	{
		return true;
	}

	grid[x][y] = '+';

	if(traceMaze(grid,x-1,y)){return true;}
	if(traceMaze(grid,x,y+1)){return true;}
	if(traceMaze(grid,x+1,y)){return true;}
	if(traceMaze(grid,x,y-1)){return true;}

	grid[x][y] = '.';

	return false;

}


int main()
{
	char grid[6][6] = {{'S','X','X','X','X','X'},{'.','.','.','.','.','X'},{'X','.','X','X','X','X'},{'X','.','X','X','X','X'},{'.','.','.','X','.','G'},{'X','X','.','.','.','X'}};
	cout<<"Initial grid is as follows :\n";
	printGrid(grid);
	cout<<"\nStarting at : (0,0)\nTracing the path to the Goal\n";
	cout<<traceMaze(grid,0,0)<<"\n";
	cout<<"\nFinal grid is as follows :\n";
	printGrid(grid);
	return 0;
}