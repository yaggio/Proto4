//
//  Stage.h
//  Proto4
//
//  Created by 矢島 新太郎 on 2015/04/16.
//
//

#ifndef __Proto4__Stage__
#define __Proto4__Stage__

#include "cocos2d.h"

class Stage : public cocos2d::Layer
{
protected:
  Stage();
  virtual ~Stage();
  bool init() override;
public:
  void update(float dt) override;
  
  // タイルマップ
  CC_SYNTHESIZE_RETAIN(cocos2d::TMXTiledMap *, _tiledMap, TiledMap);
  CREATE_FUNC(Stage)
};

#endif /* defined(__Proto4__Stage__) */
