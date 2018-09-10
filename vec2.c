#include "glmc.h"
#include "math.h"

void glmc_vec2f_from_3f(vec2f dest, vec3f src)
{
	dest[0] = src[0];
	dest[1] = src[1];
}

void glmc_vec2f_from_4f(vec2f dest, vec2f src)
{
	dest[0] = src[0];
	dest[1] = src[1];
}

void glmc_vec2f_copy(vec2f dest, vec2f src)
{
	for(int i=0;i<3;i++)
		dest[i] = src[i];
}

float glmc_vec2f_sqrlength(vec2f vec)
{
	float len_sq = vec[0] * vec[0] + vec[1] * vec[1];
	return len_sq;
}

float glmc_vec2f_length(vec2f vec)
{
	float sq_len = glmc_vec2f_sqrlength(vec);
	float len = sqrt(sq_len);
	return len;
}

int  glmc_vec2f_is_normalized(vec2f src)
{
	float sq_len =  glmc_vec2f_sqrlength(src);
	if(sq_len == 1)
		return 1;
	else
		return 0;
}

void glmc_vec2f_normlize(vec2f dest, vec2f src)
{
	float len = glmc_vec2f_length(src);
	for(int i=0;i<3;i++)
		dest[i] = src[i]/len;
}

void glmc_vec2f_add(vec2f dest, vec2f src_a, vec2f src_b)
{
	for(int i=0;i<2;i++)
		dest[i] = src_a[i] + src_b[i];
}

void glmc_vec2f_add_dest(vec2f src_dest, vec2f src_b)
{
	for(int i=0;i<2;i++)
		src_dest[i] += src_b[i];
}

void glmc_vec2f_sub(vec2f dest, vec2f src_a, vec2f src_b)
{
	for(int i=0;i<2;i++)
		dest[i] = src_a[i] - src_b[i];
}

void glmc_vec2f_sub_dest(vec2f src_dest, vec2f src_b)
{
	for(int i=0;i<2;i++)
		src_dest[i] -= src_b[i];
}

void glmc_vec2f_mul(vec2f dest, vec2f src_a, vec2f src_b)
{
	for(int i=0;i<2;i++)
		dest[i] = src_a[i] * src_b[i];
}

void glmc_vec2f_mul_dest(vec2f src_dest, vec2f src_b)
{
	for(int i=0;i<2;i++)
		src_dest[i] *= src_b[i];
}

void glmc_vec2f_mul_s(vec2f dest, vec2f src_a, float src_b)
{
	for(int i=0;i<2;i++)
		dest[i] = src_a[i] * src_b;
}

void glmc_vec2f_div(vec2f dest, vec2f src_a, vec2f src_b)
{
	for(int i=0;i<2;i++)
		dest[i] = src_a[i] / src_b[i];
}

void glmc_vec2f_div_dest(vec2f src_dest, vec2f src_b)
{
	for(int i=0;i<2;i++)
		src_dest[i] /= src_b[i];
}

void glmc_vec2f_div_s(vec2f dest, vec2f src_a, float src_b)
{
	for(int i=0;i<2;i++)
		dest[i] = src_a[i] / src_b;
}

void glmc_vec2f_addadd(vec2f dest, vec2f src_a, vec2f src_b)
{
	for(int i=0;i<2;i++)
		src_dest[i] += src_a[i] + src_b[i];
}

void glmc_vec2f_subadd(vec2f dest, vec2f src_a, vec2f src_b)
{
	for(int i=0;i<2;i++)
		src_dest[i] += src_a[i] - src_b[i];
}

void glmc_vec2f_madd(vec2f dest, vec2f src_a, vec2f src_b)
{
	for(int i=0;i<2;i++)
		src_dest[i] += src_a[i] * src_b[i];
}

void glmc_vec2f_msub(vec2f dest, vec2f src_a, vec2f src_b)
{
	for(int i=0;i<3;i++)
		src_dest[i] -= src_a[i] * src_b[i];
}

float glmc_vec2f_dot(vec2f src_a, vec2f src_b)
{
	float dot = 0;
	for(int i = 0; i < 2; i++)
		dot += src_a[i] * src_b[i];
	return dot;
}
































