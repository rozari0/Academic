#include <GL/glut.h>
#include <iostream>
#define STEP_SIZE 0.001

using namespace std;
float startX, endX, startY, endY;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POINTS);
    for (float x = startX; x <= endX; x += STEP_SIZE)
    {
        glVertex2f(x, startY);
    }
    glEnd();

    glFlush();
}

int main(int argc, char **argv)
{
    cout << "Input Start Pixel (X Y): ";
    cin >> startX >> startY;
    cout << "Input End Pixel (X Y): ";
    cin >> endX >> endY;

    if (startX > endX)
    {
        swap(startX, endX);
    }

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Horizental Line");
    glClearColor(1.0, 1.0, 1.0, 1.0);

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
