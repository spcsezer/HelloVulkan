#pragma once

#define GLFW_INCLUDE_VULKAN
#include <glfw3.h>

class HelloVulkan
{
public:

	void run();

private:

	GLFWwindow* window;

	void initVulkan();
	void mainLoop();
	void cleanUp();

	void initWindow();
};

