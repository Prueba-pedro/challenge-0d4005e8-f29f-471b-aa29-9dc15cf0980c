#include <iostream>
#include "renderer.h"

int main() {
    Renderer renderer;
    if (!renderer.init()) {
        std::cerr << "Failed to initialize renderer." << std::endl;
        return 1;
    }

    while (!renderer.shouldClose()) {
        renderer.render();
    }

    renderer.cleanup();
    return 0;
}