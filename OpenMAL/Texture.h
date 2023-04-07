//
// Created by VrikkaDev on 06/04/2023.
//

#ifndef OPENMAL_TEXTURE_H
#define OPENMAL_TEXTURE_H

#include <string>
#include "stb/stb_image.h"

namespace OpenMAL {
    class Texture {
    public:
        Texture(int width, int height, const uint8_t* data) : m_width(width), m_height(height) {
            m_data = new uint8_t[width * height * 4];
            memcpy(m_data, data, width * height * 4);
        }

        Texture(const std::string& filepath) {

        }

        ~Texture() {
            delete[] m_data;
        }

        const uint8_t* GetData() const {
            return m_data;
        }

        int GetWidth() const {
            return m_width;
        }

        int GetHeight() const {
            return m_height;
        }

    private:
        uint8_t* m_data;
        int m_width;
        int m_height;
    };
}

#endif //OPENMAL_TEXTURE_H
