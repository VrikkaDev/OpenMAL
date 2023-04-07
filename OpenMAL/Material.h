//
// Created by VrikkaDev on 06/04/2023.
//

#ifndef OPENMAL_MATERIAL_H
#define OPENMAL_MATERIAL_H

#include <memory>
#include "Vectors.h"
#include "Texture.h"

namespace OpenMAL{
    struct Material {
        Vec3 ambient;
        Vec3 diffuse;
        Vec3 specular;
        float shininess;
        std::shared_ptr<Texture> diffuse_map;
        std::shared_ptr<Texture> specular_map;
    };
}

#endif //OPENMAL_MATERIAL_H
