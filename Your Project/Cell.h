//////////////////////////////////////////////////////////////
// File: GameLoop.h
// Author: Ben Odom and Austin Morrell
// Brief: Base class for all cells/pellets. Holds mostly
//	attributes
//////////////////////////////////////////////////////////////
#ifndef _CELL_H_
#define _CELL_H_

#include "BoundingCircle.h"

class Cell
{
protected: 
	Vector2D<float> Pos;
	float Radius;
	BoundingCircle* BC;
public:
	Vector2D<float> GetPos();
	float GetRadius();
	void SetPos();
	void SetRadius();

	Cell();
	Cell(Vector2D<float>, float);
	~Cell();
};

#endif _CELL_H_