#include<GL/glut.h> 
#include<stdio.h>
#include<stdlib.h>
void display();
void* currentfont;

GLfloat tx = 0.0, ty = 0.0, t1x = 0.0, t1y =0.0, t2x = 0.0, t2y = 0.0, t3x = 0.0, t3y =0.0, t4x = 0.0, t4y = 0.0, t5x = 0.0, t5y = 0.0, t6x = 0.0, t6y = 0.0, t7x = 0.0, t7y = 0.0, t8x = 0.0, t8y = 0.0;
GLint c1 = 0, c2 = 0, f1 = 0, f2 = 0;
int flag = 0, f = 0;

void setFont(void* font) //set font
{
    currentfont = font;
}

void drawstring(float x, float y, float z, char * string) //to display text messages
{
    char* c;
    glRasterPos3f(x, y, z);
    for (c = string; *c != '\0'; c++)
    {
        glColor3f(0.0, 0.0, 0.0);
        glutBitmapCharacter(currentfont, *c);
    }
}

void title()    //welcome page
        {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
         setFont(GLUT_BITMAP_HELVETICA_18);
         glBegin(GL_POLYGON);
         glColor3f(0.0,0.1,0.2);
         glVertex2i(0,500);
         glColor3f(0.0,0.0,0.0);
         glVertex2i(0,0);
         glColor3f(0.0,0.0,0.0);
         glVertex2i(500,0);
         glColor3f(0.0,0.1,0.2);
         glVertex2i(500,500);
         glEnd();
         glColor3f(1.0,0.0,1.0);
         drawstring(20.0, 435.0, 1.0, "* * G R A P H I C A L I L L U S T R A T I O N OF S E L E C T I V E R  E P E A T A R Q P R O T O C O L * *");
         glColor3f(1.0, 1.0, 1.0);
         drawstring(200.0, 365.0, 1.0, "SUBMITTED BY");
        glColor3f(0.0, 1.0, 1.0);
        drawstring(200.0, 340.0, 1.0, "Sahana B C 4VV18CS124");
        glColor3f(0.0, 1.0, 1.0);
        drawstring(200.0, 310.0, 1.0, "Soumya Sanglad 4VV18CS139");

        glColor3f(1.0, 1.0, 1.0);
    drawstring(190.0, 260.0, 1.0, "UNDER THE GUIDANCE OF");

        glColor3f(0.0, 1.0, 1.0);
    drawstring(70.0, 230.0, 1.0, "PROF. ARPITHA M S");

        setFont(GLUT_BITMAP_HELVETICA_12);

    glColor3f(0.0, 1.0, 1.0);
    drawstring(70.0, 215.0, 1.0, "Asst.Prof, Dept of CSE");

        glColor3f(0.0, 1.0, 1.0);
    drawstring(70.0, 200.0, 1.0, "VVCE,MYSORE");

    setFont(GLUT_BITMAP_HELVETICA_18);

    glColor3f(0.0, 1.0, 1.0);
    drawstring(280.0, 230.0, 1.0, " PROF.Meghana M");
        setFont(GLUT_BITMAP_HELVETICA_12);

    glColor3f(0.0, 1.0, 1.0);
    drawstring(285.0, 215.0, 1.0, " Asst. Prof,  Dept of CSE");

        glColor3f(0.0, 1.0, 1.0);
    drawstring(285.0, 200.0, 1.0, "VVCE, MYSORE");

        setFont(GLUT_BITMAP_HELVETICA_18);
    glColor3f(1.0, 1.0, 1.0);
    drawstring(400.0, 100.0, 1.0, " Press x ->continue");
    glEnd();
    glutSwapBuffers();
}

void mykeyboard(unsigned char key, int x, int y)
{
    if (key == 'x')
    {
        glutDisplayFunc(display);
    }
    glutPostRedisplay();
}
void sbox()//sender computer
{
    glColor3f(1.0, 0.0, 1.0);//outer box
    glBegin(GL_LINE_LOOP);
    glVertex2f(230, 395);
    glVertex2f(230, 455);
    glVertex2f(155, 455);
    glVertex2f(155, 395);
    glEnd();
    glColor3f(0.0, 1.0, 0.0);// inner box
    glBegin(GL_LINE_LOOP);
    glVertex2f(225, 402);
    glVertex2f(225, 448);
    glVertex2f(160, 448);
    glVertex2f(160, 402);
    glEnd();
}
void rbox()//receiver computer
{
    glColor3f(1.0, 0.0, 1.0);//outer box
    glBegin(GL_LINE_LOOP);
    glVertex2f(420, 395);
    glVertex2f(420, 455);
    glVertex2f(345, 455);
    glVertex2f(345, 395);
    glEnd();
    glColor3f(0.0, 1.0, 0.0);// inner box
    glBegin(GL_LINE_LOOP);
    glVertex2f(415, 402);
    glVertex2f(415, 448);
    glVertex2f(350, 448);
    glVertex2f(350, 402);
    glEnd();
}
void line()//drop lines
{
    glBegin(GL_LINES);//com1
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(192.5, 395);
    glVertex2f(192.5, 80);
    glEnd();
    glBegin(GL_LINES);//com2
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(382.5, 395);
    glVertex2f(382.5, 80);
    glEnd();
    glBegin(GL_LINES); //arrow com1
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(189, 85);
    glVertex2f(192.5, 80);
    glVertex2f(195, 85);
    glVertex2f(192.5, 80);

    glColor3f(1.0, 1.0, 1.0); //arrow com2
    glVertex2f(379, 85);
    glVertex2f(382.5, 80);
    glVertex2f(385, 85);
    glVertex2f(382.5, 80);
    glEnd();

    glBegin(GL_LINES); //time line
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(192.5, 110);
    glVertex2f(260.5, 110);
    glEnd();
    glBegin(GL_LINES); //time line
    glVertex2f(302.5, 110);
    glVertex2f(382.5, 110);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    drawstring(269, 110, 1.0, "Time");
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(195, 115);
    glVertex2f(192.5, 110);
    glVertex2f(195, 105);
    glVertex2f(192.5, 110);
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(379.5, 115);
    glVertex2f(382.5, 110);
    glVertex2f(379.5, 105);
    glVertex2f(382.5, 110);
}
void slant_lines()//slant lines for frames
{
    glBegin(GL_LINES);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(192.5, 355);
    glVertex2f(382.5, 345);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(378, 348);
    glVertex2f(382, 345);
    glVertex2f(378, 341.5);
    glVertex2f(382, 345);

    glBegin(GL_LINES);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(192.5, 315);
    glVertex2f(382.5, 305);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(378, 308);
    glVertex2f(382, 305);
    glVertex2f(378, 301.5);
    glVertex2f(382, 305);

    glBegin(GL_LINES);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(192.5, 269.5);
    glVertex2f(330.5, 259);
    glVertex2f(330.5, 259);
    glVertex2f(290.5, 239);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(289.5, 238);
    glVertex2f(293.5, 235);
    glVertex2f(289.5, 238);
    glVertex2f(293.5, 244);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(192.5, 195);
    glVertex2f(382.5, 185);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(378, 190);
    glVertex2f(382.5, 186.5);
    glVertex2f(378, 180);
    glVertex2f(382.5, 186.5);

    glBegin(GL_LINES);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(192.5, 145);
    glVertex2f(382.5, 135);
    glEnd();
   // glFlush();
    glBegin(GL_LINES); //ack
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(378, 140);
    glVertex2f(382.5, 135.5);
    glVertex2f(378, 130);
    glVertex2f(382.5, 135.5);
    glColor3f(1.0, 0.0, 0.0);
    glPushAttrib(GL_ENABLE_BIT);
    glLineStipple(1, 0x00FF);
    glEnable(GL_LINE_STIPPLE);

    glBegin(GL_LINES);
    glVertex2f(192.5, 275);
    glVertex2f(382.5, 300);
    glEnd();
    glPopAttrib();
    glBegin(GL_LINES);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(192.5, 275);
    glVertex2f(195.5, 271);
    glVertex2f(192.5, 275);
    glVertex2f(195.5, 280);
    glEnd();

    glColor3f(1.0, 0.0, 0.0); //nak
    glBegin(GL_LINES);
    glVertex2f(192.5, 152);
    glVertex2f(382.5, 180);
    glEnd();
    glPopAttrib();
    glBegin(GL_LINES);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(192.5, 152);
    glVertex2f(195.5, 150);
    glVertex2f(192.5, 152);
    glVertex2f(195.5, 156);
    glEnd();
}
void text()//sender, receiver text display
{

    glColor3f(1.0f, 1.0f, 1.0f);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    drawstring(352.0, 420.0, 1.0, "RECEIVER");

    glColor3f(1.0f, 1.0f, 1.0f);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    drawstring(168.0, 420.0, 1.0, "SENDER");

    glColor3f(1.0f, 1.0f, 0.0f); //senders numbering frames
        setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    drawstring(102, 349.5, 1.0, "0");

    glColor3f(1.0f, 1.0f, 0.0f);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    drawstring(112, 349.5, 1.0, "1");

    glColor3f(1.0f, 1.0f, 0.0f);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    drawstring(122, 349.5, 1.0, "2");

    glColor3f(1.0f, 1.0f, 0.0f);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    drawstring(132, 349.5, 1.0, "3");

    glColor3f(1.0f, 1.0f, 0.0f);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    drawstring(142, 349.5, 1.0, "0");

    glColor3f(1.0f, 1.0f, 0.0f);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    drawstring(152, 349.5, 1.0, "1");

    glColor3f(1.0f, 1.0f, 0.0f);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    drawstring(162, 349.5, 1.0, "2");


    glColor3f(1.0f, 1.0f, 0.0f); // receiversnumbering frames
        setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    drawstring(412, 349.5, 1.0, "0");

    glColor3f(1.0f, 1.0f, 0.0f);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    drawstring(422, 349.5, 1.0, "1");

    glColor3f(1.0f, 1.0f, 0.0f);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    drawstring(432, 349.5, 1.0, "2");

    glColor3f(1.0f, 1.0f, 0.0f);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    drawstring(442, 349.5, 1.0, "3");

    glColor3f(1.0f, 1.0f, 0.0f);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    drawstring(452, 349.5, 1.0, "0");

    glColor3f(1.0f, 1.0f, 0.0f);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    drawstring(462, 349.5, 1.0, "1");

    glColor3f(1.0f, 1.0f, 0.0f);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    drawstring(472, 349.5, 1.0, "2");

    glColor3f(1.0f, 1.0f, 0.0f);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    drawstring(300, 230, 1.0, "LOST");

    glColor3f(1.0f, 1.0f, 0.0f);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    drawstring(290, 125, 1.0, "RESENT");
}
void frame()
{
    glColor3f(1.0, 1.0, 1.0);//sender's frames
    glBegin(GL_LINE_LOOP);
    glVertex2f(170, 345);
    glVertex2f(170, 365);
    glVertex2f(100, 365);
    glVertex2f(100, 345);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(480, 345);
    glVertex2f(480, 365);
    glVertex2f(410, 365);
    glVertex2f(410, 345);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(160, 365.5);
    glVertex2f(160, 345);
    glVertex2f(160, 345);
    glVertex2f(160, 365.5);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(150, 365.5);
    glVertex2f(150, 345);
    glVertex2f(150, 345);
    glVertex2f(150, 365.5);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(140, 365.5);
    glVertex2f(140, 345);
    glVertex2f(140, 345);
    glVertex2f(140, 365.5);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(130, 365.5);
    glVertex2f(130, 345);
    glVertex2f(130, 345);
    glVertex2f(130, 365.5);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(120, 365.5);
    glVertex2f(120, 345);
    glVertex2f(120, 345);
    glVertex2f(120, 365.5);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(110, 365.5);
    glVertex2f(110, 345);
    glVertex2f(110, 345);
    glVertex2f(110, 365.5);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(100, 365.5);
    glVertex2f(100, 345);
    glVertex2f(100, 345);
    glVertex2f(100, 365.5);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(420, 365.5);
    glVertex2f(420, 345);
    glVertex2f(420, 345);
    glVertex2f(420, 365.5);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(430, 365.5);
    glVertex2f(430, 345);
    glVertex2f(430, 345);
    glVertex2f(430, 365.5);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(440, 365.5);
    glVertex2f(440, 345);
    glVertex2f(440, 345);
    glVertex2f(440, 365.5);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(450, 365.5);
    glVertex2f(450, 345);
    glVertex2f(450, 345);
    glVertex2f(450, 365.5);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(460, 365.5);
    glVertex2f(460, 345);
    glVertex2f(460, 345);
    glVertex2f(460, 365.5);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(470, 365.5);
    glVertex2f(470, 345);
    glVertex2f(470, 345);
    glVertex2f(470, 365.5);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(480, 365.5);
    glVertex2f(480, 345);
    glVertex2f(480, 345);
    glVertex2f(480, 365.5);
    glEnd();

}
void animate()
{

    if (tx <= 200) //frame 0
    {
        tx += 0.25;
        ty -= 0.0001;
    }
    if ((int)tx >= 200 && t1x <= 200) //frame 1
    {
        if (t8x <= 9.0)
            t8x += 0.25;
        t1x += 0.250;
        t1y -= 0.0001;
    }

    if ((int)t1x >= 200 && t2x >= -220) //ack
    {
        if (t8x <= 19.0)
            t8x += 0.25;
        t2x -= 0.250;
        t2y -= 0.0001;

    }
    if ((int)t2x <= -220) //frame 2 lost
    {
    if (t7x <= 19)
    t7x += 0.250;
    t3x += 0.250;
    t3y -= 0.0052;
    if ((int)t3x == 150)
    {
    f1 = 0;
    }
    }
        if ((int)t3x >= 190 && t4x <= 200) //frame 3
        {
            t4x += 0.250;
            t4y -= 0.0052;
        }
    if ((int)t4x >= 190 && t5x >= -225) //nak
    {
        if (t8x <= 39.0)
            t8x += 0.250;
        t5x -= 0.250;
        t5y -= 0.0052;
    }
    if ((int)t5x <= -225 && t6x <= 200) //frame 2 resend
    {
    t6x += 0.250;
    t6y -= 0.0052;
    }
        if ((int)t6x >= 200 && t8x >= 31.0)
        {
            t8x -= 2.0;
        }
 /*if ((int)t1x == -150)
    {
    ack1=0;
    }*/
    glutPostRedisplay();
}
void packet0()
{
    glColor3f(1.0, 1.0, 0.0);
    drawstring(183.0, 356.0, 0.0, "0");
    glColor3f(1.0, 1.0, 1.0);
}
void packet1()
{
    glColor3f(1.0, 1.0, 0.0);
    drawstring(183.0, 316.0, 0.0, "1");
    glColor3f(1.0, 1.0, 1.0);
      //glPopMatrix();
}
void packet2()
{
    if (f1 == 1)
    {
        glColor3f(1.0, 1.0, 0.0);
        drawstring(183, 270, 0.0, "2");
      //  glPopMatrix();
    }
}
void packet3()
{
    glColor3f(1.0, 1.0, 0.0);
    drawstring(183.0, 196.0, 0.0, "3");
    glColor3f(1.0, 1.0, 1.0);
}
void ack()
{
    //f(ack1==1)
    //
    glPushMatrix();
    glColor3f(1.0, 0.0, 0.0);
    drawstring(384.5, 287, 0.0, "ACK");
    glPopMatrix();
    //
}
void nak()
{
    glPushMatrix();
    glColor3f(1.0, 0.0, 0.0);
    drawstring(384.5, 185, 0.0, "NAK2");
    glPopMatrix();
}
void packet2resend()
{
    glPushMatrix();
    glColor3f(1.0, 1.0, 0.0);
    drawstring(183, 147, 0.0, "2");
    glPopMatrix();
}
void window()
{
    glColor3f(0.0, 0.0, 1.0); //senders window
    glBegin(GL_LINE_LOOP);
    glVertex2f(100, 335);
    glVertex2f(100, 375);
    glVertex2f(120, 375);
    glVertex2f(120, 335);
    glEnd();
}
void window1()
{
    glColor3f(0.0, 0.0, 1.0); //receivers window
    glBegin(GL_LINE_LOOP);
    glVertex2f(400, 335);
    glVertex2f(400, 375);
    glVertex2f(410, 375);
    glVertex2f(410, 335);
    glEnd();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glColor3f(0.0, 1.0, 1.0);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    drawstring(155, 40, 1.0, "**** SELECTIVE REPEAT  ARQ PROTOCOL * ***");
        glColor3f(1.0, 1.0, 1.0);
    sbox();
    rbox();
    line();
    slant_lines();
    frame();
    text();
    window();
    glPushMatrix();
    glTranslatef(tx, ty, 0.0);
    packet0();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(t1x, t1y, 0.0);
    packet1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(t2x, t2y, 0.0);
    ack();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(t3x, t3y, 0.0);
    packet2();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(t4x, t4y, 0.0);
    packet3();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(t5x, t5y, 0.0);
    nak();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(t6x, t6y, 0.0);
    packet2resend();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(t7x, t7y, 0.0);
    window();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(t8x, t8y, 0.0);
    window1();
    glPopMatrix();
    glFlush();
    glutSwapBuffers();
}
  
void Menu(int n)
{
    if (n == 1)
        glutIdleFunc(animate);
    if (n == 2)
        glutIdleFunc(NULL);
        if (n == 3)
            exit(0);
        glutPostRedisplay();
}


void init()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 500.0, 0.0, 500.0);
    glMatrixMode(GL_MODELVIEW);
    glutCreateMenu(Menu);
    glutAddMenuEntry("  Start  ", 1);
    glutAddMenuEntry("  Stop  ", 2);
    glutAttachMenu(GLUT_RIGHT_BUTTON);
  
}
int main(int argc, char** argv)
{
    f1 = 1, f2 = 1;
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1400, 1400);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Selective Repeat ARQ");
    init();
    glutDisplayFunc(title);
    glutKeyboardFunc(mykeyboard);
    glutIdleFunc(animate);
    glutMainLoop();

}