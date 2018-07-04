#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Initialize OpenGL Graphics */
void initGL() {
    // Set "clearing" or background color
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
    glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

    // DRAW X axis and Y axis
    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 0.0f, 0.0f); // Red

    glVertex2f(0.0f, 0.0f);    // x, y
    glVertex2f(1.0f, 0.0f);    // x, y

    glVertex2f(0.0f, 0.0f);    // x, y
    glVertex2f(0.0f, 1.0f);    // x, y

    glVertex2f(0.0f, 0.0f);    // x, y
    glVertex2f(-1.0f, 0.0f);    // x, y

    glVertex2f(0.0f, 0.0f);    // x, y
    glVertex2f(0.0f, -1.0f);
    glEnd();


    // BIGGER QUADS
    //
    glBegin(GL_QUADS);
    glColor3ub(255, 0, 0); // Red

    glVertex2f(-0.1f, 0.1f);
    glVertex2f(0.1f, 0.1f);
    glVertex2f(0.1f, -0.1f);
    glVertex2f(-0.1f, -0.1f);
    glEnd();
    glTranslatef(0.4f, 0.4f, 0.0f);
    glScalef(2, 2, 0);

    glBegin(GL_QUADS);
    glColor3ub(255, 0, 0); // Red


    glVertex2f(-0.1f, 0.1f);
    glVertex2f(0.1f, 0.1f);
    glVertex2f(0.1f, -0.1f);
    glVertex2f(-0.1f, -0.1f);

    glEnd();
    // SMALLER QUADS
    glBegin(GL_QUADS);
    glColor3ub(255, 0, 0); // Red

    glVertex2f(-0.1f, 0.1f);
    glVertex2f(0.1f, 0.1f);
    glVertex2f(0.1f, -0.1f);
    glVertex2f(-0.1f, -0.1f);
    glEnd();
    glTranslatef(-0.3f, -0.3f, 0.0f);
    glScalef(.2, .2, 0);

    glBegin(GL_QUADS);
    glColor3ub(255, 0, 0); // Red


    glVertex2f(-0.1f, 0.1f);
    glVertex2f(0.1f, 0.1f);
    glVertex2f(0.1f, -0.1f);
    glVertex2f(-0.1f, -0.1f);

    glEnd();


    // SMALLER TRIANGLE
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f); // Red

    glVertex2f(-0.4f, 1);    // x, y
    glVertex2f(-0.5f, 0.8f);    // x, y
    glVertex2f(-0.3f, 0.8f);    // x, y

    glEnd();

    glTranslatef(-0.4f, -0.3f, 0.0f);
    glScalef(2, 2, 0);

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 0, 0); // Red
    glVertex2f(-0.4f, 1);    // x, y
    glVertex2f(-0.5f, 0.8f);    // x, y
    glVertex2f(-0.3f, 0.8f);    // x, y

    // glLoadIdentity();
    glEnd();


    // 3 lines

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    // glVertex2f(0.7f, -0.2f);
    // glVertex2f(0.9f, -0.5f);
    glVertex2f(0.6f, -0.3f);
    glVertex2f(0.9f, -0.5f);

    glEnd();
    glTranslatef(0.5f, 0.0f, 0.0f);
    glScalef(.5, .5, 0);

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(0.6f, -0.3f);
    glVertex2f(0.9f, -0.5f);
    glEnd();

    glTranslatef(0.5f, 0.0f, 0.0f);
    glScalef(.5, .5, 0);

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(0.6f, -0.3f);
    glVertex2f(0.9f, -0.5f);
    glEnd();

    glFlush();  // Render now

}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
    glutInit(&argc, argv);          // Initialize GLUT
    glutCreateWindow("Vertex, Primitive & Color");  // Create window with the given title
    glutInitWindowSize(320, 320);   // Set the window's initial width & height
    glutDisplayFunc(display);       // Register callback handler for window re-paint event
    initGL();                       // Our own OpenGL initialization
    glutMainLoop();                 // Enter the event-processing loop
    return 0;
}
