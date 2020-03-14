# OpenGL Boilerplate Project using SDL2, written in C++
Boilerplate example project written to be used as base for future graphical endeavors. Includes the handy libraries stb_image and stb_image_write for any image writing needs, and tinyobjloader to load obj files.  
Inbuilt support for two rendering types: ScreenTexture, which is an easy way to just render a bitmap to the screen, and Rasterizer, which supports very simple colored 3D models.
  
## Dependencies  
**SDL2** - for creating OpenGL context and handling input  
**GLEW** (static) - needed for OpenGL Contex  
**GLM** - for vector/matrix math  
**STB** (included as submodule) - for loading and saving images  
**TinyObjLoader** (included as submodule) - for loading .obj files

## Build instructions   
1. Install the required dependencies: SDL2, GLEW and GLM.  `apt-get install libsdl2-dev, libglm-dev, libglew-dev`  
2. Clone the repo and the submodules (`git submodule update --init --recursive`)
3. Run `cmake` (on Windows you have to manually provide the locations of SDL2, GLM and GLEW through CMake root flags)  
4. You can now compile/modify the project  
