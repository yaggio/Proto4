//
//  Stage.cpp
//  Proto4
//
//  Created by yaggio on 2015/04/16.
//
//

#include "Stage.h"

USING_NS_CC;

Stage::Stage()
: _tiledMap(nullptr)
{
}

Stage::~Stage()
{
  CC_SAFE_RELEASE_NULL(_tiledMap);
}

bool Stage::init()
{
  if ( !Layer::init() ) return false;
  
  // マップファイルからノードを
  auto map = TMXTiledMap::create("map/stage.tmx");
  this->addChild(map);
  this->setTiledMap(map);
 
  this->scheduleUpdate();
  
  return true;
}

void Stage::update(float dt)
{
}