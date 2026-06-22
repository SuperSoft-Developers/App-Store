#include "apps.h"

std::vector<App> getApps() {
    return {
        {
            "Super Game",
            "Um jogo 2D leve",
            "https://example.com/supergame.apk",
            "https://example.com/supergame.exe",
            "https://example.com/supergame.dmg"
        },
        {
            "Note App",
            "App de notas simples",
            "https://example.com/note.apk",
            "https://example.com/note.exe",
            ""
        }
    };
}
