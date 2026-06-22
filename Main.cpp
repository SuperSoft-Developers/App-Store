#include <iostream>
#include "apps.h"
#include "downloader.h"

int main() {
    auto apps = getApps();

    std::cout << "=== SuperSoft App Store ===\n\n";

    for (size_t i = 0; i < apps.size(); i++) {
        std::cout << i + 1 << ". " << apps[i].name << "\n";
        std::cout << "   " << apps[i].description << "\n\n";
    }

    int choice;
    std::cout << "Escolha um app: ";
    std::cin >> choice;

    if (choice < 1 || choice > apps.size()) {
        std::cout << "Opcao invalida!\n";
        return 0;
    }

    App app = apps[choice - 1];

    std::cout << "\nPlataforma:\n";
    std::cout << "1 - APK\n2 - EXE\n3 - DMG\nEscolha: ";

    int platform;
    std::cin >> platform;

    if (platform == 1 && !app.apk.empty())
        downloadFile(app.apk, app.name + ".apk");

    else if (platform == 2 && !app.exe.empty())
        downloadFile(app.exe, app.name + ".exe");

    else if (platform == 3 && !app.dmg.empty())
        downloadFile(app.dmg, app.name + ".dmg");

    else
        std::cout << "Arquivo nao disponivel!\n";

    return 0;
}
