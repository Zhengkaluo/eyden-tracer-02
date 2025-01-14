#pragma once

#include "IShader.h"

/**
 * @brief Flat shader class
 */
class CShaderFlat : public IShader
{
public:
	/**
	 * @brief Constructor
	 * @details This is a texture-free and light-source-free shader
	 * @param color The color of the object
	 */
	CShaderFlat(const Vec3f& color) : m_color(color) {}
  
	virtual Vec3f shade(const Ray& ray = Ray()) const override
	{
		// --- PUT YOUR CODE HERE ---
		return m_color;
		//return RGB(0, 0, 0);
	}
	Vec3f GetColor() { return m_color; };

	Vec3f m_color;
};
