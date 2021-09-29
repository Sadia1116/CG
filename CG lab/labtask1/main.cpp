/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */
#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

/* Program entry point */
void init(){
     glClearColor(0.0f,0.0f,0.0f,0.0f);
     glOrtho(-5,+5,-10,+10,-5,+5);


}
void myDisplay(){
     glClear(GL_COLOR_BUFFER_BIT);



    glBegin(GL_LINE_LOOP);

        glVertex2d(0,0);
        glVertex2d(2,0);
        glVertex2d(3,2);
        glVertex2d(1,2);

        glVertex2d(0,0);
        glVertex2d(-2,0);
        glVertex2d(-3,2);
        glVertex2d(-1,2);

        glVertex2d(0,0);
        glVertex2d(-1,2);
        glVertex2d(0,4);
        glVertex2d(1,2);

        //--------------

        glVertex2d(0,0);
        glVertex2d(2,0);
        glVertex2d(3,-2);
        glVertex2d(1,-2);

        glVertex2d(0,0);
        glVertex2d(-2,0);
        glVertex2d(-3,-2);
        glVertex2d(-1,-2);

        glVertex2d(0,0);
        glVertex2d(-1,-2);
        glVertex2d(0,-4);
        glVertex2d(1,-2);

    glEnd();

    /*glColor3f(1.0,0.0,0.0);
    glBegin(GL_TRIANGLES);
        glVertex2d(0,0);
        glVertex2d(4,0);
        glVertex2d(0,2);
    glEnd();

    glColor3f(0.0,1.0,0.0);
    glBegin(GL_TRIANGLES);
        glVertex2d(0,0);
        glVertex2d(0,2);
        glVertex2d(-4,2);*/

    glEnd();


    /*glBegin(GL_QUADS);

        glVertex2d(0,0);
        glVertex2d(2,0);
        glVertex2d(3,2);
        glVertex2d(1,2);

        glVertex2d(0,0);
        glVertex2d(-2,0);
        glVertex2d(-3,2);
        glVertex2d(-1,2);

        glVertex2d(0,0);
        glVertex2d(-1,2);
        glVertex2d(0,4);
        glVertex2d(1,2);

        //--------------

        glVertex2d(0,0);
        glVertex2d(2,0);
        glVertex2d(3,-2);
        glVertex2d(1,-2);

        glVertex2d(0,0);
        glVertex2d(-2,0);
        glVertex2d(-3,-2);
        glVertex2d(-1,-2);

        glVertex2d(0,0);
        glVertex2d(-1,-2);
        glVertex2d(0,-4);
        glVertex2d(1,-2);

    glEnd();*/

     glFlush();
}
int main()
{
    //glutSwapBuffers());
    glutInitWindowSize(640,480);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutCreateWindow("First CG Lab");
    init ();
    glutDisplayFunc(myDisplay);
    glutMainLoop();

    return 0;
}
