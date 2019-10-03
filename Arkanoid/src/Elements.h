#pragma once
#include "raylib.h"
struct Player
{		
	int speed;
	int life;
	Vector2 position;
	Vector2 size;
	Rectangle hitbox;
};

struct Ball 
{
	Vector2 position;
	Vector2 speed;
	int radius;
	bool active;
};

struct Block
{
	Vector2 position;
	bool active;
};