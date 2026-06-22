#include "downloader.h"
#include <cstdlib>
#include <iostream>

void downloadFile(const std::string& url, const std::string& output) {
    std::string command = "curl -L " + url + " -o " + output;

    std::cout << "Baixando: " << url << std::endl;
    system(command.c_str());
}
