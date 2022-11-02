#pragma once

#include "Resource.hpp"

class ResourceManager
{
        private:
            Resource* resource;
        public:
        ResourceManager()
        {
            resource = new Resource;
        }
        double get()
        {
            return resource->get();
        }
        ResourceManager(const ResourceManager& copiedManager)
        {
            resource = new Resource{*copiedManager.resource};
        }
        ResourceManager& operator=(const ResourceManager& movedManager)
        {
            delete resource;
            resource = new Resource{*movedManager.resource};
            return *this;
        }
        ResourceManager(ResourceManager&& sourceManager)
        {
            resource = sourceManager.resource;
            sourceManager.resource = nullptr;
        }
        ~ResourceManager()
        {
            delete resource;
        }
};
