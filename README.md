# Hello Vulkan

**This is my Vulkan API journey. I will update when I'm making progress and here, I put information about what I did and when I did.**

### - 9 May 2025

###### Created HelloVulkan class, initialized glfw library and created 800, 600 window.
```cpp
void HelloVulkan::initWindow()
{
	glfwInit();

	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	window = glfwCreateWindow(800, 600, "HelloTriangle", nullptr, nullptr);
}
```
