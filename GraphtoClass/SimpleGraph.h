#pragma once


#include <iostream>

using namespace std;

const int default_size = 20;
const float default_density = 30.0;

template <class aType>
class SimpleGraph
{
public:
	SimpleGraph();
	SimpleGraph(int size, float denstity);
	~SimpleGraph();

	void createGraph();

private:
	int size_of_graph;
	float density;
};

