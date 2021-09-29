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

      glBegin(GL_QUADS);
     glColor3ub(163, 163, 194);
     glVertex2f(0.05,-0.50);
     glVertex2f(0.05,0.15);
     glVertex2f(-0.05,0.15);
     glVertex2f(-0.05,-0.50);
     glEnd();

      glBegin(GL_QUADS);
     glColor3ub(179, 179, 204);
     glVertex2f(0.17,-0.50);
     glVertex2f(0.17,0.15);
     glVertex2f(0.05,0.15);
     glVertex2f(0.05,-0.50);
     glEnd();
//glass
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,0.12);
     glVertex2f(0.16,0.13);
     glVertex2f(0.06,0.13);
     glVertex2f(0.06,0.12);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,0.12);
     glVertex2f(0.16,0.13);
     glVertex2f(0.06,0.13);
     glVertex2f(0.06,0.12);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,0.10);
     glVertex2f(0.16,0.11);
     glVertex2f(0.06,0.11);
     glVertex2f(0.06,0.10);
     glEnd();
     glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,0.08);
     glVertex2f(0.16,0.09);
     glVertex2f(0.06,0.09);
     glVertex2f(0.06,0.08);
     glEnd();
     glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,0.06);
     glVertex2f(0.16,0.07);
     glVertex2f(0.06,0.07);
     glVertex2f(0.06,0.06);
     glEnd();
     glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,0.04);
     glVertex2f(0.16,0.05);
     glVertex2f(0.06,0.05);
     glVertex2f(0.06,0.04);
     glEnd();
     glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,0.02);
     glVertex2f(0.16,0.03);
     glVertex2f(0.06,0.03);
     glVertex2f(0.06,0.02);
     glEnd();
     glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,0.0);
     glVertex2f(0.16,0.01);
     glVertex2f(0.06,0.01);
     glVertex2f(0.06,0.0);
     glEnd();
     glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.02);
     glVertex2f(0.16,-0.01);
     glVertex2f(0.06,-0.01);
     glVertex2f(0.06,-0.02);
     glEnd();
 glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.04);
     glVertex2f(0.16,-0.03);
     glVertex2f(0.06,-0.03);
     glVertex2f(0.06,-0.04);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.06);
     glVertex2f(0.16,-0.05);
     glVertex2f(0.06,-0.05);
     glVertex2f(0.06,-0.06);
     glEnd();//
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.08);
     glVertex2f(0.16,-0.07);
     glVertex2f(0.06,-0.07);
     glVertex2f(0.06,-0.08);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.10);
     glVertex2f(0.16,-0.09);
     glVertex2f(0.06,-0.09);
     glVertex2f(0.06,-0.10);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.12);
     glVertex2f(0.16,-0.11);
     glVertex2f(0.06,-0.11);
     glVertex2f(0.06,-0.12);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.14);
     glVertex2f(0.16,-0.13);
     glVertex2f(0.06,-0.13);
     glVertex2f(0.06,-0.14);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.16);
     glVertex2f(0.16,-0.15);
     glVertex2f(0.06,-0.15);
     glVertex2f(0.06,-0.16);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.18);
     glVertex2f(0.16,-0.17);
     glVertex2f(0.06,-0.17);
     glVertex2f(0.06,-0.18);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.20);
     glVertex2f(0.16,-0.19);
     glVertex2f(0.06,-0.19);
     glVertex2f(0.06,-0.20);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.22);
     glVertex2f(0.16,-0.21);
     glVertex2f(0.06,-0.21);
     glVertex2f(0.06,-0.22);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.24);
     glVertex2f(0.16,-0.23);
     glVertex2f(0.06,-0.23);
     glVertex2f(0.06,-0.24);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.26);
     glVertex2f(0.16,-0.25);
     glVertex2f(0.06,-0.25);
     glVertex2f(0.06,-0.26);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.28);
     glVertex2f(0.16,-0.27);
     glVertex2f(0.06,-0.27);
     glVertex2f(0.06,-0.28);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.30);
     glVertex2f(0.16,-0.29);
     glVertex2f(0.06,-0.29);
     glVertex2f(0.06,-0.30);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.32);
     glVertex2f(0.16,-0.31);
     glVertex2f(0.06,-0.31);
     glVertex2f(0.06,-0.32);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.34);
     glVertex2f(0.16,-0.33);
     glVertex2f(0.06,-0.33);
     glVertex2f(0.06,-0.34);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.36);
     glVertex2f(0.16,-0.35);
     glVertex2f(0.06,-0.35);
     glVertex2f(0.06,-0.36);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.06);
     glVertex2f(0.16,-0.05);
     glVertex2f(0.06,-0.05);
     glVertex2f(0.06,-0.06);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(193, 215, 215);
     glVertex2f(0.16,-0.06);
     glVertex2f(0.16,-0.05);
     glVertex2f(0.06,-0.05);
     glVertex2f(0.06,-0.06);
     glEnd();


//Right blding 2

     glBegin(GL_QUADS);
     glColor3ub(117, 163, 163);
     glVertex2f(0.25,-0.50);
     glVertex2f(0.25,0.05);
     glVertex2f(0.17,0.05);
     glVertex2f(0.17,-0.50);
     glEnd();

//Right blding 3

     glBegin(GL_QUADS);
     glColor3ub(133, 173, 173);
     glVertex2f(0.37,-0.50);
     glVertex2f(0.37,0.1);
     glVertex2f(0.25,0.1);
     glVertex2f(0.25,-0.50);
     glEnd();

//GLASS
      glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.365,-0.50);
     glVertex2f(0.365,0.085);
     glVertex2f(0.30,0.085);
     glVertex2f(0.30,-0.50);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.29,-0.50);
     glVertex2f(0.29,0.085);
     glVertex2f(0.255,0.085);
     glVertex2f(0.255,-0.50);
     glEnd();



//Right blding 5

     glBegin(GL_QUADS);
     glColor3ub(117, 163, 163);
     glVertex2f(0.53,-0.50);
     glVertex2f(0.53,0.3);
     glVertex2f(0.37,0.3);
     glVertex2f(0.37,-0.50);
     glEnd();


//glass
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.29);
     glVertex2f(0.525,0.28);
     glVertex2f(0.42,0.28);
     glVertex2f(0.42,0.29);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.27);
     glVertex2f(0.525,0.26);
     glVertex2f(0.42,0.26);
     glVertex2f(0.42,0.27);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.25);
     glVertex2f(0.525,0.24);
     glVertex2f(0.42,0.24);
     glVertex2f(0.42,0.25);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.23);
     glVertex2f(0.525,0.22);
     glVertex2f(0.42,0.22);
     glVertex2f(0.42,0.23);
     glEnd();



     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.21);
     glVertex2f(0.525,0.20);
     glVertex2f(0.42,0.20);
     glVertex2f(0.42,0.21);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.19);
     glVertex2f(0.525,0.18);
     glVertex2f(0.42,0.18);
     glVertex2f(0.42,0.19);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.17);
     glVertex2f(0.525,0.16);
     glVertex2f(0.42,0.16);
     glVertex2f(0.42,0.17);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.15);
     glVertex2f(0.525,0.14);
     glVertex2f(0.42,0.14);
     glVertex2f(0.42,0.15);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.13);
     glVertex2f(0.525,0.12);
     glVertex2f(0.42,0.12);
     glVertex2f(0.42,0.13);
     glEnd();



     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.11);
     glVertex2f(0.525,0.10);
     glVertex2f(0.42,0.10);
     glVertex2f(0.42,0.11);
     glEnd();

 glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.09);
     glVertex2f(0.525,0.08);
     glVertex2f(0.42,0.08);
     glVertex2f(0.42,0.09);
     glEnd();

 glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.07);
     glVertex2f(0.525,0.06);
     glVertex2f(0.42,0.06);
     glVertex2f(0.42,0.07);
     glEnd();

 glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.05);
     glVertex2f(0.525,0.04);
     glVertex2f(0.42,0.04);
     glVertex2f(0.42,0.05);
     glEnd();

      glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.03);
     glVertex2f(0.525,0.02);
     glVertex2f(0.42,0.02);
     glVertex2f(0.42,0.03);
     glEnd();

      glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,0.01);
     glVertex2f(0.525,0.00);
     glVertex2f(0.42,0.00);
     glVertex2f(0.42,0.01);
     glEnd();

      glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.01);
     glVertex2f(0.525,-0.02);
     glVertex2f(0.42,-0.02);
     glVertex2f(0.42,-0.01);
     glEnd();

 glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.03);
     glVertex2f(0.525,-0.04);
     glVertex2f(0.42,-0.04);
     glVertex2f(0.42,-0.03);
     glEnd();


 glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.05);
     glVertex2f(0.525,-0.06);
     glVertex2f(0.42,-0.06);
     glVertex2f(0.42,-0.05);
     glEnd();

 glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.07);
     glVertex2f(0.525,-0.08);
     glVertex2f(0.42,-0.08);
     glVertex2f(0.42,-0.07);
     glEnd();

      glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.09);
     glVertex2f(0.525,-0.10);
     glVertex2f(0.42,-0.10);
     glVertex2f(0.42,-0.09);
     glEnd();

      glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.11);
     glVertex2f(0.525,-0.12);
     glVertex2f(0.42,-0.12);
     glVertex2f(0.42,-0.11);
     glEnd();


    glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.13);
     glVertex2f(0.525,-0.14);
     glVertex2f(0.42,-0.14);
     glVertex2f(0.42,-0.13);
     glEnd();

    glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.15);
     glVertex2f(0.525,-0.16);
     glVertex2f(0.42,-0.16);
     glVertex2f(0.42,-0.15);
     glEnd();

    glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.17);
     glVertex2f(0.525,-0.18);
     glVertex2f(0.42,-0.18);
     glVertex2f(0.42,-0.17);
     glEnd();


      glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.19);
     glVertex2f(0.525,-0.20);
     glVertex2f(0.42,-0.20);
     glVertex2f(0.42,-0.19);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.21);
     glVertex2f(0.525,-0.22);
     glVertex2f(0.42,-0.22);
     glVertex2f(0.42,-0.21);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.23);
     glVertex2f(0.525,-0.24);
     glVertex2f(0.42,-0.24);
     glVertex2f(0.42,-0.23);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.25);
     glVertex2f(0.525,-0.26);
     glVertex2f(0.42,-0.26);
     glVertex2f(0.42,-0.25);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.27);
     glVertex2f(0.525,-0.28);
     glVertex2f(0.42,-0.28);
     glVertex2f(0.42,-0.27);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.29);
     glVertex2f(0.525,-0.30);
     glVertex2f(0.42,-0.30);
     glVertex2f(0.42,-0.29);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.31);
     glVertex2f(0.525,-0.32);
     glVertex2f(0.42,-0.32);
     glVertex2f(0.42,-0.31);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.33);
     glVertex2f(0.525,-0.34);
     glVertex2f(0.42,-0.34);
     glVertex2f(0.42,-0.33);
     glEnd();
     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.35);
     glVertex2f(0.525,-0.36);
     glVertex2f(0.42,-0.36);
     glVertex2f(0.42,-0.35);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.37);
     glVertex2f(0.525,-0.38);
     glVertex2f(0.42,-0.38);
     glVertex2f(0.42,-0.37);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.39);
     glVertex2f(0.525,-0.40);
     glVertex2f(0.42,-0.40);
     glVertex2f(0.42,-0.39);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.41);
     glVertex2f(0.525,-0.42);
     glVertex2f(0.42,-0.42);
     glVertex2f(0.42,-0.41);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.525,-0.43);
     glVertex2f(0.525,-0.44);
     glVertex2f(0.42,-0.44);
     glVertex2f(0.42,-0.43);
     glEnd();

// Right blding 4

  glBegin(GL_QUADS);
     glColor3ub(102, 153, 153);
     glVertex2f(0.5,-0.50);
     glVertex2f(0.5,-0.21);
     glVertex2f(0.3,-0.21);
     glVertex2f(0.3,-0.50);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(117, 163, 163);
     glVertex2f(0.75,-0.50);
     glVertex2f(0.75,-0.21);
     glVertex2f(0.5,-0.21);
     glVertex2f(0.5,-0.50);
     glEnd();

 //glass

     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.23);
     glVertex2f(0.74,-0.22);
     glVertex2f(0.51,-0.22);
     glVertex2f(0.51,-0.23);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.25);
     glVertex2f(0.74,-0.24);
     glVertex2f(0.51,-0.24);
     glVertex2f(0.51,-0.25);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.27);
     glVertex2f(0.74,-0.26);
     glVertex2f(0.51,-0.26);
     glVertex2f(0.51,-0.27);
     glEnd();


glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.29);
     glVertex2f(0.74,-0.28);
     glVertex2f(0.51,-0.28);
     glVertex2f(0.51,-0.29);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.31);
     glVertex2f(0.74,-0.30);
     glVertex2f(0.51,-0.30);
     glVertex2f(0.51,-0.31);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.33);
     glVertex2f(0.74,-0.32);
     glVertex2f(0.51,-0.32);
     glVertex2f(0.51,-0.33);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.35);
     glVertex2f(0.74,-0.34);
     glVertex2f(0.51,-0.34);
     glVertex2f(0.51,-0.35);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.37);
     glVertex2f(0.74,-0.36);
     glVertex2f(0.51,-0.36);
     glVertex2f(0.51,-0.37);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.39);
     glVertex2f(0.74,-0.38);
     glVertex2f(0.51,-0.38);
     glVertex2f(0.51,-0.39);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.41);
     glVertex2f(0.74,-0.40);
     glVertex2f(0.51,-0.40);
     glVertex2f(0.51,-0.41);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.43);
     glVertex2f(0.74,-0.42);
     glVertex2f(0.51,-0.42);
     glVertex2f(0.51,-0.43);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.45);
     glVertex2f(0.74,-0.44);
     glVertex2f(0.51,-0.44);
     glVertex2f(0.51,-0.45);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.74,-0.47);
     glVertex2f(0.74,-0.46);
     glVertex2f(0.51,-0.46);
     glVertex2f(0.51,-0.47);
     glEnd();

//Right blding 8
    glBegin(GL_QUADS);
     glColor3ub(133, 173, 173);
     glVertex2f(0.85,-0.50);
     glVertex2f(0.85,-0.25);
     glVertex2f(0.8,-0.25);
     glVertex2f(0.8,-0.50);
     glEnd();
//Right blding 6
     glBegin(GL_QUADS);
     glColor3ub(102, 153, 153);
     glVertex2f(0.85,-0.50);
     glVertex2f(0.85,-0.27);
     glVertex2f(0.75,-0.27);
     glVertex2f(0.75,-0.50);
     glEnd();
//glass
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.84,-0.45);
     glVertex2f(0.84,-0.44);
     glVertex2f(0.76,-0.44);
     glVertex2f(0.76,-0.45);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.84,-0.43);
     glVertex2f(0.84,-0.42);
     glVertex2f(0.76,-0.42);
     glVertex2f(0.76,-0.43);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.84,-0.41);
     glVertex2f(0.84,-0.40);
     glVertex2f(0.76,-0.40);
     glVertex2f(0.76,-0.41);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.84,-0.39);
     glVertex2f(0.84,-0.38);
     glVertex2f(0.76,-0.38);
     glVertex2f(0.76,-0.39);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.84,-0.37);
     glVertex2f(0.84,-0.36);
     glVertex2f(0.76,-0.36);
     glVertex2f(0.76,-0.37);
     glEnd();
   glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.84,-0.34);
     glVertex2f(0.84,-0.35);
     glVertex2f(0.76,-0.35);
     glVertex2f(0.76,-0.34);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.84,-0.32);
     glVertex2f(0.84,-0.33);
     glVertex2f(0.76,-0.33);
     glVertex2f(0.76,-0.32);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.84,-0.30);
     glVertex2f(0.84,-0.31);
     glVertex2f(0.76,-0.31);
     glVertex2f(0.76,-0.30);
     glEnd();

      glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(0.84,-0.28);
     glVertex2f(0.84,-0.29);
     glVertex2f(0.76,-0.29);
     glVertex2f(0.76,-0.28);
     glEnd();

//Right blding 7


     glBegin(GL_QUADS);
     glColor3ub(92, 138, 138);
     glVertex2f(0.9,-0.50);
     glVertex2f(0.9,-0.105);
     glVertex2f(0.85,-0.1);
     glVertex2f(0.85,-0.50);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(102, 153, 153);
     glVertex2f(1.,-0.50);
     glVertex2f(1.0,-0.105);
     glVertex2f(0.9,-0.105);
     glVertex2f(0.9,-0.50);
     glEnd();
//glass
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.45);
     glVertex2f(.995,-0.44);
     glVertex2f(0.91,-0.44);
     glVertex2f(0.91,-0.45);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.43);
     glVertex2f(.995,-0.42);
     glVertex2f(0.91,-0.42);
     glVertex2f(0.91,-0.43);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.41);
     glVertex2f(.995,-0.40);
     glVertex2f(0.91,-0.40);
     glVertex2f(0.91,-0.41);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.39);
     glVertex2f(.995,-0.38);
     glVertex2f(0.91,-0.38);
     glVertex2f(0.91,-0.39);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.37);
     glVertex2f(.995,-0.36);
     glVertex2f(0.91,-0.36);
     glVertex2f(0.91,-0.37);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.35);
     glVertex2f(.995,-0.34);
     glVertex2f(0.91,-0.34);
     glVertex2f(0.91,-0.35);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.33);
     glVertex2f(.995,-0.32);
     glVertex2f(0.91,-0.32);
     glVertex2f(0.91,-0.33);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.31);
     glVertex2f(.995,-0.30);
     glVertex2f(0.91,-0.30);
     glVertex2f(0.91,-0.31);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.29);
     glVertex2f(.995,-0.28);
     glVertex2f(0.91,-0.28);
     glVertex2f(0.91,-0.29);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.27);
     glVertex2f(.995,-0.26);
     glVertex2f(0.91,-0.26);
     glVertex2f(0.91,-0.27);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.25);
     glVertex2f(.995,-0.24);
     glVertex2f(0.91,-0.24);
     glVertex2f(0.91,-0.25);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.23);
     glVertex2f(.995,-0.22);
     glVertex2f(0.91,-0.22);
     glVertex2f(0.91,-0.23);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.21);
     glVertex2f(.995,-0.20);
     glVertex2f(0.91,-0.20);
     glVertex2f(0.91,-0.21);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.19);
     glVertex2f(.995,-0.18);
     glVertex2f(0.91,-0.18);
     glVertex2f(0.91,-0.19);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.17);
     glVertex2f(.995,-0.16);
     glVertex2f(0.91,-0.16);
     glVertex2f(0.91,-0.17);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.15);
     glVertex2f(.995,-0.14);
     glVertex2f(0.91,-0.14);
     glVertex2f(0.91,-0.15);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(.995,-0.13);
     glVertex2f(.995,-0.12);
     glVertex2f(0.91,-0.12);
     glVertex2f(0.91,-0.13);
     glEnd();


//LEFT SIDE BLDING 1  //************************


     glBegin(GL_QUADS);
     glColor3ub(204, 51, 0);
     glVertex2f(-.95,-0.4);
     glVertex2f(-.95,0.17);
     glVertex2f(-1.0,0.17);
     glVertex2f(-1.0,-0.4);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(230, 57, 0);
     glVertex2f(-.8,-0.4);
     glVertex2f(-.8,0.17);
     glVertex2f(-.950,0.17);
     glVertex2f(-.950,-0.4);
     glEnd();



//glass#####
glBegin(GL_QUADS);
     glColor3ub(255, 128, 0);
     glVertex2f(-.81,-0.4);
     glVertex2f(-.81,0.15);
     glVertex2f(-.945,0.15);
     glVertex2f(-.945,-0.4);
     glEnd();

glBegin(GL_QUADS);
     glColor3ub(230, 115, 0);
     glVertex2f(-.96,-0.4);
     glVertex2f(-.96,0.15);
     glVertex2f(-.995,0.15);
     glVertex2f(-.995,-0.4);
     glEnd();


//LEFT SIDE BLDING 2


glBegin(GL_QUADS);
     glColor3ub(102, 153, 153);
     glVertex2f(-.75,-0.4);
     glVertex2f(-.75,-0.13);
     glVertex2f(-0.8,-0.13);
     glVertex2f(-.8,-0.4);
     glEnd();
//LEFT SIDE BLDING 3

     glBegin(GL_QUADS);
     glColor3ub(117, 163, 163);
     glVertex2f(-.65,-0.4);
     glVertex2f(-.65,-0.08);
     glVertex2f(-0.75,-0.08);
     glVertex2f(-.75,-0.4);
     glEnd();

//LEFT SIDE BLDING 4


//bldingside

     glBegin(GL_QUADS);
     glColor3ub(191, 191, 191);
     glVertex2f(-.6,-0.4);
     glVertex2f(-.6,0.31);
     glVertex2f(-0.65,0.31);
     glVertex2f(-.65,-0.4);
     glEnd();
//miror 1


glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(-.59,-0.4);
     glVertex2f(-.59,0.29);
     glVertex2f(-0.64,0.29);
     glVertex2f(-.64,-0.4);
     glEnd();

//blding

     glBegin(GL_QUADS);
     glColor3ub(204, 204, 204);
     glVertex2f(-.5,-0.4);
     glVertex2f(-.5,0.31);
     glVertex2f(-0.6,0.31);
     glVertex2f(-.6,-0.4);
     glEnd();

//miror 2
glBegin(GL_QUADS);
     glColor3ub(153, 153, 255);
     glVertex2f(-.51,-0.4);
     glVertex2f(-.51,0.29);
     glVertex2f(-0.59,0.29);
     glVertex2f(-.59,-0.4);
     glEnd();

//LEFT SIDE BLDING 5

      glBegin(GL_QUADS);
     glColor3ub(198, 140, 83);
     glVertex2f(-.45,-0.4);
     glVertex2f(-.45,0.09);
     glVertex2f(-0.5,0.09);
     glVertex2f(-0.5,-0.4);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(204, 153, 102);
     glVertex2f(-.4,-0.4);
     glVertex2f(-.4,0.09);
     glVertex2f(-0.45,0.09);
     glVertex2f(-0.45,-0.4);
     glEnd();
//Glass
glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.405,-0.4);
     glVertex2f(-.405,0.08);
     glVertex2f(-0.447,0.08);
     glVertex2f(-0.447,-0.4);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.457,-0.4);
     glVertex2f(-.457,0.08);
     glVertex2f(-0.495,0.08);
     glVertex2f(-0.495,-0.4);
     glEnd();

//thamba

glBegin(GL_QUADS);
     glColor3ub(89, 89, 89);
     glVertex2f(-.35,-0.4);
     glVertex2f(-.35,0.35);
     glVertex2f(-0.4,0.35);
    glVertex2f(-0.4,-0.4);
      glEnd();
glBegin(GL_QUADS);
     glColor3ub(89, 89, 89);
     glVertex2f(-.36,0.35);
     glVertex2f(-.36,0.37);
     glVertex2f(-0.39,0.37);
    glVertex2f(-0.39,0.35);
      glEnd();


      glBegin(GL_QUADS);//fst mota
     glColor3ub(89, 89, 89);
     glVertex2f(-.345,0.37);
     glVertex2f(-.345,0.45);
     glVertex2f(-0.405,0.45);
    glVertex2f(-0.405,0.37);
      glEnd();

      glBegin(GL_QUADS);
     glColor3ub(89, 89, 89);
     glVertex2f(-.36,0.45);
     glVertex2f(-.36,0.47);
     glVertex2f(-0.39,0.47);
    glVertex2f(-0.39,0.45);
      glEnd();

       glBegin(GL_QUADS);
     glColor3ub(89, 89, 89);
     glVertex2f(-.35,0.47);
     glVertex2f(-.35,0.48);
     glVertex2f(-0.40,0.48);
    glVertex2f(-0.40,0.47);
      glEnd();


       glBegin(GL_QUADS);//2nd mota
     glColor3ub(89, 89, 89);
     glVertex2f(-.33,0.48);
     glVertex2f(-.33,0.54);
     glVertex2f(-0.42,0.54);
    glVertex2f(-0.42,0.48);
      glEnd();
glBegin(GL_QUADS);
     glColor3ub(89, 89, 89);
     glVertex2f(-.36,0.54);
     glVertex2f(-.36,0.56);
     glVertex2f(-0.39,0.56);
    glVertex2f(-0.39,0.54);
      glEnd();

      glBegin(GL_QUADS);//dandi
     glColor3ub(89, 89, 89);
     glVertex2f(-.38,0.56);
     glVertex2f(-.38,0.8);
     glVertex2f(-0.385,0.8);
    glVertex2f(-0.385,0.56);
      glEnd();


      glBegin(GL_QUADS);
     glColor3ub(89, 89, 89);
     glVertex2f(-.365,0.56);
     glVertex2f(-.365,0.8);
     glVertex2f(-0.37,0.8);
    glVertex2f(-0.37,0.56);
      glEnd();




      glBegin(GL_QUADS);//dandi matha
     glColor3ub(89, 89, 89);
     glVertex2f(-.365,0.8);
     glVertex2f(-.365,0.81);
     glVertex2f(-0.385,0.81);
    glVertex2f(-0.385,0.8);
      glEnd();

  //thamba dim

//left blding 6


     glBegin(GL_QUADS);
     glColor3ub(204, 153, 102);
     glVertex2f(-.2,-0.4);
     glVertex2f(-.2,-0.09);
     glVertex2f(-0.3,-0.09);
     glVertex2f(-0.3,-0.4);
      glEnd();

     glBegin(GL_QUADS);
     glColor3ub(198, 140, 83);
     glVertex2f(-.3,-0.4);
     glVertex2f(-.3,-0.09);
     glVertex2f(-0.37,-0.09);
     glVertex2f(-0.37,-0.4);
      glEnd();
//Glass
glBegin(GL_QUADS);
     glColor3ub(214, 214, 194);
     glVertex2f(-.31,-0.4);
     glVertex2f(-.31,-0.10);
     glVertex2f(-0.365,-0.10);
     glVertex2f(-0.365,-0.4);
      glEnd();

glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.21,-0.4);
     glVertex2f(-.21,-0.10);
     glVertex2f(-0.29,-0.10);
     glVertex2f(-0.29,-0.4);
      glEnd();




//left blding 7


glBegin(GL_QUADS);
     glColor3ub(117, 163, 163);
     glVertex2f(-.1,-0.4);
     glVertex2f(-.1,-0.15);
     glVertex2f(-0.15,-0.15);
    glVertex2f(-0.15,-0.4);
      glEnd();

glBegin(GL_QUADS);
     glColor3ub(102, 153, 153);
     glVertex2f(-.15,-0.4);
     glVertex2f(-.15,-0.15);
     glVertex2f(-0.2,-0.15);
    glVertex2f(-0.2,-0.4);
      glEnd();
//Glass
glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.16);
     glVertex2f(-.103,-0.17);
     glVertex2f(-0.145,-0.17);
    glVertex2f(-0.145,-0.16);
      glEnd();

glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.18);
     glVertex2f(-.103,-0.19);
     glVertex2f(-0.145,-0.19);
    glVertex2f(-0.145,-0.18);
      glEnd();

glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.20);
     glVertex2f(-.103,-0.21);
     glVertex2f(-0.145,-0.21);
    glVertex2f(-0.145,-0.20);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.22);
     glVertex2f(-.103,-0.23);
     glVertex2f(-0.145,-0.23);
    glVertex2f(-0.145,-0.22);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.24);
     glVertex2f(-.103,-0.25);
     glVertex2f(-0.145,-0.25);
    glVertex2f(-0.145,-0.24);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.26);
     glVertex2f(-.103,-0.27);
     glVertex2f(-0.145,-0.27);
    glVertex2f(-0.145,-0.26);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.28);
     glVertex2f(-.103,-0.29);
     glVertex2f(-0.145,-0.29);
    glVertex2f(-0.145,-0.28);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.30);
     glVertex2f(-.103,-0.31);
     glVertex2f(-0.145,-0.31);
    glVertex2f(-0.145,-0.30);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.32);
     glVertex2f(-.103,-0.33);
     glVertex2f(-0.145,-0.33);
    glVertex2f(-0.145,-0.32);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.34);
     glVertex2f(-.103,-0.35);
     glVertex2f(-0.145,-0.35);
    glVertex2f(-0.145,-0.34);
      glEnd();
       glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.103,-0.36);
     glVertex2f(-.103,-0.37);
     glVertex2f(-0.145,-0.37);
    glVertex2f(-0.145,-0.36);
      glEnd();


glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.16);
     glVertex2f(-.155,-0.17);
     glVertex2f(-0.195,-0.17);
    glVertex2f(-0.195,-0.16);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.18);
     glVertex2f(-.155,-0.19);
     glVertex2f(-0.195,-0.19);
    glVertex2f(-0.195,-0.18);
      glEnd();

glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.20);
     glVertex2f(-.155,-0.21);
     glVertex2f(-0.195,-0.21);
     glVertex2f(-0.195,-0.20);
      glEnd();
glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.22);
     glVertex2f(-.155,-0.23);
     glVertex2f(-0.195,-0.23);
    glVertex2f(-0.195,-0.22);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.24);
     glVertex2f(-.155,-0.25);
     glVertex2f(-0.195,-0.25);
    glVertex2f(-0.195,-0.24);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.26);
     glVertex2f(-.155,-0.27);
     glVertex2f(-0.195,-0.27);
    glVertex2f(-0.195,-0.26);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.28);
     glVertex2f(-.155,-0.29);
     glVertex2f(-0.195,-0.29);
    glVertex2f(-0.195,-0.28);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.30);
     glVertex2f(-.155,-0.31);
     glVertex2f(-0.195,-0.31);
    glVertex2f(-0.195,-0.30);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.32);
     glVertex2f(-.155,-0.33);
     glVertex2f(-0.195,-0.33);
    glVertex2f(-0.195,-0.32);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.34);
     glVertex2f(-.155,-0.35);
     glVertex2f(-0.195,-0.35);
    glVertex2f(-0.195,-0.34);
      glEnd();
      glBegin(GL_QUADS);
     glColor3ub(224, 224, 209);
     glVertex2f(-.155,-0.36);
     glVertex2f(-.155,-0.37);
     glVertex2f(-0.195,-0.37);
    glVertex2f(-0.195,-0.36);
      glEnd();

//choto thamba

      glBegin(GL_QUADS);
     glColor3ub(191, 191, 191);
     glVertex2f(-.14,-0.15);
     glVertex2f(-.14,0.05);
     glVertex2f(-0.144,0.05);
    glVertex2f(-0.144,-0.15);
      glEnd();

 glBegin(GL_QUADS);
     glColor3ub(191, 191, 191);
     glVertex2f(-.16,-0.15);
     glVertex2f(-.16,0.05);
     glVertex2f(-0.164,0.05);
    glVertex2f(-0.164,-0.15);
      glEnd();


       glBegin(GL_QUADS);
     glColor3ub(191, 191, 191);
     glVertex2f(-.14,-0.0);
     glVertex2f(-.14,0.05);
     glVertex2f(-0.164,0.05);
    glVertex2f(-0.164,-0.0);
      glEnd();

      glBegin(GL_QUADS);
     glColor3ub(191, 191, 191);
     glVertex2f(-.151,0.05);
     glVertex2f(-.151,0.09);
     glVertex2f(-0.153,0.09);
    glVertex2f(-0.153,0.05);
      glEnd();


glBegin(GL_QUADS);//lite
     glColor3ub(255, 0, 0);
     glVertex2f(-.151,0.09);
     glVertex2f(-.151,0.095);
     glVertex2f(-0.153,0.095);
     glVertex2f(-0.153,0.09);
     glEnd();
//left blding 8


glBegin(GL_QUADS);
     glColor3ub(179, 179, 204);
     glVertex2f(-.05,-0.5);
     glVertex2f(-.05,-0.1);
     glVertex2f(-0.1,-0.1);
     glVertex2f(-0.1,-0.5);
     glEnd();


   //land blding

   /*glBegin(GL_POLYGON);
     glColor3ub(115, 115, 115);
     glVertex2f(-0.195,-0.3);
     glVertex2f(-0.2,-0.285);
     glVertex2f(-0.30,-0.2);
     glVertex2f(-0.40,-0.185);
     glVertex2f(-0.550,-0.2);
     glVertex2f(-0.60,-0.25);
     glEnd();*/
//BRIZ

 glBegin(GL_QUADS);//1
     glColor3ub(179, 179, 179);
     glVertex2f(0.35,-0.5);
     glVertex2f(0.35,-0.48);
     glVertex2f(0.335,-0.48);
     glVertex2f(.335,-0.50);
     glEnd();
glBegin(GL_QUADS);//11
     glColor3ub(179, 179, 179);
     glVertex2f(0.355,-0.48);
     glVertex2f(0.355,-0.477);
     glVertex2f(0.330,-0.477);
     glVertex2f(.330,-0.48);
     glEnd();


glBegin(GL_QUADS);//2
     glColor3ub(179, 179, 179);
     glVertex2f(0.7,-0.5);
     glVertex2f(0.7,-0.48);
     glVertex2f(0.685,-0.48);
     glVertex2f(.685,-0.50);
     glEnd();

glBegin(GL_QUADS);//21
     glColor3ub(179, 179, 179);
     glVertex2f(0.705,-0.48);
     glVertex2f(0.706,-0.477);
     glVertex2f(0.680,-0.477);
     glVertex2f(.680,-0.48);
     glEnd();



glBegin(GL_QUADS);//3
     glColor3ub(179, 179, 179);
     glVertex2f(0.999,-0.5);
     glVertex2f(0.999,-0.48);
     glVertex2f(0.985,-0.48);
     glVertex2f(.985,-0.50);
     glEnd();


glBegin(GL_QUADS);//31
     glColor3ub(179, 179, 179);
     glVertex2f(0.99905,-0.48);
     glVertex2f(0.99905,-0.477);
     glVertex2f(0.980,-0.477);
     glVertex2f(.980,-0.48);
     glEnd();

glBegin(GL_QUADS);//BRZ road
     glColor3ub(179, 179, 179);
     glVertex2f(1.0,-0.477);
     glVertex2f(1.0,-0.457);
     glVertex2f(0.17,-0.457);
     glVertex2f(.17,-0.477);
     glEnd();

//BRIZ CAR
glPushMatrix();
glTranslatef(0.0f,0.0f, 0.0f);
glBegin(GL_QUADS);//c1
     glColor3ub(255, 0, 0);
     glVertex2f(.99,-0.47);
     glVertex2f(.99,-0.460);
     glVertex2f(0.985,-0.460);
     glVertex2f(.985,-0.47);
     glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(0.0f,0.0f, 0.0f);
glBegin(GL_QUADS);//c2
     glColor3ub(0, 0, 0);
     glVertex2f(.980,-0.47);
     glVertex2f(.980,-0.460);
     glVertex2f(0.975,-0.460);
     glVertex2f(.975,-0.47);
     glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(0.0f,0.0f, 0.0f);
glBegin(GL_QUADS);//c3
     glColor3ub(0, 0, 153);
     glVertex2f(.780,-0.47);
     glVertex2f(.780,-0.460);
     glVertex2f(0.775,-0.460);
     glVertex2f(.775,-0.47);
     glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(0.0f,0.0f, 0.0f);
glBegin(GL_QUADS);//c3
     glColor3ub(255, 0, 0);
     glVertex2f(.790,-0.47);
     glVertex2f(.790,-0.460);
     glVertex2f(0.785,-0.460);
     glVertex2f(.785,-0.47);
     glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(0.0f,0.0f, 0.0f);
glBegin(GL_QUADS);//c4
     glColor3ub(0, 0, 153);
     glVertex2f(.680,-0.47);
     glVertex2f(.680,-0.460);
     glVertex2f(0.675,-0.460);
     glVertex2f(.675,-0.47);
     glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(0.0f,0.0f, 0.0f);
glBegin(GL_QUADS);//c4
     glColor3ub(255, 0, 0);
     glVertex2f(.690,-0.47);
     glVertex2f(.690,-0.460);
     glVertex2f(0.685,-0.460);
     glVertex2f(.685,-0.47);
     glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(0.0f,0.0f, 0.0f);
glBegin(GL_QUADS);//c5
     glColor3ub(0, 0, 153);
     glVertex2f(.580,-0.47);
     glVertex2f(.580,-0.460);
     glVertex2f(0.575,-0.460);
     glVertex2f(.575,-0.47);
     glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(0.0f,0.0f, 0.0f);
glBegin(GL_QUADS);//c5
     glColor3ub(255, 0, 0);
     glVertex2f(.5950,-0.47);
     glVertex2f(.5950,-0.460);
     glVertex2f(0.590,-0.460);
     glVertex2f(.590,-0.47);
     glEnd();
glPopMatrix();


glPushMatrix();
glTranslatef(0,0.0f, 0.0f);
glBegin(GL_QUADS);//c6
     glColor3ub(0, 0, 153);
     glVertex2f(.480,-0.47);
     glVertex2f(.480,-0.460);
     glVertex2f(0.475,-0.460);
     glVertex2f(.475,-0.47);
   glEnd();
glPopMatrix();


    glFlush();
    //glutSwapBuffers();

}


int main()
{

    glutInitWindowSize(650,750);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutCreateWindow("Class Test");

    init();
    glutDisplayFunc(myDisplay);
    glutMainLoop();

    return 0;
}
