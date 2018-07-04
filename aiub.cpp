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
        // triangle
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0); // Red
    glVertex2f(-0.5f, +.5f);    // x, y
    glVertex2f(-.7f, -.5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0); // Red
    glVertex2f(-0.5f, +.5f);    // x, y
    glVertex2f(-0.3f, -.5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0); // Red
    glVertex2f(-0.4f, +.0f);    // x, y
    glVertex2f(-0.6f, +.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0); // Red
    glVertex2f(-0.1f, +.5f);    // x, y
    glVertex2f(-0.1f, -.5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0); // Red
    glVertex2f(-0.2f, +.5f);    // x, y
    glVertex2f(0.0f, +.5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0); // Red
    glVertex2f(-0.2f, +.5f);    // x, y
    glVertex2f(0.0f, +.5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0); // Red
    glVertex2f(-0.2f, -.5f);    // x, y
    glVertex2f(0.0f, -.5f);
    glEnd();

    // letter U
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0); // Red
    glVertex2f(+0.1f, +.5f);    // x, y
    glVertex2f(+0.1f, -.5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0); // Red
    glVertex2f(+0.1f, -.5f);
    glVertex2f(+0.4f, -.5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0); // Red
    glVertex2f(+0.4f, +.5f);
    glVertex2f(+0.4f, -.5f);
    glEnd();

    // LETTER B
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0); // Red
    glVertex2f(+0.5f, +.5f);
    glVertex2f(+0.5f, -.5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0); // Red
    glVertex2f(+0.5f, +.5f);
    glVertex2f(+0.8f, +.3f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0); // Red
    glVertex2f(+0.8f, +.3f);
    glVertex2f(+0.8f, +.2f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0); // Red
    glVertex2f(+0.8f, +.2f);
    glVertex2f(+0.5f, +0.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0); // Red
    glVertex2f(+0.5f, +0.0f);
    glVertex2f(+0.8f, -0.1f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0); // Red
    glVertex2f(+0.5f, +0.0f);
    glVertex2f(+0.8f, -0.1f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0); // Red
    glVertex2f(+0.8f, -0.1f);
    glVertex2f(+0.8f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0); // Red
    glVertex2f(+0.8f, -0.2f);
    glVertex2f(+0.5f, -0.5f);
    glEnd();

    glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
    glutInit(&argc, argv);          // Initialize GLUT
    glutCreateWindow("Vertex, Primitive & Color");  // Create window with the given title
    glutInitWindowSize(520, 520);   // Set the window's initial width & height
    glutDisplayFunc(display);       // Register callback handler for window re-paint event
    initGL();                       // Our own OpenGL initialization
    glutMainLoop();                 // Enter the event-processing loop
}
