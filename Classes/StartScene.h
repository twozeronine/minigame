#pragma once
#include "cocos2d.h"

class StartScene : public cocos2d::Layer
{
public:
	// there's no 'id' in cpp, so we recommend returning the 
	static cocos2d::Scene* createScene();

	virtual bool init();

	void menuCloseCallback(cocos2d::Ref* pSender);

	CREATE_FUNC(StartScene);
};

