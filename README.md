# Model Loader Library

A lightweight header only C++ library for loading 3D models from some popular file formats.

## Features

- Currently supports OBJ and STL file formats.
- Can load 3D models with vertex positions, normals, and indices.
- Simple and easy-to-use interface.

## Usage

To use this library, simply include the appropriate header file for the file format you want to load:

```c++
#include "loaders/ObjLoader.h" // for loading OBJ files
#include "loaders/StlLoader.h" // for loading STL files
```
Then, call the appropriate static Load function with the file path:
```c++
auto model = ObjLoader::Load("../model.obj");
```
The Load function returns a std::unique_ptr<Model> which contains the loaded 3D model data.

### Why
There is literally no reason to use this library, just use assimp :)

Made this just to learn more about how different 3d file formats store data

### Examples
See the examples directory for examples of how to use the library.

### Limitations
This library currently only supports loading 3D models with vertex positions, normals, and indices. Textures and other advanced features are not yet supported.

### Dependencies
This library does not have any external dependencies.

### License
This library is licensed under the MIT License.