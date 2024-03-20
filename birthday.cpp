#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0f, 0.0f, -5.0f);

    glColor3f(1.0f, 0.0f, 0.0f);
    glutSolidCube(2.0);

    glColor3f(0.0f, 1.0f, 0.0f);
    glRasterPos3f(-0.8f, 0.0f, 1.2f);
    const char *message = "Happy Birthday, Salah!";
    for (int i = 0; message[i] != '\0'; i++) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message[i]);
    }

    glutSwapBuffers();
}

void init() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glEnable(GL_DEPTH_TEST);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Birthday Greeting");

    glutDisplayFunc(display);

    init();

    glutMainLoop();
    return 0;
}