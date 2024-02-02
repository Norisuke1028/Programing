#include "Player.h"
#include"../Utility/InputControl.h"
#include"Dxlib.h"

Player::Player() : is_active(false), image(NULL), location(0.0f), box_size(0.0f),
angle(0.0f), speed(0.0f), fuel(0.0f), barrier_count(0),
barrier(nullptr)
{

}

Player::~Player()
{

}

//‰Šú‰»ˆ—
void Player::Initialize()
{
	is_active = true;
	location = Vector2D(320.0f, 380.0f);

}
