//
// Created by VrikkaDev on 05/04/2023.
//

#include <iostream>
#include "OpenMAL.h"
#include "ModelLoader.h"

int main(){

    auto model = OpenMAL::ModelLoader::LoadModel("C:/Users/veikk/CLionProjects/openmal/examples/Assets/Cube.obj");

    std::cout<< model->indices.size() <<std::endl;

    std::cout<<"Press enter to continue"<<std::endl;
    std::cin.get();

    return 0;
}