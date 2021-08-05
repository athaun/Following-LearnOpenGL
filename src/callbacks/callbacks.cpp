#include "../core.h"

void windowResizeEvent(GLFWwindow *window, int width, int height) {
    glViewport(0, 0, width, height);
}