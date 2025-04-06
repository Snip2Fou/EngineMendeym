#pragma once
#include "Core/Interface/IScene.h"



class SceneFinal : public Core::Interface::IScene
{
public:
	SceneFinal() = default;
	~SceneFinal() = default;

	bool Init() override 
	{
		SetName("SceneFinal");
		SetFilePath("EngineTest\Assets\Scene\SceneFinal.h");
		return true;
	}

	bool Start() override 
	{
		Objects::GameObject* sphere1 = new Objects::GameObject(this);
		sphere1->SetName("Sphere(1)");
		sphere1->SetTransform(Core::CoreType::Transform(DirectX::XMFLOAT3(-0.100000, -0.400000, 7.399998), DirectX::XMFLOAT3(-0.900000, 0.000000, 0.000000), DirectX::XMFLOAT3(1.000000, 1.000000, 1.000000)));
		sphere1->MakeMesh("EngineTest/Assets/Mesh/sphere.obj");
		return true;
	}

	bool Update() override 
	{
		return true;
	}

	bool Stop() override 
	{
		return true;
	}

	bool Destruct() override 
	{
		return true;
	}

private:

};
