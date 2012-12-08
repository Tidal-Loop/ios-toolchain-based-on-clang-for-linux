/*************************************************************************																		**	 Pandora Products - Jim Schimpf C SUPPORT CODE					**		Copyright 1988  Pandora Products			**									**			C SUPPORT ROUTINES				**									**	Module:cutil.h							**									**	Version	   Date		Person  	Description		**-----------------------------------------------------------------------**       0.1     29-Nov-88       J.Schimpf       Initial Version         **									**	DESCRIPTION:							**		These are useful C support routines for the PC		**									**	Procedures:							**									**	Written+	Name		Description 			**-----------------------------------------------------------------------**	y		print_center()	Print text at center of screen	**	y		error_exit()	Exit program & tell user problem**	y		flag_srch()	Read command args		**									*************************************************************************/#ifndef _CUTIL_#define _CUTIL_	1/************************************************************************               SUPPORT ROUTINES************************************************************************//*************************************************************************  PRINT_CENTER( str )  - Print this string in the center of the screen**       INPUT:  str     - String to be printed**       OUTPUT: Clear and print the string in the center of the screen**       ASSUME: 24 Lines on screen*               80 Characters across************************************************************************/void print_center(char *str );/*************************************************************************  ERROR_EXIT( str )  - Print this string & error out**       INPUT:  str     - String to be printed**       OUTPUT: Clear and print the string in the center of the screen*               Halt and wait for user to hit a key then EXIT**       ASSUME: 80 Characters across************************************************************************/void error_exit(char *str );/*************************************************************************  FLAG_SRCH(argc,argv,flag,get_value,&rtn )**	INPUT:	argc,argv	- Command line parameters*		flag		- String (flag) to be found*		get_value	- TRUE return pointer to next item*				  FALSE no pointer returned*		rtn		- Return pointer (NULL if not used or*				  found)**	OUTPUT:	TRUE if flag found*		FALSE if not*		Scan argument list for flag*		If found then TRUE is returned and if get_value TRUE*		return rtn pointing to string in argv[] following *		the flag*		NOTE only exact matches will be found***********************************************************************/int flag_srch(int argc,char *argv[],char *flag,int get_value,char **rtn );#endif