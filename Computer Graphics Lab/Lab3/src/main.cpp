#include <GL/glut.h>
#include <iostream>
using namespace std;

float x1, Y1, x2, y2, dx, dy, slope;

float xinc, yinc, steps;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);

    float x = x1, y = Y1;

    glBegin(GL_POINTS);
    for (int i = 0; i <= steps; i++)
    {
        glVertex2f(x, y);
        x += xinc;
        y += yinc;
    }
    glEnd();

    glFlush();
}

int main(int argc, char **argv)
{

    cout << "Input x1 and y1: ";
    cin >> x1 >> Y1;
    cout << "Input x2 and y2: ";
    cin >> x2 >> y2;

    dx = x2 - x1;
    dy = y2 - Y1;

    if (dx)
    {
        slope = (float)dy / dx;

        cout << "Slope is: " << slope << endl;
    }

    steps = max(abs(dx), abs(dy));

    xinc = dx / steps;
    yinc = dy / steps;

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutCreateWindow("DDA Implement");
    gluOrtho2D(0, 600, 0, 600);
    glClearColor(1.0, 1.0, 1.0, 1.0);

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
