# Drawing DAVI with FreeGLUT

This project utilizes the FreeGLUT library to draw the name "DAVI" on the screen using lines. It is a simple application to demonstrate basic usage of the OpenGL and FreeGLUT libraries.

## Overview

The project displays the name "DAVI" in the rendering window using lines to form each letter. The code is written in C and uses FreeGLUT functions for creating and managing the OpenGL window.

## Requirements

- **OpenGL**: Graphics library for 2D and 3D rendering.
- **FreeGLUT**: Utility library for OpenGL, which facilitates window creation and event handling.

## Compilation

To compile the code, you need to have FreeGLUT installed on your system. Use your preferred build tool or IDE to compile the code with the necessary OpenGL and FreeGLUT libraries.

```bash
gcc -o draw_davi draw_davi.c -lGL -lGLU -lglut
```

## Source Code

### Drawing Functions

- **`drawD`**: Draws the letter "D" using a series of lines.
- **`drawA`**: Draws the letter "A" with diagonal lines and a horizontal line in the middle.
- **`drawV`**: Draws the letter "V" with diagonal lines.
- **`drawI`**: Draws the letter "I" with a vertical line.

### Rendering Function

- **`render`**: Clears the color buffer and draws the letters "D", "A", "V", and "I" using the drawing functions. After drawing, it swaps the buffers for display.

### Initialization Function

- **`init`**: Sets up the rendering environment, defines the background color, and configures the orthographic coordinate system.

### Main Function

- **`main`**: Initializes FreeGLUT, creates the rendering window, sets up the rendering function, and enters the main loop.

## Execution

To run the program, compile the code as described above and execute the generated binary. A window will open displaying the name "DAVI" drawn with lines.

## Contact

For questions or suggestions, please contact:

- **Author**: Davi Campos Ribeiro (mailto:davicampos.dev@gmail.com)
