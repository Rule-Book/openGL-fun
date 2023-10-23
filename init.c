#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <stdio.h>

int main(void)
{
	if (!glfwInit()) {
		printf("Initialization failed\n");
	}
	printf("Hello World\n");
	glfwTerminate();
	return 0;
}