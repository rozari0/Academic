#include <GL/glut.h>
#include <iostream>
using namespace std;

int x1, Y1, x2, y2;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);

    int dx = abs(x2 - x1);
    int dy = abs(y2 - Y1);

    if (dx != 0)
        cout << "Slope is: " << (float)(y2 - Y1) / (x2 - x1) << endl;

    int sx = (x1 < x2) ? 1 : -1;
    int sy = (Y1 < y2) ? 1 : -1;

    int err = dx - dy;

    int x = x1;
    int y = Y1;

    glBegin(GL_POINTS);

    while (true)
    {
        glVertex2i(x, y);
        if (x == x2 && y == y2)
            break;

        int e2 = 2 * err;

        if (e2 > -dy)
        {
            err -= dy;
            x += sx;
        }

        if (e2 < dx)
        {
            err += dx;
            y += sy;
        }
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

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Bresenhams Line Drawing");
    gluOrtho2D(0, 600, 0, 600);

    glClearColor(1.0, 1.0, 1.0, 1.0);

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
