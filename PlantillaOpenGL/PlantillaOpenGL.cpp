// PlantillaOpenGL.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h" //ayuda a que compile mas rapido
#include <stdio.h> // esta cosa para librerias incluidas en c#
#include <stdlib.h>

#define GLEW_STATIC 

#include "GL/glew.h" //comillas para librerias personalizadas
#include "GLFW/glfw3.h"
#include <iostream>

using namespace std; //aqui esta lo de c++


int main()
{
	//Declaramos apuntador de ventana

	GLFWwindow *window;

	//Si no se pudo iniciar glfw terminamos ejecución

	if (!glfwInit()) {

	}


    return 0;
}

