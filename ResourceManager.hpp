#pragma once
#include "Resource.hpp"

class ResourceManager
{
private:
    Resource* resource;

public:
    // Twoja implementacja tutaj
    ResourceManager() { resource = new Resource{}; }

    ResourceManager(const ResourceManager& a)
    {
        resource  = new Resource{};
        *resource = *a.resource;
    }

    ResourceManager(ResourceManager&& a)
    {
        resource  = a.resource;
        a.resource = nullptr;
    }

    ~ResourceManager() { delete resource; }

    double get() { return resource->get(); }

    ResourceManager& operator=(const ResourceManager& w)
    {
        delete this->resource;
        resource  = new Resource{};
        *resource = *w.resource;
        return *this;
    }

    ResourceManager& operator=(ResourceManager&& w)
    {
        delete this->resource;
        resource  = w.resource;
        w.resource = nullptr;
        return *this;
    }
};
