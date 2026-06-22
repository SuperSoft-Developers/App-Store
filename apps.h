#ifndef APPS_H
#define APPS_H

#include <string>
#include <vector>

struct App {
    std::string name;
    std::string description;
    std::string apk;
    std::string exe;
    std::string dmg;
};

std::vector<App> getApps();

#endif
