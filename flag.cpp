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
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3ub(255, 0, 0); // Red

    glVertex2f(-0.5f, +.1f);    // x, y
    glVertex2f(+0.5f, +.1f);
    glVertex2f(+0.5f, 0.0f);    // x, y
    glVertex2f(-0.5f, 0.0f);
    glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3ub(255,165,0);

    glVertex2f(-0.5f, 0.0f);
    glVertex2f(+0.5f, 0.0f);    // x, y
    glVertex2f(+0.5f, -.1f);
    glVertex2f(-0.5f, -.1f);    // x, y
    glEnd();


    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3ub(255, 255, 0);
    //
    glVertex2f(-0.5f, -.1f);    // x, y
    glVertex2f(+0.5f, -.1f);    // x, y
    glVertex2f(+0.5f, -.2f);    // x, y
    glVertex2f(-0.5f, -.2f);    // x, y
    glEnd();


    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    //
    glColor3ub(0, 128, 0);
    glVertex2f(-0.5f, -.2f);    // x, y
    glVertex2f(+0.5f, -.2f);    // x, y
    glVertex2f(+0.5f, -.3f);    // x, y
    glVertex2f(-0.5f, -.3f);    // x, y
    glEnd();


    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    //
    glColor3ub(0, 0, 255);
    glVertex2f(-0.5f, -.3f);    // x, y
    glVertex2f(+0.5f, -.3f);    // x, y
    glVertex2f(+0.5f, -.4f);    // x, y
    glVertex2f(-0.5f, -.4f);    // x, y

    glEnd();


    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3ub(75, 0, 130);
    glVertex2f(-0.5f, -.4f);    // x, y
    glVertex2f(+0.5f, -.4f);    // x, y
    glVertex2f(+0.5f, -.5f);    // x, y
    glVertex2f(-0.5f, -.5f);    // x, y
    glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3ub(238, 130, 238);
    glVertex2f(-0.5f, -.5f);    // x, y
    glVertex2f(+0.5f, -.5f);    // x, y
    glVertex2f(+0.5f, -.6f);    // x, y
    glVertex2f(-0.5f, -.6f);    // x, y
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
