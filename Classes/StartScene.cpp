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

	// Director�� ������.
	auto director = Director::getInstance();

	// OpenGLView�� ������.
	auto glview = director->getOpenGLView();

	// OpenGLView���� DesignResolutionSize�� ������.
	auto winSize = glview->getDesignResolutionSize();

	/* ��� �̹��� back�� �־���*/
	//Sprite�� �����Ͽ� �̹����� �ҷ���.
	auto back = Sprite::create("title_bg.png");

	// back�� �ش� ����Ʈ�� ��ġ��Ŵ. ȭ���� ���߾ӿ� ��ġ�ϵ�����.
	back->setPosition(Point(winSize.width / 2, winSize.height / 2));

	// this�� back�� �ڽ� ���� �߰���.
	this->addChild(back);

	/* Ÿ��Ʋ title�� �ֽ��ϴ�. */
	//Sprite�� �����Ͽ� �̹����� �ҷ��ɴϴ�.
	auto title = Sprite::create("title_text.png");

	// ��Ŀ ����Ʈ�� Point(0.5f, 1)�� ����
	title->setAnchorPoint(Point(0.5f, 1));

	//title�� �ش� ����Ʈ�� ��ġ��ŵ�ϴ�. ȭ���� ���� �߾ӿ� ��ġ�ϵ��� �߽��ϴ�.
	title->setPosition(Point(winSize.width / 2, winSize.height - 30));

	//this�� title�� �ڽ� ���� �߰��Ͽ����ϴ�.
	this->addChild(title);

	/*�ɸ��� character�� �ֽ��ϴ�.*/
	//Sprite�� �����Ͽ� �̹����� �ҷ��ɴϴ�.
	auto character = Sprite::create("title_character.png");

	//character�� �ش� ����Ʈ�� ��ġ��ŵ�ϴ�. ȭ���� ���߾ӿ� ��ġ�ϵ��� ��.
	character->setPosition(Point(winSize.width / 2, winSize.height / 2));

	//this�� character�� �ڽ� ����  �߰�
	this->addChild(character);



	return true;
}