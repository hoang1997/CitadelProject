#pragma once
#include <string>
#include <vector>
#include "layer.h"
class scenario
{
private:
	vector<layer>layerCollection;

public:
	void setLayerCollection();

	vector<layer> getLayerCollection();

	void printLayers(vector<layer> layers);
};

