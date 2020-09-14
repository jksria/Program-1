#include <queue>
#include <vector>
#include "pch.h"
#include <list>
#include <fstream>

using namespace std;

class Coordinates
{
	int V;
	list<int> *adjanceny;

public:
	Coordinates(int X);

	void addCoordinates(int x, int y);
	void cities(int s);
};

void Coordinates::addCoordinates(int x, int y)
{
	adjancency[x].push_back(y);
}

void Coordinates::cities(int open_nodes, edges)
{
	vector <int> edges;
	vector < vector <int> > connected(open_nodes + 1, edges); //for the adjancencies.txt

	for (int i = 0; i < open_queue; i++)
	{
		connected[x].push_back(y);
		connected[y].push_back(x);
	}

	bool inspect[open_nodes + 1];
	for (int i = 0; i < open_nodes + 1; i++)
	{
		inspect[i] = false;

	}
}

void Coordinates::cities(int s)
{
	bool *visited = new bool[X];
	for (int i = 0; i < V; i++)
		visited[i] = false;

	list<int> queue;

	visited[s] = true;
	queue.push_back(s);

	queue <int> travel;
	travel.push(21); //travel root first.
	inspect[21] = true; //root check[1]
	int queue_size = 0;
	int travel_distance = 0;
	while (!travel.empty()) //empty, not yet travelled. 
	{
		cout << "City travelled " << travel_distance << endl;
		queue_size = travel.size();
		while (queue_size--)
		{
			int x = travel.front(); //bring the next queue up front.
			travel.pop();			// pop selected queue.
			cout << x << endl;
			for (int j = 0; j < connected[x].size(); j++)
			{
				if (!inspect[connected[x][j]])
				{
					inspect[connected[x][j]] = true;
					travel.push(connected[x][j]);
				}
			}
		}
		travel_distance++;
	}
}


int main()
{
	Coordinates(1);
		g.addCoordinates(Anthony, Bluff_City, Kiowa, Attica, Harper)
		g.addCoordinates(Attica, Medicine_Lodge)
		g.addCoordinates(Augusta, Wenfield, Andover, Leon, Wichita)
		g.addCoordinates(Caldwell, South_Haven, Bluff_City, Mayfield)
		g.addCoordinates(El_Dorado, Towanda, Andover, Augusta, Emporia)
		g.addCoordinates(Florence, McPherson, Hillsboro, El_Dorado)
		g.addCoordinates(Greensburg, Coldwater, Pratt)
		g.addCoordinates(Harper, Anthony, Argonia, Rago)
		g.addCoordinates(Hutchinson, Newton, Haven)
		g.addCoordinates(Junction_City, Abilene, Marion, Manhattan, Toeka)
		g.addCoordinates(Kingman, Cheney, Pratt, Hutchinson)
		g.addCoordinates(Marion, McPherson, Newton, Emporia)
		g.addCoordinates(Mayfield, Wellington, Caldwell, Argonia)
		g.addCoordinates(McPherson, Salina, Lyons, Hillsboro)
		g.addCoordinates(Medicine_Lodge, Attica, Kiowa, Coldwater)
		g.addCoordinates(Newton, McPherson, Hutchinson, Florence)
		g.addCoordinates(Rago, Viola, Sawyer)
		g.addCoordinates(Salina, Abilene, Hays)
		g.addCoordinates(Sawyer, Pratt, Zenda)
		g.addCoordinates(Wellington, Oxford, Mayfield, Mulvane, South_Haven)
		g.addCoordinates(Wichita, Derby, Clearwater, Cheney, Mulvane, Andover, Newton El_Dorado)

		x, y = Attica, Kiowa

		return = new_graph.cities(x, y)

		cout << "From" x, "to" y, "is");
		cities(1);
		return 0;
}
