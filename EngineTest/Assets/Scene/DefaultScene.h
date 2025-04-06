#pragma once
#include "Core/Interface/IScene.h"



class DefaultScene : public Core::Interface::IScene
{
public:
	DefaultScene() = default;
	~DefaultScene() = default;

	bool Init() override 
	{
		SetName("DefaultScene");
		SetFilePath("EngineTest/Assets/Scene/DefaultScene.h");
		return true;
	}

	bool Start() override
	{
		Objects::GameObject* cube1 = new Objects::GameObject(this);
		cube1->SetName("Cube(1)");
		cube1->SetTransform(Core::CoreType::Transform(DirectX::XMFLOAT3(-1.100000, -0.000000, 5.000000), DirectX::XMFLOAT3(-0.900000, 0.000000, 0.000000), DirectX::XMFLOAT3(1.000000, 1.000000, 1.000000)));
		cube1->MakeMesh(Core::CoreType::PrimitivesMesh::PrimitivesMeshType::Cube, 0.513726, 0.012088, 0.012088, 0.976471);
		Objects::GameObject* pyramide1 = new Objects::GameObject(this);
		pyramide1->SetName("Pyramide(1)");
		pyramide1->SetTransform(Core::CoreType::Transform(DirectX::XMFLOAT3(-0.100000, -1.600000, 5.899999), DirectX::XMFLOAT3(-0.700000, 0.000000, -0.100000), DirectX::XMFLOAT3(1.000000, 1.000000, 1.000000)));
		pyramide1->MakeMesh(Core::CoreType::PrimitivesMesh::PrimitivesMeshType::Pyramide, 0.818627, 0.000000, 0.000000, 0.000000);
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
