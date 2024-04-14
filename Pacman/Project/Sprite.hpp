#pragma once
#include "raylib.h"
class Spriter
{
private:
	Texture2D generalAssets;
	Texture2D mapAssets;
	Texture2D textAssets;
public:
	Spriter();
	void PutSprite(Texture2D tex_, Vector2 imagePos, Vector2 imageSize, Vector2 pos, int sizeMultiplier);
	void TakeLayoutFromFile();
};