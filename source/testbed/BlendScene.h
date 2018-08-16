


#ifndef INCLUDED_BLEND_SCENE
#define INCLUDED_BLEND_SCENE

#pragma once

#include "Scene.h"
#include "Resource.h"
#include "resource_ptr.h"

class BlendScene : public Scene
{
private:

    resource_ptr<Geometry> geometry;
    resource_ptr<Material> material;

public:
    BlendScene(const BlendScene&) = delete;
    BlendScene& operator =(const BlendScene&) = delete;

    BlendScene();

    void switchRenderer(Renderer* renderer);
    void draw(RendereringContext* context) const;

	void save(Config& config) const override {}
};


#endif  // INCLUDED_INDEXED_TRIANGLE_MESH
