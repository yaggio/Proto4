//
//  MainScene.h
//  Proto4
//
//  Created by 矢島 新太郎 on 2015/04/15.
//
//

#ifndef __Proto4__MainScene__
#define __Proto4__MainScene__

#include "cocos2d.h"
#include "Stage.h"

class MainScene : public cocos2d::Layer
{
protected:
  MainScene();
  virtual ~MainScene();
  virtual bool init();
public:
  static cocos2d::Scene* createScene();
  void update(float dt) override;
  CREATE_FUNC(MainScene);
  // ステージ
  CC_SYNTHESIZE_RETAIN(Stage *, _stage, Stage);
};

#endif /* defined(__Proto4__MainScene__) */
