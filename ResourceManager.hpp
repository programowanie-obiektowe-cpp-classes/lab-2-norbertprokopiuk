#pragma once

#include "Resource.hpp"

class ResourceManager
{
private:
    Resource resource;

public:
    // Twoja implementacja tutaj
    ResourceManager() : resource(Resource{}){}

    ResourceManager(ResourceManager& a) : resource(a.resource) {}
    ~ResourceManager() {}

    double get() { return resource.get(); }
};
