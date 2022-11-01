#pragma once

#include "Resource.hpp"

class ResourceManager
{
        private:
            Resource* resource;
        public:
        ResourceManager()
        {
            Resource res;
            resource = &res;
        }
        double get()
        {
            return resource->get();
        }
        ResourceManager(const ResourceManager& rm):resource{rm.resource}
        {

        }
        ResourceManager& operator=(const ResourceManager& movedManager)
        {
            return *this;
        }
        ResourceManager(ResourceManager&& sourceManager)
        {
            ResourceManager movedManager;
            movedManager.resource = sourceManager.resource;
            sourceManager.resource = nullptr;
        }
        ~ResourceManager()
        {
            delete resource;
        }
};
