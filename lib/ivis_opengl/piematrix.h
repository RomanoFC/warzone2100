/*
	This file is part of Warzone 2100.
	Copyright (C) 1999-2004  Eidos Interactive
	Copyright (C) 2005-2011  Warzone 2100 Project

	Warzone 2100 is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.

	Warzone 2100 is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with Warzone 2100; if not, write to the Free Software
	Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
*/
/***************************************************************************/
/*
 * pieMatrix.h
 *
 * matrix functions for pumpkin image library.
 *
 */
/***************************************************************************/
#ifndef _pieMatrix_h
#define _pieMatrix_h

#include "lib/ivis_opengl/piedef.h"

//*************************************************************************

/*!
 * Rotate and translate v with the worldmatrix. Store the result in s
 * Float variant
 * \param[in] v Vector to translate
 * \param[out] s Resulting vector
 */
void pie_RotateTranslate3i(const Vector3i *v, Vector3i *s);


/*!
 * Calculate surface normal
 * Eg. if a polygon (with n points in clockwise order) normal is required,
 * \c p1 = point 0, \c p2 = point 1, \c p3 = point n-1
 * \param p1,p2,p3 Points for forming 2 vector for cross product
 * \return Normal vector
 */
static inline WZ_DECL_CONST WZ_DECL_WARN_UNUSED_RESULT
		Vector3f pie_SurfaceNormal3fv(const Vector3f p1, const Vector3f p2, const Vector3f p3)
{
	return normalise(crossProduct(p3 - p1, p2 - p1));
}

//*************************************************************************


extern void pie_MatInit(void);


//*************************************************************************

extern void pie_MatBegin(void);
extern void pie_MatEnd(void);
extern void pie_TRANSLATE(int32_t x, int32_t y, int32_t z);
extern void pie_MatScale(float scale);
extern void pie_MatRotX(uint16_t x);
extern void pie_MatRotY(uint16_t y);
extern void pie_MatRotZ(uint16_t z);
extern int32_t pie_RotateProject(const Vector3i *src, Vector2i *dest);

//*************************************************************************

extern void pie_PerspectiveBegin(void);
extern void pie_PerspectiveEnd(void);

//*************************************************************************

extern void pie_VectorInverseRotate0(const Vector3i *v1, Vector3i *v2);
extern void pie_SetGeometricOffset(int x, int y);

extern void pie_Begin3DScene(void);
extern void pie_BeginInterface(void);

#endif
