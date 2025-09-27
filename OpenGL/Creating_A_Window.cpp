#include <iostream> 
#include <GLFW/glfw3.h> 

int main(){
    //Initialize GLFW
    if (glfwInit()){
        std::cerr << "Failed to initialize GLFW";
        return -1;
    }

    //macOS requires forward compatibility for modern contexts
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

    //create a window
    GLFWwindow* window = glfwCreateWindow(800, 600, "OpenGl Window", NULL, NULL);
    if (!window) {
        std::cerr << "Failed to create window/n";
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    //Main loop

    while (!glfwWindowShouldClose(window)) {
        //clear the screen (backgroud colour teal)
        glClearColor(0.2f, 0.6f, 0.6f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        //swap front and back buffers 
        glfwSwapBuffers(window);
        glfwPollEvents();

    }

    glfwTerminate();
    return 0;
}