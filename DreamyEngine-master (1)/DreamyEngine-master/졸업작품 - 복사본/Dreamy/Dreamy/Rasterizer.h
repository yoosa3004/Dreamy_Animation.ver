#pragma once
#include "D3D.h"

class Rasterizer
{
public:
	static Rasterizer* Get();
	static void Delete();

	void SetSolid();
	void SetWireframe();

	void SetOnCullMode();
	void SetOffCullMode();

private:
	static Rasterizer* instance;

	Rasterizer();
	~Rasterizer();

	ID3D11RasterizerState* solidState;
	ID3D11RasterizerState* wireframeState;
	ID3D11RasterizerState* onCullState;
	ID3D11RasterizerState* offCullState;
};