# OpenGL Boilerplate Project using SDL2, written in C++
Boilerplate example project written to be used as base for future graphical endeavors. Includes the handy libraries stb_image and stb_image_write for any image writing needs, and tinyobjloader to load obj files.  
Inbuilt support for two rendering types: ScreenTexture, which is an easy way to just render a bitmap to the screen, and Rasterizer, which supports very simple colored 3D models.
  
## Dependencies
SDL2, GLEW (static)  
stb_image, stb_write, tinyobjloader (included in external/)
  
## Build instructions  
1. Install the required dependencies: [SDL2 link](https://www.libsdl.org/download-2.0.php), [GLEW link](http://glew.sourceforge.net/)  
2. Clone the repo  
3. Target "cmake" at the root to build platform-dependent files  
4. You can now build/modify the project  
