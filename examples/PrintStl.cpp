//
// Created by VrikkaDev on 06/04/2023.
//

#include <iostream>
#include "OpenMAL.h"
#include "ModelLoader.h"

int main(){

    auto model = OpenMAL::ModelLoader::LoadModel("C:/Users/veikk/CLionProjects/openmal/examples/Assets/Cube.stl");

    std::cout<<model.get()<<std::endl;
    std::cout<<model->indices.data()<<std::endl;

    std::cout<< model->indices.size() <<std::endl;

    std::cout<<"Press enter to continue"<<std::endl;
    std::cin.get();

    return 0;
}