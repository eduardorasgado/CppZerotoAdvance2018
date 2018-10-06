#include "CartesianPlane.hpp"

void CartesianPlane::moveUp(int n)
{
	this->y += n;
}

void CartesianPlane::moveDown(int n)
{
	this->y -= n;
}

void CartesianPlane::moveRight(int n)
{
	this->x += n;
}

void CartesianPlane::moveLeft(int n)
{
	this->x -= n;
}

int CartesianPlane::getX()
{
	return this->x;
}

int  CartesianPlane::getY()
{
	return this->y;
}