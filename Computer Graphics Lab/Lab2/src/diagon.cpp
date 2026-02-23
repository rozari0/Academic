#include <GL/glut.h>
#include <iostream>
#define STEP_SIZE 0.001;
using namespace std;

float X1, Y1, X2, Y2;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);

    glBegin(GL_POINTS);

    float x = X1;
    float y = Y1;

    if ((Y2 - Y1) == (X2 - X1))
    {
        if (X1 < X2)
        {
            while (x <= X2)
            {
                glVertex2f(x, y);
                x += STEP_SIZE;
                y += STEP_SIZE;
            }
        }
        else
        {
            while (x >= X2)
            {
                glVertex2f(x, y);
                x -= STEP_SIZE;
                y -= STEP_SIZE;
            }
        }
    }

    else if ((Y2 - Y1) == -(X2 - X1))
    {
        if (X1 < X2)
        {
            while (x <= X2)
            {
                glVertex2f(x, y);
                x += STEP_SIZE;
                y -= STEP_SIZE;
            }
        }
        else
        {
            while (x >= X2)
            {
                glVertex2f(x, y);
                x -= STEP_SIZE;
                y += STEP_SIZE;
            }
        }
    }

    glEnd();
    glFlush();
}

void init()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
}

int main(int argc, char **argv)
{
    cout << "Enter X1 and Y1: ";
    cin >> X1 >> Y1;
    cout << "Enter X2 and Y2: ";
    cin >> X2 >> Y2;

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Diagonal Line Drawing (m = 1 and m = -1)");

    init();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}