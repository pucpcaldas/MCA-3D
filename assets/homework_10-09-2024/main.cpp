#include <GL/freeglut.h>

void drawD() {
    glBegin(GL_LINE_STRIP);
        glVertex2f(-0.9f, 0.3f);
        glVertex2f(-0.9f, -0.3f);
        glVertex2f(-0.6f, -0.3f);
        glVertex2f(-0.5f, -0.2f);
        glVertex2f(-0.5f, 0.2f);
        glVertex2f(-0.6f, 0.3f);
        glVertex2f(-0.9f, 0.3f);
    glEnd();
}

void drawA() {
    glBegin(GL_LINES);
        glVertex2f(-0.4f, -0.3f);
        glVertex2f(-0.3f, 0.3f);

        glVertex2f(-0.3f, 0.3f);
        glVertex2f(-0.2f, -0.3f);

        glVertex2f(-0.35f, 0.0f);
        glVertex2f(-0.25f, 0.0f);
    glEnd();
}

void drawV() {
    glBegin(GL_LINES);
        glVertex2f(-0.1f, 0.3f);
        glVertex2f(0.0f, -0.3f);

        glVertex2f(0.0f, -0.3f);
        glVertex2f(0.1f, 0.3f);
    glEnd();
}

void drawI() {
    glBegin(GL_LINES);
        glVertex2f(0.2f, 0.3f);
        glVertex2f(0.2f, -0.3f);
    glEnd();
}

void render() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0f, 1.0f, 0.0f); //define a cor das linhas
    glLineWidth(5);

    drawD();
    drawA();
    drawV();
    drawI();

    glutSwapBuffers();
}

void init() {
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION); //seta definicao da matriz de transformacao da camera
    glLoadIdentity(); //atribui a matriz de transformacao da camera a matriz identidade
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0); //define a area de enquadramento de cenas no sistema de coordenadas
    glMatrixMode(GL_MODELVIEW); //seta definicao da matriz de trnaformacao de modelos da cena
    glLoadIdentity(); //atribui a matriz de trasnformacao 
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Name Render");

    init();
    glutDisplayFunc(render);
    glutMainLoop();

    return 0;
}
