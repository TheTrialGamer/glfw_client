#ifndef GLFW_CLIENT_MOUSELISTENER_H
#define GLFW_CLIENT_MOUSELISTENER_H
#include "../incs.h"

class MouseListener {
public:
    // listener functions, used by glfwCallback(..) (they have their own thread
    static void mousePosCallback(GLFWwindow* glfwWindow, double xpos, double ypos);
    static void mouseButtonCallback(GLFWwindow* glfwWindow, int button, int action, int mods);
    static void mouseScrollCallback(GLFWwindow* glfwWindow, double xOffset, double yOffset);

    // get values (for calculating mouse movements) / analyzing mouse actions
    static double getX();
    static double getY();
    static double getDx();
    static double getDy();
    static double getScrollX();
    static double getScrollY();

    // returns true if a mouse button is being dragged
    static bool isDragging();

    // this function reports if a mouse button has been pressed
    static bool mouseButtonDown(int button);
};


#endif
