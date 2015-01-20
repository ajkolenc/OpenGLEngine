#pragma once

#include <vector>
#include <string>
#include "Transform.h"
#include "Mesh.h"
#include "Component.h"

class Node
{
public:
	Node();
	Node(std::string name);
	~Node();

private:
	std::string name;
	std::vector<Component> components;
};