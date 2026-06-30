#ifndef RENDERER_H
#define RENDERER_H

class Renderer {
public:
    bool init();
    void render();
    void cleanup();
    bool shouldClose();
};

#endif // RENDERER_H