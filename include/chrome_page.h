#pragma once

#include <cstdlib>
#include <iostream>
#include <map>
#include <any>

class AsChromePage
{
public:
    AsChromePage() = default;

private:
    std::map<std::string, std::any> options;
    std::string remote_debugging_ip = "127.0.0.1";
    int remote_debugging_port = 9222;
};