#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <unistd.h>

GLfloat PI = 3.1416;

GLfloat position = 0.0f;
GLfloat positiony = 0.0f;
GLfloat positionx = 0.0f;
GLfloat speed = 0.1f;

void update(int value) {

    if(position < -14.0)
        position = 1.2f;

    position -= speed;

    glutPostRedisplay();


    glutTimerFunc(100, update, 0);
}

void init()
{
    glClearColor(1, 1, 1, 0.0);
    // glMatrixMode(GL_PROJECTION | GL_MODELVIEW);
    glLoadIdentity();
    // glOrtho(-10, 10, -10, 10, -10, 10);
    // glOrtho(-14, 14, -17, 17, -10, 10);
    gluOrtho2D(-14, 14, -17, 17);
}


void processSpecialKeys (int key, int mx, int my) {
    switch(key){
    case GLUT_KEY_LEFT :
        positionx-=2.0;
        glutPostRedisplay();
        break;
    case GLUT_KEY_RIGHT :
        positionx+=2.0;
        glutPostRedisplay();
        break;
    case GLUT_KEY_UP :
        positiony+=2;
        glutPostRedisplay();
        break;
    case GLUT_KEY_DOWN :
        positiony-=2;
        glutPostRedisplay();
        break;
    default:
        break;
    }
}

void allQuads()
{
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex3d(8, 9, 0);
    glVertex3d(11, 9, 0);
    glVertex3d(11, 0, 0);
    glVertex3d(8, 0, 0);
    glEnd();

    glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex3d(5, -7, 0);
    glVertex3d(8, -7, 0);
    glVertex3d(8, -15, 0);
    glVertex3d(5, -15, 0);
    glEnd();

    glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex3d(5, -7, 0);
    glVertex3d(8, -7, 0);
    glVertex3d(8, -15, 0);
    glVertex3d(5, -15, 0);
    glEnd();

    glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex3d(2, 5, 0);
    glVertex3d(5, 5, 0);
    glVertex3d(5, -5, 0);
    glVertex3d(2, -5, 0);
    glEnd();

    glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex3d(-4, -2, 0);
    glVertex3d(-1, -2, 0);
    glVertex3d(-1, -11, 0);
    glVertex3d(-4, -11, 0);
    glEnd();

    glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex3d(-8, 11, 0);
    glVertex3d(-5, 11, 0);
    glVertex3d(-5, 2, 0);
    glVertex3d(-8, 2, 0);
    glEnd();
    glPopMatrix();

}

void human()
{
    // Body
    glPushMatrix();
    glTranslatef(positionx, positiony, 0.0f);
    glColor3f(1, 0, 0);
    glBegin(GL_QUADS);
    glVertex3d(-12, -9, 0);
    glVertex3d(-9, -9, 0);
    glVertex3d(-9, -12, 0);
    glVertex3d(-12,-12, 0);
    glEnd();

    // LEG
    glColor3f(0, 1, 0);
    glBegin(GL_QUADS);
    glVertex3d(-10,-12, 0);
    glVertex3d(-9, -12, 0);
    glVertex3d(-9, -15, 0);
    glVertex3d(-10, -15, 0);
    glEnd();

    glColor3f(0, 1, 0);
    glBegin(GL_QUADS);
    glVertex3d(-12,-12, 0);
    glVertex3d(-11, -12, 0);
    glVertex3d(-11, -15, 0);
    glVertex3d(-12, -15, 0);
    glEnd();

    // Square face
    glColor3f(0, 0, 1);
    glBegin(GL_QUADS);
    glVertex3d(-11,-8, 0);
    glVertex3d(-10, -8, 0);
    glVertex3d(-10, -9, 0);
    glVertex3d(-11, -9, 0);
    glEnd();

    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3d(-10.3, -8.5, 0);
    glVertex3d(-10.6, -8.5, 0);
    glEnd();

    glPopMatrix();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glPushMatrix();
    allQuads();
    glPopMatrix();
    human();

    glutSwapBuffers();
    glutPostRedisplay();
    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
    glutInitWindowSize(3*280, 3*340);
    glutCreateWindow("Batman");
    init();
    glutDisplayFunc(display);
    glutTimerFunc(1000, update, 0);
    glutSpecialFunc(processSpecialKeys);
    glutMainLoop();
    return 0;
}
