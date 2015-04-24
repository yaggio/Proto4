//
//  Platoon.h
//  Proto4
//
//  Created by yaggio on 2015/04/21.
//
//

#ifndef __Proto4__Platoon__
#define __Proto4__Platoon__

#include "cocos2d.h"

class Platoon : public cocos2d::Sprite
{
  protected:
    bool init() override;
  public:
    void update(float dt) override;
     CREATE_FUNC(Platoon);
  
};

#endif /* defined(__Proto4__Platoon__) */
