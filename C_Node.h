#pragma once
#include "Libraries.h"

using namespace std;

class C_Node
{
	public:
		int Id;
		string Offense;
		string Name;
		C_Node* Left;
		C_Node* Right;
		C_Node* Previous;

		C_Node();
};