#include <Windows.h>
#include <gl/GL.h>

struct Vertex {
	GLfloat position[3];
};

struct Vertex_Color : Vertex {
	GLfloat color[4];
};

struct Vertex_Normal : Vertex {
	GLfloat normal[3];
};

struct Vertex_UV : Vertex {
	GLfloat uv[2];
};

struct Vertex_ColorNormal : Vertex_Color {
	GLfloat normal[3];
};

struct Vertex_ColorUV : Vertex_Color {
	GLfloat uv[2];
};

struct Vertex_NormalUV : Vertex_Normal {
	GLfloat uv[2];
};

struct Vertex_ColorNormalUV : Vertex_ColorNormal {
	GLfloat uv[2];
};