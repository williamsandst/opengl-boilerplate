#pragma once


#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

#include "FileHandler.h"

#define GLEW_STATIC
#include "GL/glew.h"

#include "glm/glm.hpp"

#include "SDL_opengl.h"

class Shader
{
public:
	//Shader ID
	unsigned int ID;
	const char* vertexPath;
	const char* fragmentPath;

	//Constructor loads shader files
	Shader();
	Shader(const char* vertexPath, const char* fragmentPath);
	~Shader();

	//Create the shader
	void create();
	//Hot reloading support
	void reload();

	//Use the shader
	void use();

	//Functions for setting uniforms in the shaders
	void setInt(std::string name, int value) const;
	void setBool(std::string name, bool value) const;
	void setFloat(std::string name, float value) const;
	void setVec2(const std::string &name, const glm::vec2 &value) const;
	void setVec2(const std::string &name, float x, float y) const;
	void setVec3(const std::string &name, const glm::vec3 &value) const;
	void setVec3(const std::string &name, float x, float y, float z) const;
	void setVec4(const std::string &name, const glm::vec4 &value) const;
	void setVec4(const std::string &name, float x, float y, float z, float w) const;
	void setMat2(const std::string &name, const glm::mat2 &mat) const;
	void setMat3(const std::string &name, const glm::mat3 &mat) const;
	void setMat4(const std::string &name, const glm::mat4 &mat) const;
private:
	void printIVSuccess(unsigned int shader, GLenum status);
};

