/*
Copyright (C) 1996-1997 Id Software, Inc.
Copyright (C) 2025 erysdren (it/its)

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, see https://www.gnu.org/licenses/
*/

#ifndef _SDL3QUAKE_H_
#define _SDL3QUAKE_H_
#ifdef __cplusplus
extern "C" {
#endif

#define QUAKEGENERIC_JOY_MAX_AXES 6
#define QUAKEGENERIC_JOY_AXIS_X 0
#define QUAKEGENERIC_JOY_AXIS_Y 1
#define QUAKEGENERIC_JOY_AXIS_Z 2
#define QUAKEGENERIC_JOY_AXIS_R 3
#define QUAKEGENERIC_JOY_AXIS_U 4
#define QUAKEGENERIC_JOY_AXIS_V 5

// provided functions
void QG_Tick(double duration);
void QG_Create(int argc, char *argv[]);

// user must implement these
void QG_Init(void);
void QG_Quit(void);
void QG_DrawFrame(void *pixels);
void QG_SetPalette(unsigned char pal[768]);
int QG_GetKey(int *down, int *key);
void QG_GetMouseMove(int *x, int *y);
void QG_GetJoyAxes(float *axes);

#ifdef __cplusplus
}
#endif
#endif /* _SDL3QUAKE_H_ */
