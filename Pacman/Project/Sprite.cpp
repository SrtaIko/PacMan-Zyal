#include "Sprite.hpp"

Spriter::Spriter()
{
	generalAssets = LoadTexture("Assets/General_Spritesheet.png");
	mapAssets = LoadTexture("Assets/Pacman_MapSpritesheet.png");
	textAssets = LoadTexture("Assets/Pacman_TextSpritesheet.png");
}

void Spriter::PutSprite(Texture2D tex_, Vector2 imagePos, Vector2 imageSize, Vector2 pos, int sizeMultiplier)
{
	Rectangle source = { imagePos.x, imagePos.y, imageSize.x, imageSize.y };
	Rectangle dest = { pos.x * sizeMultiplier, pos.y * sizeMultiplier, imageSize.x * sizeMultiplier, imageSize.y * sizeMultiplier };
	DrawTexturePro(tex_, source, dest, Vector2{0,0}, 0, WHITE);
}

void Spriter::TakeLayoutFromFile()
{

}
