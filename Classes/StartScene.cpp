#include "StartScene.h"

USING_NS_CC;

Scene* StartScene::createScene()
{
	// 'scene' is an autorelease object
	auto scene = Scene::create();

	// 'layer' is an autorelease object
	auto layer = StartScene::create();

	// add layer as a child to scene
	scene->addChild(layer);

	// return the scene

	return scene;
}

// on "init" you need to initialize your instance
bool StartScene::init()
{
	//////////////
	// 1. super init first
	if (!Layer::init())
	{
		return false;
	}

	// Director를 가져옴.
	auto director = Director::getInstance();

	// OpenGLView를 가져옴.
	auto glview = director->getOpenGLView();

	// OpenGLView에서 DesignResolutionSize를 가져옴.
	auto winSize = glview->getDesignResolutionSize();

	/* 배경 이미지 back을 넣어줌*/
	//Sprite를 생성하여 이미지를 불러옴.
	auto back = Sprite::create("title_bg.png");

	// back을 해당 포인트에 위치시킴. 화면의 정중앙에 위치하도록함.
	back->setPosition(Point(winSize.width / 2, winSize.height / 2));

	// this에 back을 자식 노드로 추가함.
	this->addChild(back);

	/* 타이틀 title을 넣습니다. */
	//Sprite를 생성하여 이미지를 불러옵니다.
	auto title = Sprite::create("title_text.png");

	// 앵커 포인트를 Point(0.5f, 1)로 변경
	title->setAnchorPoint(Point(0.5f, 1));

	//title을 해당 포인트에 위치시킵니다. 화면의 가로 중앙에 위치하도록 했습니다.
	title->setPosition(Point(winSize.width / 2, winSize.height - 30));

	//this에 title을 자식 노드로 추가하였습니다.
	this->addChild(title);

	/*케릭터 character을 넣습니다.*/
	//Sprite를 생성하여 이미지를 불러옵니다.
	auto character = Sprite::create("title_character.png");

	//character를 해당 포인트에 위치시킵니다. 화면의 정중앙에 위치하도록 함.
	character->setPosition(Point(winSize.width / 2, winSize.height / 2));

	//this에 character를 자식 노드로  추가
	this->addChild(character);



	return true;
}