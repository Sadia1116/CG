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
#define PI 3.1416

float cx=0, cy=0, angle=0;
void init()
{
    glClearColor(0.19f,0.80f,0.19f,0.0f);
    glOrtho(-10,+10,-10,+10,-10,+10);

}

void circle(float radiusX,float radiusY)
{
    int i=0;
    float angle= 0;

    glBegin(GL_POLYGON);
    for(i=0;i<100;i++)
    {
        angle=2*PI*i/100;
        glVertex2d(radiusX*cos(angle),radiusY*sin(angle));
        //printf("Angle : %f , X-Axis : %f , Y-Axis : %f\n",angle,radiusX*cos(angle),radiusY*sin(angle));

    }
     glEnd();}
    void circle2(float radiusX,float radiusY)
{
    int i=0;
    float angle= 0;

    glBegin(GL_LINE_LOOP);
    for(i=0;i<100;i++)
    {
        angle=2*PI*i/100;
        glVertex2d(radiusX*cos(angle),radiusY*sin(angle));
        //printf("Angle : %f , X-Axis : %f , Y-Axis : %f\n",angle,radiusX*cos(angle),radiusY*sin(angle));

    }
    glEnd();}




void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    //............................pelnty area right

          glPushMatrix();
      glTranslated(7,2,0);

      glBegin(GL_LINES);

         glVertex2d(1,1);
            glVertex2d(-1,1);

          glEnd();
          glPopMatrix();
  //............................
           glPushMatrix();
      glTranslated(7,-4,0);

      glBegin(GL_LINES);

         glVertex2d(1,1);
            glVertex2d(-1,1);

          glEnd();
          glPopMatrix();

   //.................................
           glPushMatrix();
      glTranslated(4,0,0);

      glBegin(GL_LINES);

         glVertex2d(2,3);
            glVertex2d(2,-3);

          glEnd();
          glPopMatrix();
          //..............................penalty area right end
          //............................pelanty spot right
          glPushMatrix();

        glTranslated(-6.5,0,0);

        glColor3f(1,1,1);
        circle(0.1,0.2);

glPopMatrix();

          //.......................2nd penalty area left
           glPushMatrix();
      glTranslated(-7,2,0);

      glBegin(GL_LINES);

         glVertex2d(1,1);
            glVertex2d(-1,1);

          glEnd();
          glPopMatrix();
  //............................
           glPushMatrix();
      glTranslated(-7,-4,0);

      glBegin(GL_LINES);

         glVertex2d(1,1);
            glVertex2d(-1,1);

          glEnd();
          glPopMatrix();

   //.................................
           glPushMatrix();
      glTranslated(-8,0,0);

      glBegin(GL_LINES);

         glVertex2d(2,3);
            glVertex2d(2,-3);

          glEnd();
          glPopMatrix();
          //..................................penalty left end
          //............................ penalty spot left
           glPushMatrix();

        glTranslated(6.5,0,0);

        glColor3f(1,1,1);
        circle(0.1,0.2);

glPopMatrix();
//..................................penalty spotleft end
//.................................pelanty left mini
 glPushMatrix();
      glTranslated(-7.5,1,0);

      glBegin(GL_LINES);

         glVertex2d(0.5,1);
            glVertex2d(-0.5,1);

          glEnd();
          glPopMatrix();
  //............................
           glPushMatrix();
      glTranslated(-7.5,-2,0);

      glBegin(GL_LINES);

         glVertex2d(-0.5,0);
            glVertex2d(0.5,0);

          glEnd();
          glPopMatrix();

   //.................................
           glPushMatrix();
      glTranslated(-8,0,0);

      glBegin(GL_LINES);

         glVertex2d(1,2);
            glVertex2d(1,-2);

          glEnd();
          glPopMatrix();
          //...............................................pelanty left mini end
//.............................right mini
 glPushMatrix();
      glTranslated(7.5,1,0);

      glBegin(GL_LINES);

         glVertex2d(0.5,1);
            glVertex2d(-0.5,1);

          glEnd();
          glPopMatrix();
  //............................
           glPushMatrix();
      glTranslated(7.5,-2,0);

      glBegin(GL_LINES);

         glVertex2d(0.5,0);
            glVertex2d(-0.5,0);

          glEnd();
          glPopMatrix();

   //.................................
           glPushMatrix();
      glTranslated(6,0,0);

      glBegin(GL_LINES);

         glVertex2d(1,2);
            glVertex2d(1,-2);

          glEnd();
          glPopMatrix();






//------------------------------------right mini end
//left goal post.............................................start

glPushMatrix();
      glTranslated(-8.5,0,0);

      glBegin(GL_LINES);

         glVertex2d(-0.5,1);
            glVertex2d(0.5,1);

          glEnd();
          glPopMatrix();
  //............................
           glPushMatrix();
      glTranslated(-8.5,-1,0);

      glBegin(GL_LINES);

         glVertex2d(-0.5,0);
            glVertex2d(0.5,0);

          glEnd();
          glPopMatrix();

   //.................................
           glPushMatrix();
      glTranslated(-10,0,0);

      glBegin(GL_LINES);

         glVertex2d(1,1);
            glVertex2d(1,-1);

          glEnd();
          glPopMatrix();


//...................................................goalpost left end
//...................................................right goal post start




glPushMatrix();
      glTranslated(8.5,0,0);

      glBegin(GL_LINES);

         glVertex2d(-0.5,1);
            glVertex2d(0.5,1);

          glEnd();
          glPopMatrix();
  //............................
           glPushMatrix();
      glTranslated(8.5,-1,0);

      glBegin(GL_LINES);

         glVertex2d(-0.5,0);
            glVertex2d(0.5,0);

          glEnd();
          glPopMatrix();

   //.................................
           glPushMatrix();
      glTranslated(8,0,0);

      glBegin(GL_LINES);

         glVertex2d(1,1);
            glVertex2d(1,-1);

          glEnd();
          glPopMatrix();



//......................................................right goal post end
//.....................................................boundarystart
//.....................................up
      glPushMatrix();
      glTranslated(0,4,0);
        glScaled(4,2,1);
      glBegin(GL_LINES);

         glVertex2d(2,2);
            glVertex2d(-2,2);

          glEnd();
//................................down

         glPushMatrix();
      glTranslated(0,-8,0);

      glBegin(GL_LINES);

         glVertex2d(2,2);
            glVertex2d(-2,2);


          glEnd();
//................................right

          glPushMatrix();
      glTranslated(0,2,0);




      glBegin(GL_LINES);

         glVertex2d(0,8);
            glVertex2d(0,0);


          glEnd();
//...............................left
          glPushMatrix();
      glTranslated(2,0,0);




      glBegin(GL_LINES);

         glVertex2d(0,8);
            glVertex2d(0,0);


          glEnd();
//...........................middle
          glPushMatrix();
      glTranslated(-4,0,0);




      glBegin(GL_LINES);

         glVertex2d(0,8);
            glVertex2d(0,0);


          glEnd();
          glEnd();

//.............................middle center spot


glPushMatrix();

        glTranslated(2,4,0);

        glColor3f(1,1,1);
        circle(0.05,0.1);
//.....................................center cicle
glPushMatrix();

        glTranslated(0,0,0);

        glColor3f(1,1,1);
        circle2(0.5,1);






glPopMatrix();
//..............................





    glFlush();
    //glutSwapBuffers();

}



int main()
{

    glutInitWindowSize(1100,700);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutCreateWindow("after mid");

    init();
    glutDisplayFunc(myDisplay);

    glutMainLoop();

    return 0;
}
