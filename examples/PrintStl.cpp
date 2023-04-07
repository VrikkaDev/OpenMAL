//
// Created by VrikkaDev on 06/04/2023.
//

#include <iostream>
#include "OpenMAL.h"
#include "ModelLoader.h"

int main(){

    auto model = OpenMAL::ModelLoader::LoadModel("C:/Users/veikk/CLionProjects/openmal/examples/Assets/Cube.stl");

    std::cout<<"---------Positions---------"<<std::endl;
    for (auto a : model->positions) {
        std::cout<< "x: " << a.x << " y: " << a.y << " z: " << a.z << std::endl;
    }
    std::cout<<"---------Normals---------"<<std::endl;
    for (auto a : model->normals) {
        std::cout<< "x: " << a.x << " y: " << a.y << " z: " << a.z << std::endl;
    }
    std::cout<<"---------Texcoords---------"<<std::endl;
    for (auto a : model->texcoords) {
        std::cout<< "x: " << a.x << " y: " << a.y << std::endl;
    }
    std::cout<<"---------Indices---------"<<std::endl;
    for (int i = 0; i < model->indices.size();) {
        std::cout<< model->indices[i] << ", " << model->indices[i++] << ", " << model->indices[i++] << ", ";
        std::cout<< model->indices[i++] << ", " << model->indices[i++] << ", " << model->indices[i++] << std::endl;
        i++;
    }

    std::cout<<"Press enter to continue"<<std::endl;
    std::cin.get();

    return 0;
}