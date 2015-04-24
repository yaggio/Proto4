//
//  Platoon.cpp
//  Proto4
//
//  Created by yaggio on 2015/04/21.
//
//

#include "Platoon.h"

USING_NS_CC;


bool Platoon::init()
{
  if (!Sprite::initWithFile("map/object.png")) return false;

  this->scheduleUpdate();
  
  return true;
}

void Platoon::update(float dt)
{
}