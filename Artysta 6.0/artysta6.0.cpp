/**************************
 * Includes
 *
 **************************/

#include <windows.h>
#include <gl/gl.h>
#include <ctime>
#include <cstdlib>
#include <math.h>
using namespace std;

class kolo
{
public:
float xs, ys, zs, r, R, G, B;
int tryb;
kolo(float xsi, float ysi, float zsi, float ri, float Ri, float Gi, float Bi, int trybi)
{
xs=xsi;
ys=ysi;
zs=zsi;
r=ri;
R=Ri;
G=Gi;
B=Bi;
tryb=trybi;
}
void narysuj()
{
switch(tryb)
{
case 1:
	{
	glBegin(GL_POLYGON);
	glColor3f(R,G,B);
	glVertex3f(xs+r, (ys)*GetSystemMetrics(SM_CXSCREEN)/GetSystemMetrics(SM_CYSCREEN), zs);
	glVertex3f(xs+(r/pow(2.0, 0.5)), (ys+(r/pow(2.0, 0.5)))*GetSystemMetrics(SM_CXSCREEN)/GetSystemMetrics(SM_CYSCREEN), zs);
	glVertex3f(xs, (ys+r)*GetSystemMetrics(SM_CXSCREEN)/GetSystemMetrics(SM_CYSCREEN), zs);
	glVertex3f(xs-(r/pow(2.0, 0.5)), (ys+(r/pow(2.0, 0.5)))*GetSystemMetrics(SM_CXSCREEN)/GetSystemMetrics(SM_CYSCREEN), zs);
	glVertex3f(xs-r, (ys)*GetSystemMetrics(SM_CXSCREEN)/GetSystemMetrics(SM_CYSCREEN), zs);
	glVertex3f(xs-(r/pow(2.0, 0.5)), (ys-(r/pow(2.0, 0.5)))*GetSystemMetrics(SM_CXSCREEN)/GetSystemMetrics(SM_CYSCREEN), zs);
	glVertex3f(xs, (ys-r)*GetSystemMetrics(SM_CXSCREEN)/GetSystemMetrics(SM_CYSCREEN), zs);
	glVertex3f(xs+(r/pow(2.0, 0.5)), (ys-(r/pow(2.0, 0.5)))*GetSystemMetrics(SM_CXSCREEN)/GetSystemMetrics(SM_CYSCREEN), zs);
	glEnd();
	break;
	}
case 2:
	{
	glBegin(GL_POLYGON);
	glColor3f(R,G,B);
	glVertex3f(xs+r, ys, zs);
	glVertex3f(xs+(r/pow(2.0, 0.5)), ys, zs+(r/pow(2.0, 0.5)));
	glVertex3f(xs, ys, zs+r);
	glVertex3f(xs-(r/pow(2.0, 0.5)), ys, zs+(r/pow(2.0, 0.5)));
	glVertex3f(xs-r, ys, zs);
	glVertex3f(xs-(r/pow(2.0, 0.5)), ys, zs-(r/pow(2.0, 0.5)));
	glVertex3f(xs, ys, zs-r);
	glVertex3f(xs+(r/pow(2.0, 0.5)), ys, zs-(r/pow(2.0, 0.5)));
	glEnd();
	break;
	}
case 3:
	{
	glBegin(GL_POLYGON);
	glColor3f(R,G,B);
	glVertex3f(xs, ys+r, zs);
	glVertex3f(xs, ys+(r/pow(2.0, 0.5)), zs+(r/pow(2.0, 0.5)));
	glVertex3f(xs, ys, zs+r);
	glVertex3f(xs, ys-(r/pow(2.0, 0.5)), zs+(r/pow(2.0, 0.5)));
	glVertex3f(xs, ys-r, zs);
	glVertex3f(xs, ys-(r/pow(2.0, 0.5)), zs-(r/pow(2.0, 0.5)));
	glVertex3f(xs, ys, zs-r);
	glVertex3f(xs, ys+(r/pow(2.0, 0.5)), zs-(r/pow(2.0, 0.5)));
	glEnd();
	break;
	}
}
}
};
class koloi
{
public:
float xs, ys, zs, r, R, G, B;
int tryb;
koloi(float xsi, float ysi, float zsi, float ri, float Ri, float Gi, float Bi, int trybi)
{
xs=xsi;
ys=ysi;
zs=zsi;
r=ri;
R=Ri;
G=Gi;
B=Bi;
tryb=trybi;
}
void narysuj()
{
switch(tryb)
{
case 1:
	{
	glBegin(GL_LINE_LOOP);
	glColor3f(R,G,B);
	glVertex3f(xs+r, (ys)*GetSystemMetrics(SM_CXSCREEN)/GetSystemMetrics(SM_CYSCREEN), zs);
	glVertex3f(xs+(r/pow(2.0, 0.5)), (ys+(r/pow(2.0, 0.5)))*GetSystemMetrics(SM_CXSCREEN)/GetSystemMetrics(SM_CYSCREEN), zs);
	glVertex3f(xs, (ys+r)*GetSystemMetrics(SM_CXSCREEN)/GetSystemMetrics(SM_CYSCREEN), zs);
	glVertex3f(xs-(r/pow(2.0, 0.5)), (ys+(r/pow(2.0, 0.5)))*GetSystemMetrics(SM_CXSCREEN)/GetSystemMetrics(SM_CYSCREEN), zs);
	glVertex3f(xs-r, (ys)*GetSystemMetrics(SM_CXSCREEN)/GetSystemMetrics(SM_CYSCREEN), zs);
	glVertex3f(xs-(r/pow(2.0, 0.5)), (ys-(r/pow(2.0, 0.5)))*GetSystemMetrics(SM_CXSCREEN)/GetSystemMetrics(SM_CYSCREEN), zs);
	glVertex3f(xs, (ys-r)*GetSystemMetrics(SM_CXSCREEN)/GetSystemMetrics(SM_CYSCREEN), zs);
	glVertex3f(xs+(r/pow(2.0, 0.5)), (ys-(r/pow(2.0, 0.5)))*GetSystemMetrics(SM_CXSCREEN)/GetSystemMetrics(SM_CYSCREEN), zs);
	glEnd();
	break;
	}
case 2:
	{
	glBegin(GL_LINE_LOOP);
	glColor3f(R,G,B);
	glVertex3f(xs+r, ys, zs);
	glVertex3f(xs+(r/pow(2.0, 0.5)), ys, zs+(r/pow(2.0, 0.5)));
	glVertex3f(xs, ys, zs+r);
	glVertex3f(xs-(r/pow(2.0, 0.5)), ys, zs+(r/pow(2.0, 0.5)));
	glVertex3f(xs-r, ys, zs);
	glVertex3f(xs-(r/pow(2.0, 0.5)), ys, zs-(r/pow(2.0, 0.5)));
	glVertex3f(xs, ys, zs-r);
	glVertex3f(xs+(r/pow(2.0, 0.5)), ys, zs-(r/pow(2.0, 0.5)));
	glEnd();
	break;
	}
case 3:
	{
	glBegin(GL_LINE_LOOP);
	glColor3f(R,G,B);
	glVertex3f(xs, ys+r, zs);
	glVertex3f(xs, ys+(r/pow(2.0, 0.5)), zs+(r/pow(2.0, 0.5)));
	glVertex3f(xs, ys, zs+r);
	glVertex3f(xs, ys-(r/pow(2.0, 0.5)), zs+(r/pow(2.0, 0.5)));
	glVertex3f(xs, ys-r, zs);
	glVertex3f(xs, ys-(r/pow(2.0, 0.5)), zs-(r/pow(2.0, 0.5)));
	glVertex3f(xs, ys, zs-r);
	glVertex3f(xs, ys+(r/pow(2.0, 0.5)), zs-(r/pow(2.0, 0.5)));
	glEnd();
	break;
	}
}
}
};
/**************************
 * Function Declarations
 *
 **************************/

LRESULT CALLBACK WndProc (HWND hWnd, UINT message,
WPARAM wParam, LPARAM lParam);
void EnableOpenGL (HWND hWnd, HDC *hDC, HGLRC *hRC);
void DisableOpenGL (HWND hWnd, HDC hDC, HGLRC hRC);


/**************************
 * WinMain
 *
 **************************/

int WINAPI WinMain (HINSTANCE hInstance,
                    HINSTANCE hPrevInstance,
                    LPSTR lpCmdLine,
                    int iCmdShow)
{
    WNDCLASS wc;
    HWND hWnd;
    HDC hDC;
    HGLRC hRC;        
    MSG msg;
    BOOL bQuit = FALSE;
    float theta = 0.0f;

    /* register window class */
    wc.style = CS_OWNDC;
    wc.lpfnWndProc = WndProc;
    wc.cbClsExtra = 0;
    wc.cbWndExtra = 0;
    wc.hInstance = hInstance;
    wc.hIcon = LoadIcon (NULL, IDI_APPLICATION);
    wc.hCursor = LoadCursor (NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH) GetStockObject (BLACK_BRUSH);
    wc.lpszMenuName = NULL;
    wc.lpszClassName = "GLSample";
    RegisterClass (&wc);

    /* create main window */
    hWnd = CreateWindow (
      "GLSample", "Artysta 6.0", 
      WS_CAPTION | WS_POPUPWINDOW | WS_VISIBLE,
      0, 0, GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN),
      NULL, NULL, hInstance, NULL);

    /* enable OpenGL for the window */
    EnableOpenGL (hWnd, &hDC, &hRC);

srand(time(NULL));
kolo *koleczko;
koloi *koleczkoi;
    /* program main loop */
    while (!bQuit)
    {
        /* check for messages */
        if (PeekMessage (&msg, NULL, 0, 0, PM_REMOVE))
        {
            /* handle or dispatch messages */
            if (msg.message == WM_QUIT)
            {
                bQuit = TRUE;
            }
            else
            {
                TranslateMessage (&msg);
                DispatchMessage (&msg);
            }
        }
        else
        {
            /* OpenGL animation code goes here */

            glClearColor (0.0f, 0.0f, 0.0f, 0.0f);
            //glClear (GL_COLOR_BUFFER_BIT);
int losowo = rand()%5+1;
switch(losowo)
{
	case 1:
		{
			glBegin (GL_POINTS);
            glColor3f ((float)(rand()%101)/100.0f, (float)(rand()%101)/100.0f, (float)(rand()%101)/100.0f);   glVertex2f ((float)(rand()%200)/100.0f-1.0f, (float)(rand()%200)/100.0f-1.0f);
			break;
		}
		case 2:
		{
			glBegin (GL_LINE_LOOP);
            for(int i=0;i<4;i++)
            {
            glColor3f ((float)(rand()%101)/100.0f, (float)(rand()%101)/100.0f, (float)(rand()%101)/100.0f);   glVertex2f ((float)(rand()%200)/100.0f-1.0f, (float)(rand()%200)/100.0f-1.0f);
        	}
            glEnd ();
			break;
		}
		case 3:
		{
			koleczko = new kolo((float)(rand()%200)/100.0f-1.0f, (float)(rand()%200)/100.0f-1.0f, 0.0f, (float)(rand()%101)/100.0f, (float)(rand()%101)/100.0f, (float)(rand()%101)/100.0f, (float)(rand()%101)/100.0f, 1);
            koleczko->narysuj();
			break;
		}
		case 4:
		{
			koleczkoi = new koloi((float)(rand()%200)/100.0f-1.0f, (float)(rand()%200)/100.0f-1.0f, 0.0f, (float)(rand()%101)/100.0f, (float)(rand()%101)/100.0f, (float)(rand()%101)/100.0f, (float)(rand()%101)/100.0f, 1);
            koleczkoi->narysuj();
			break;
		}
		case 5:
		{
			glBegin (GL_POLYGON);
            for(int i=0;i<4;i++)
            {
            glColor3f ((float)(rand()%101)/100.0f, (float)(rand()%101)/100.0f, (float)(rand()%101)/100.0f);   glVertex2f ((float)(rand()%200)/100.0f-1.0f, (float)(rand()%200)/100.0f-1.0f);
        	}
            glEnd ();
			break;
		}
}
            glPushMatrix ();
            //glRotatef (theta, 0.0f, 0.0f, 1.0f);
            
            glPopMatrix ();

            SwapBuffers (hDC);

            theta += 1.0f;
            Sleep (1);
        }
    }

    /* shutdown OpenGL */
    DisableOpenGL (hWnd, hDC, hRC);

    /* destroy the window explicitly */
    DestroyWindow (hWnd);

    return msg.wParam;
}


/********************
 * Window Procedure
 *
 ********************/

LRESULT CALLBACK WndProc (HWND hWnd, UINT message,
                          WPARAM wParam, LPARAM lParam)
{

    switch (message)
    {
    case WM_CREATE:
        return 0;
    case WM_CLOSE:
        PostQuitMessage (0);
        return 0;

    case WM_DESTROY:
        return 0;

    case WM_KEYDOWN:
        switch (wParam)
        {
        case VK_ESCAPE:
            PostQuitMessage(0);
            return 0;
        }
        return 0;

    default:
        return DefWindowProc (hWnd, message, wParam, lParam);
    }
}


/*******************
 * Enable OpenGL
 *
 *******************/

void EnableOpenGL (HWND hWnd, HDC *hDC, HGLRC *hRC)
{
    PIXELFORMATDESCRIPTOR pfd;
    int iFormat;

    /* get the device context (DC) */
    *hDC = GetDC (hWnd);

    /* set the pixel format for the DC */
    ZeroMemory (&pfd, sizeof (pfd));
    pfd.nSize = sizeof (pfd);
    pfd.nVersion = 1;
    pfd.dwFlags = PFD_DRAW_TO_WINDOW | 
      PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER;
    pfd.iPixelType = PFD_TYPE_RGBA;
    pfd.cColorBits = 24;
    pfd.cDepthBits = 16;
    pfd.iLayerType = PFD_MAIN_PLANE;
    iFormat = ChoosePixelFormat (*hDC, &pfd);
    SetPixelFormat (*hDC, iFormat, &pfd);

    /* create and enable the render context (RC) */
    *hRC = wglCreateContext( *hDC );
    wglMakeCurrent( *hDC, *hRC );

}


/******************
 * Disable OpenGL
 *
 ******************/

void DisableOpenGL (HWND hWnd, HDC hDC, HGLRC hRC)
{
    wglMakeCurrent (NULL, NULL);
    wglDeleteContext (hRC);
    ReleaseDC (hWnd, hDC);
}
