#include "HelloVulkan.hpp"

void HelloVulkan::run()
{
	initWindow();
	initVulkan();
	mainLoop();
	cleanUp();
}

void HelloVulkan::initVulkan()
{
}

void HelloVulkan::mainLoop()
{
	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();
	}
}

void HelloVulkan::cleanUp()
{
	glfwDestroyWindow(window);
	glfwTerminate();
}

void HelloVulkan::initWindow()
{
	glfwInit();

	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	window = glfwCreateWindow(800, 600, "HelloTriangle", nullptr, nullptr);
}
