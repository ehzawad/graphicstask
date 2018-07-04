#include <GL/glut.h>
#include <cmath>
#include <ctime>
#include <iostream>

int Hour = 0;
int Minute = 0;
int Second = 0;

void cornerDesign()
{
    glBegin(GL_LINES);
    // top right corner up
    glVertex2f(0.66f, 0.90f);
    glVertex2f(0.61f, 0.84f);
    glVertex2f(0.80f, 0.90f);
    glVertex2f(0.74f, 0.84f);

    // top right corner side
    glVertex2f(0.90f, 0.66f);
    glVertex2f(0.84f, 0.61f);
    glVertex2f(0.90f, 0.80f);
    glVertex2f(0.84f, 0.74f);

    // bottom right corner side
    glVertex2f(0.90f, -0.66f);
    glVertex2f(0.84f, -0.61f);
    glVertex2f(0.90f, -0.80f);
    glVertex2f(0.84f, -0.74f);

    // bottom left corner side
    glVertex2f(-0.90f, -0.66f);
    glVertex2f(-0.84f, -0.61f);
    glVertex2f(-0.90f, -0.80f);
    glVertex2f(-0.84f, -0.74f);

    // top left corner up
    glVertex2f(-0.66f, 0.90f);
    glVertex2f(-0.61f, 0.84f);
    glVertex2f(-0.80f, 0.90f);
    glVertex2f(-0.74f, 0.84f);

    // top left corner side
    glVertex2f(-0.90f, 0.66f);
    glVertex2f(-0.84f, 0.61f);
    glVertex2f(-0.90f, 0.80f);
    glVertex2f(-0.84f, 0.74f);

    // bottom right corner down
    glVertex2f(0.66f, -0.90f);
    glVertex2f(0.61f, -0.84f);
    glVertex2f(0.80f, -0.90f);
    glVertex2f(0.74f, -0.84f);
    // bottom left corner down
    glVertex2f(-0.66f, -0.90f);
    glVertex2f(-0.61f, -0.84f);
    glVertex2f(-0.80f, -0.90f);
    glVertex2f(-0.74f, -0.84f);
    glEnd();
}

void lineDesign()
{
    glBegin(GL_LINES);

    glColor3ub(139,69,19);
    glVertex2f(0.0f, 0.9f);
    glVertex2f(0.0f, 0.8f);

    glVertex2f(0.0f, -0.9f);
    glVertex2f(0.0f, -0.8f);

    glVertex2f(0.9f, 0.0f);
    glVertex2f(0.8f, 0.0f);

    glVertex2f(-0.9f, 0.0f);
    glVertex2f(-0.8f, 0.0f);

    glEnd();
}

void moreLines()
{
    glBegin(GL_LINES);
    // Right TOP
    glVertex2f(0.10f, 0.90f);
    glVertex2f(0.09f, 0.85f);
    glVertex2f(0.20f, 0.90f);
    glVertex2f(0.18f, 0.85f);
    glVertex2f(0.30f, 0.90f);
    glVertex2f(0.27f, 0.85f);
    glVertex2f(0.40f, 0.90f);
    glVertex2f(0.36f, 0.85f);
    glVertex2f(0.50f, 0.90f);
    glVertex2f(0.45f, 0.80f);
    // Right right positive
    glVertex2f(0.90f, 0.10f);
    glVertex2f(0.85f, 0.09f);
    glVertex2f(0.90f, 0.20f);
    glVertex2f(0.85f, 0.18f);
    glVertex2f(0.90f, 0.30f);
    glVertex2f(0.85f, 0.27f);
    glVertex2f(0.90f, 0.40f);
    glVertex2f(0.85f, 0.36f);
    glVertex2f(0.90f, 0.50f);
    glVertex2f(0.80f, 0.45f);
    //
    // left left positive
    glVertex2f(-0.90f, 0.10f);
    glVertex2f(-0.85f, 0.09f);
    glVertex2f(-0.90f, 0.20f);
    glVertex2f(-0.85f, 0.18f);
    glVertex2f(-0.90f, 0.30f);
    glVertex2f(-0.85f, 0.27f);
    glVertex2f(-0.90f, 0.40f);
    glVertex2f(-0.85f, 0.36f);
    glVertex2f(-0.90f, 0.50f);
    glVertex2f(-0.80f, 0.45f);
    //
    // Right right negative
    glVertex2f(0.90f, -0.10f);
    glVertex2f(0.85f, -0.09f);
    glVertex2f(0.90f, -0.20f);
    glVertex2f(0.85f, -0.18f);
    glVertex2f(0.90f, -0.30f);
    glVertex2f(0.85f, -0.27f);
    glVertex2f(0.90f, -0.40f);
    glVertex2f(0.85f, -0.36f);
    glVertex2f(0.90f, -0.50f);
    glVertex2f(0.80f, -0.45f);

    // left left negative
    glVertex2f(-0.90f, -0.10f);
    glVertex2f(-0.85f, -0.09f);
    glVertex2f(-0.90f, -0.20f);
    glVertex2f(-0.85f, -0.18f);
    glVertex2f(-0.90f, -0.30f);
    glVertex2f(-0.85f, -0.27f);
    glVertex2f(-0.90f, -0.40f);
    glVertex2f(-0.85f, -0.36f);
    glVertex2f(-0.90f, -0.50f);
    glVertex2f(-0.80f, -0.45f);
    //
    // Right bottom
    glVertex2f(0.10f, -0.90f);
    glVertex2f(0.09f, -0.85f);
    glVertex2f(0.20f, -0.90f);
    glVertex2f(0.18f, -0.85f);
    glVertex2f(0.30f, -0.90f);
    glVertex2f(0.27f, -0.85f);
    glVertex2f(0.40f, -0.90f);
    glVertex2f(0.36f, -0.85f);
    glVertex2f(0.50f, -0.90f);
    glVertex2f(0.45f, -0.80f);
    // Left TOP
    glVertex2f(-0.10f, 0.90f);
    glVertex2f(-0.09f, 0.85f);
    glVertex2f(-0.20f, 0.90f);
    glVertex2f(-0.18f, 0.85f);
    glVertex2f(-0.30f, 0.90f);
    glVertex2f(-0.27f, 0.85f);
    glVertex2f(-0.40f, 0.90f);
    glVertex2f(-0.36f, 0.85f);
    glVertex2f(-0.50f, 0.90f);
    glVertex2f(-0.45f, 0.80f);
    // Left Bottom
    glVertex2f(-0.10f, -0.90f);
    glVertex2f(-0.09f, -0.85f);
    glVertex2f(-0.20f, -0.90f);
    glVertex2f(-0.18f, -0.85f);
    glVertex2f(-0.30f, -0.90f);
    glVertex2f(-0.27f, -0.85f);
    glVertex2f(-0.40f, -0.90f);
    glVertex2f(-0.36f, -0.85f);
    glVertex2f(-0.50f, -0.90f);
    glVertex2f(-0.45f, -0.80f);

    glEnd();
}

void drawRectangle()
{
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.9f, 0.9f);
    glVertex2f(-0.9f, -0.9f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.9f, -0.9f);
    glVertex2f(0.9f, -0.9f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2f(0.9f, -0.9f);
    glVertex2f(0.9f, +0.9f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2f(0.9f, +0.9f);
    glVertex2f(-0.9f, 0.9f);
    glEnd();
}

void drawHand()
{
    glClear(GL_COLOR_BUFFER_BIT);

    float AngleSecond = Second * 6;
    glRotatef(-AngleSecond, 0.0f, 0.0f, 1.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0, 0);
    glVertex2f(0, 0.75f);
    glEnd();
    glLoadIdentity();

    float AngleMinute = Minute * 6;
    glRotatef(-AngleMinute, 0.0f, 0.0f, 1.0f);
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.9f, 0.0f);
    glVertex2f(0,0);
    glVertex2f(0,0.6f);
    glEnd();
    glLoadIdentity();

    float AngleHour = (Hour + Minute/60.0) * 30;
    glRotatef(-AngleHour, 0.0f, 0.0f, 1.0f);
    glLineWidth(7);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.1f);
    glVertex2f(0,0);
    glVertex2f(0,0.5f);
    glEnd();
    glLoadIdentity();

    moreLines();
    lineDesign();
    cornerDesign();
    drawRectangle();

    glFlush();
}

void initialize()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}

void move(int n)
{
    time_t Now = time(nullptr);
    // struct tm
    struct tm* DateTime = localtime(&Now);

    Hour = DateTime->tm_hour;
    Minute = DateTime->tm_min;
    Second = DateTime->tm_sec;

    glutPostRedisplay();
    glutTimerFunc(1000, move, n);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(10,10);
    glutCreateWindow("Clock");
    glutDisplayFunc(drawHand);
    glutTimerFunc(1000, move, 0);
    initialize();
    glutMainLoop();
}
