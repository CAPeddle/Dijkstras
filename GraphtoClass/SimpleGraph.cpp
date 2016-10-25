#include "stdafx.h"
#include "SimpleGraph.h"

#include <time.h> 

//Specialisations
template class SimpleGraph<int>;


template <class aType>
SimpleGraph<aType>::SimpleGraph()
	: size_of_graph(default_size), density(default_density)
{
	cout << "Graph Size: " << size_of_graph << endl << "Denstity: " << density << endl;
}

template <class aType>
SimpleGraph<aType>::SimpleGraph(int size = default_size, float denstity = default_density)
	: size_of_graph(size), density(denstity)
{
	cout << "Graph Size: " << size_of_graph << endl << "Denstity: " << density << endl;
}

template <class aType>
SimpleGraph<aType>::~SimpleGraph()
{
}

//Create a bool function then an integral version 
template <>
void SimpleGraph<bool>::createGraph()
{

	bool **graph;
	srand(time(0));

	graph = new bool*[size_of_graph];

	for (int i = 0; i < size_of_graph; i++) {
		graph[i] = new bool[size_of_graph];
	}

	int probable = 0;
	for (int i = 0; i < size_of_graph; i++) {
		for (int j = i; j < size_of_graph; j++) {
			if (i == j) graph[i][j] = false;
			else graph[i][j] = graph[j][i] = (rand() % 100 < probable);
		}
	}

	for (int x = 0; x < size_of_graph; x++) {
		for (int y = 0; y < size_of_graph; y++) {
			if (graph[x][y]) cout << "*";
			else cout << '-';
		}
		cout << "\n\n";
	}
	
	cout << "Graph Size: " << size_of_graph << endl << "Denstity: " << density << endl;
}

template <class aType>
void SimpleGraph<aType>::createGraph()
{

	bool **graph;
	srand(time(0));

	graph = new bool*[size_of_graph];

	for (int i = 0; i < size_of_graph; i++) {
		graph[i] = new bool[size_of_graph];
	}

	int probable = 0;
	//cout << "please enter an integer value: ";
	//cin >> probable;

	while (probable > 0) {

		for (int i = 0; i < size_of_graph; i++) {
			for (int j = i; j < size_of_graph; j++) {
				if (i == j) graph[i][j] = false;
				else graph[i][j] = graph[j][i] = (rand() % 100 < probable);
			}
		}

		for (int x = 0; x < size_of_graph; x++) {
			for (int y = 0; y < size_of_graph; y++) {
				if (graph[x][y]) cout << "*";
				else cout << '-';
			}
			cout << "\n\n";
		}
	}
	cout << "Graph Size: " << size_of_graph << endl << "Denstity: " << density << endl;
}
