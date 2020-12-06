#include "Player.h"
Player::Player(float x, float y, int h, int s, Image image) {
	coordinateX = x;
	coordinateY = y;
	health = h;
	stamina = s;
	this->image = image;
	texture.loadFromImage(this->image);
	sprite.setTexture(texture);
}
void Player::UpdateCoordinates() {

}
float Player::getCoordinateX(){
	return coordinateX;
}
float Player::getCoordinateY() {
	return coordinateY;
}
void Player::Move(float x, float y) {
	sprite.move(x, y);
	coordinateX += x;
	coordinateY += y;
}
Sprite Player::getSprite() {
	return sprite;
}
void Player::setPosition(float x, float y) {
	sprite.setPosition(x, y);
}
void Player::setSprite(Image i) {
	image = i;
	texture.loadFromImage(i);
	sprite.setTexture(texture);
}
// Блок с хп и стаминой 
void Player::setHP(int quantity) {
	health = quantity;
}
void Player::setStamina(int quantity) {
	stamina = quantity;
}
int Player::getHP() {
	return health;
}
int Player::getStamina() {
	return stamina;
}
// Блок с хп и стаминой