#pragma once

#include "Resource.hpp"

class ResourceManager
{
        private:
        Resource resource;

        public:
        ResourceManager()
        {
            Resource resource;
        }

        double get()
        {
            return resource.get();
        }
};
