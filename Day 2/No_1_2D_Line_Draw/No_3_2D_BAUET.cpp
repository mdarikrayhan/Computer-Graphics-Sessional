#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>

void drawB()
{
    glBegin(GL_LINES);
    {
        glVertex3f(-20, 10, 0);
        glVertex3f(-20, -10, 0);

        glVertex3f(-20, 10, 0);
        glVertex3f(-10, 10, 0);

        glVertex3f(-10, 10, 0);
        glVertex3f(-10, 0, 0);

        glVertex3f(-20, 0, 0);
        glVertex3f(-10, 0, 0);

        glVertex3f(-10, 10, 0);
        glVertex3f(-10, -10, 0);

        glVertex3f(-20, -10, 0);
        glVertex3f(-10,-10,0);
    }
    glEnd();
}

void drawA()
{
    glBegin(GL_LINES);
    {
        glVertex3f(0, 10, 0);
        glVertex3f(0, -10, 0);

        glVertex3f(0, 10, 0);
        glVertex3f(10, 10, 0);

        glVertex3f(10, 10, 0);
        glVertex3f(10, -10, 0);

        glVertex3f(0, 0, 0);
        glVertex3f(10, 0, 0);
    }
    glEnd();
}

void drawU()
{
    glBegin(GL_LINES);
    {
        glVertex3f(20, 10, 0);
        glVertex3f(20, -10, 0);

        glVertex3f(20, -10, 0);
        glVertex3f(30, -10, 0);

        glVertex3f(30, -10, 0);
        glVertex3f(30, 10, 0);
    }
    glEnd();
}

void drawE()
{
    glBegin(GL_LINES);
    {
        glVertex3f(40, 10, 0);
        glVertex3f(40, -10, 0);

        glVertex3f(40, 10, 0);
        glVertex3f(50, 10, 0);

        glVertex3f(40, 0, 0);
        glVertex3f(50, 0, 0);

        glVertex3f(40, -10, 0);
        glVertex3f(50, -10, 0);
    }
    glEnd();
}

void drawT()
{
    glBegin(GL_LINES);
    {
        glVertex3f(60, 10, 0);
        glVertex3f(70, 10, 0);

        glVertex3f(65, 10, 0);
        glVertex3f(65, -10, 0);
    }
    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1, 1, 1);

    drawB();
    drawA();
    drawU();
    drawE();
    drawT();

    glFlush();
}

void init()
{
    glOrtho(-50.0, 100.0, -50.0, 50.0, -50.0, 50.0);
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1400, 1000);
    glutInitWindowPosition(0, 0);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutCreateWindow("BAUET");
    init();
    glutDisplayFunc(display);
    glutMainLoop();

}