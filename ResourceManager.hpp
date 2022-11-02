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
        ResourceManager& operator=(const ResourceManager& moveManager)
        {
            delete resource;
            resource = new Resource{*moveManager.resource};
            return *this;
        }
        ResourceManager& operator=(ResourceManager&& moveManager)
        {
            delete resource;
            resource = moveManager.resource;
            moveManager.resource = nullptr;
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
