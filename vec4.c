#include "glmc.h"
#include "math.h"

void glmc_vec4f_from_2f(vec4f dest, vec2f src_a, float src_b, float src_c)
{
	dest[0] = src_a[0];
	dest[1] = src_a[1];
	dest[2] = src_b;
	dest[3] = src_c;
}

void glmc_vec4f_from_3f(vec4f dest, vec3f src_a, float src_b)
{
	dest[0] = src_a[0];
	dest[1] = src_a[1];
	dest[2] = src_a[2];
	dest[3] = src_b;
}

void glmc_vec4f_copy(vec4f dest, vec4f src)
{
	for(int i=0;i<4;i++)
		dest[i] = src[i];
}

float glmc_vec4f_sqrlength(vec4f vec)
{
	float len_sq = vec[0] * vec[0] + vec[1] * vec[1] + vec[2] * vec[2] + vec[3] * vec[3];
	return len_sq;
}

float glmc_vec4f_length(vec4f vec)
{
	float sq_len = glmc_vec4f_sqrlength(vec);
	float len = sqrt(sq_len);
	return len;
}

int  glmc_vec4f_is_normalized(vec4f src)
{
	float sq_len =  glmc_vec4f_sqrlength(src);
	if(sq_len == 1)
		return 1;
	else
		return 0;
}

void glmc_vec4f_normlize(vec4f dest, vec4f src)
{
	float len = glmc_vec4f_length(src);
	for(int i=0;i<4;i++)
		dest[i] = src[i]/len;
}

void glmc_vec4f_add(vec4f dest, vec4f src_a, vec4f src_b)
{
	for(int i=0;i<4;i++)
		dest[i] = src_a[i] + src_b[i];
}

void glmc_vec4f_add_dest(vec4f src_dest, vec4f src_b)
{
	for(int i=0;i<4;i++)
		src_dest[i] += src_b[i];
}

void glmc_vec4f_sub(vec4f dest, vec4f src_a, vec4f src_b)
{
	for(int i=0;i<4;i++)
		dest[i] = src_a[i] - src_b[i];
}

void glmc_vec4f_sub_dest(vec4f src_dest, vec4f src_b)
{
	for(int i=0;i<4;i++)
		src_dest[i] -= src_b[i];
}

void glmc_vec4f_mul(vec4f dest, vec4f src_a, vec4f src_b)
{
	for(int i=0;i<4;i++)
		dest[i] = src_a[i] * src_b[i];
}

void glmc_vec4f_mul_dest(vec4f src_dest, vec4f src_b)
{
	for(int i=0;i<4;i++)
		src_dest[i] *= src_b[i];
}

void glmc_vec4f_mul_s(vec4f dest, vec4f src_a, float src_b)
{
	for(int i=0;i<4;i++)
		dest[i] = src_a[i] * src_b;
}

void glmc_vec4f_div(vec4f dest, vec4f src_a, vec4f src_b)
{
	for(int i=0;i<4;i++)
		dest[i] = src_a[i] / src_b[i];
}

void glmc_vec4f_div_dest(vec4f src_dest, vec4f src_b)
{
	for(int i=0;i<4;i++)
		src_dest[i] /= src_b[i];
}

void glmc_vec4f_div_s(vec4f dest, vec4f src_a, float src_b)
{
	for(int i=0;i<4;i++)
		dest[i] = src_a[i] / src_b;
}

void glmc_vec4f_addadd(vec4f dest, vec4f src_a, vec4f src_b)
{
	for(int i=0;i<4;i++)
		src_dest[i] += src_a[i] + src_b[i];
}

void glmc_vec4f_subadd(vec4f dest, vec4f src_a, vec4f src_b)
{
	for(int i=0;i<4;i++)
		src_dest[i] += src_a[i] - src_b[i];
}

void glmc_vec4f_madd(vec4f dest, vec4f src_a, vec4f src_b)
{
	for(int i=0;i<4;i++)
		src_dest[i] += src_a[i] * src_b[i];
}

void glmc_vec4f_msub(vec4f dest, vec4f src_a, vec4f src_b)
{
	for(int i=0;i<4;i++)
		src_dest[i] -= src_a[i] * src_b[i];
}

float glmc_vec4f_dot(vec4f src_a, vec4f src_b)
{
	float dot = 0;
	for(int i = 0; i < 4; i++)
		dot += src_a[i] * src_b[i];
	return dot;
}














































