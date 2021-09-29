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
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include<stdio.h>
#include<math.h>

void init()
{
    glClearColor(0.0f,0.0f,0.0f,0.0f);
    glOrtho(-5,+5,-10,+10,-5,+5);

}

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);

      glColor3f(1,1,1);

        glPushMatrix();
        glTranslated(0,0,0);
        glBegin(GL_POLYGON);

        //background white

        glVertex2d(2,8);
        glVertex2d(-2,8);
        glVertex2d(-2,-8);
        glVertex2d(2,-8);

        glEnd();
        glPopMatrix();



    glFlush();
    //glutSwapBuffers();

}


int main()
{

    glutInitWindowSize(1000,750);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutCreateWindow("Class Test");

    init();
    glutDisplayFunc(myDisplay);
    glutMainLoop();

    return 0;
}
