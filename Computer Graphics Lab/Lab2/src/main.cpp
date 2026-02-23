#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(5.0);
    glBegin(GL_POINTS);
        glColor3f(1,0,1);
        glVertex2f(-0.5, 0.2);
        glColor3f(1,1,0);
        glVertex2f(-0.7, 0.4);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(200, 200);
    glutCreateWindow("GLUT Project");
    glClearColor(1.0, 1.0, 1.0, 1.0);

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
