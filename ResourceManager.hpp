#pragma once

#include "Resource.hpp"

class ResourceManager
{
        private:
            Resource resource;
        public:
        ResourceManager()
        {

        }
        ResourceManager(const ResourceManager& rm):resource{rm.resource}
        {

        }
        double get()
        {
            return resource.get();
        }

};
