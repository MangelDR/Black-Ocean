#include "scene.h"

Scene::Scene() {
	this->root = new GameObject();
}
Scene::~Scene() {
	this->root->clear();
	delete this->root;
}
void Scene::render() {
	this->root->render();
	this->g_bulletManager->renderOptimized();
	this->g_bulletEnemyManager->renderBad();
	//this->g_bulletManager->renderBad();
	
	this->hud->render();
}
void Scene::update(float dt) {
	this->root->update(dt);
	this->g_bulletManager->update(dt);
	this->g_bulletEnemyManager->update(dt);
	//this->checkCollions();
}