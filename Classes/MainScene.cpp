//
//  MainScene.cpp
//  Proto4
//
//  Created by 矢島 新太郎 on 2015/04/15.
//
//

#include "MainScene.h"

USING_NS_CC;

Scene* MainScene::createScene()
{
  auto scene = Scene::create();
  auto layer = MainScene::create();
  scene->addChild(layer);

  return scene;
}

bool MainScene::init()
{
  if ( !Layer::init() ) return false;

  auto stage = Stage::create();
  this->addChild(stage);
  this->setStage(stage);
  
  this->scheduleUpdate();
  return true;
}


MainScene::MainScene()
: _stage(nullptr)
{
}
MainScene::~MainScene()
{
  CC_SAFE_RELEASE_NULL(_stage);
}
void MainScene::update(float dt)
{
}