//
// Created by Martin Lejko on 01/02/2024.
//

#ifndef ZAPOCTAK2_0_RENDER_H
#define ZAPOCTAK2_0_RENDER_H

#include "datatypes.h"
#include "tgaimage.h"
#include <memory>


void drawLine(const Vertex& v1, const Vertex& v2, const TGAColor& color, TGAImage& image);

void projectVerts(int width, int height, std::unordered_map<int, Vertex>& vertices);
Vec3 barycentric(const Vertex &v1, const Vertex &v2, const Vertex &v3, const Vertex &p);
//simple triangle drawing functions
void drawTriangle(const Vertex& v1, const Vertex& v2, const Vertex& v3, const TGAColor& color, TGAImage& image);
void drawTriangleZ(const Vertex& v1, const Vertex& v2, const Vertex& v3, std::vector<float>& zbuffer, const TGAColor& color, TGAImage& image);
void drawTriangleTextureZ(Vertex& v1, Vertex& v2, Vertex& v3, UVVector& uv1, UVVector& uv2, UVVector& uv3, float& intensity, std::vector<float>& zbuffer, TGAImage& texture, TGAImage& image);
#endif //ZAPOCTAK2_0_RENDER_H