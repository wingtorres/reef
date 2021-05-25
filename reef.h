/*
** svn $Id: inlet_test.h 838 2008-11-17 04:22:18Z jcwarner $
*******************************************************************************
** Copyright (c) 2002-2008 The ROMS/TOMS Group                               **
**   Licensed under a MIT/X style license                                    **
**   See License_ROMS.txt                                                    **
*******************************************************************************
**
** Options for Reef Toy Case, waves-ocean (SWAN/ROMS) two-way coupling.
**
** Application flag:   REEF
** Input script:       ocean.in
**                     coupling.in
*/

#define ROMS_MODEL
#define SWAN_MODEL
#define MCT_LIB

#undef WET_DRY
#undef CURVGRID
#define VISC_GRID

#define UV_VIS2
#define MIX_S_UV
#define MASKING
#define UV_ADV
#undef UV_COR
#define DJ_GRADPS
#define SPLINES_VDIFF
#define SPLINES_VVISC

#define TS_FIXED

#define SOLVE3D
#undef  WEC_MELLOR
#define WEC_VF
#define WDISS_WAVEMOD
#define UV_KIRBY
#define ANA_INITIAL
#define ANA_SMFLUX
#define ANA_FSOBC
#define ANA_M2OBC

#undef ANA_PAIR
#undef ATM_PRESS

/* define only one of the following 5 */
#define UV_LOGDRAG
#undef  UV_QDRAG
#undef  MB_BBL
#undef  SG_BBL
#undef SSW_BBL
#ifdef SSW_BBL
# define SSW_LOGINT
# define SSW_LOGINT_STOKES
# define ANA_SEDIMENT
# undef SSW_CALC_ZNOT
# undef SEDIMENT
#endif

#ifdef SOLVE3D
# define GLS_MIXING
# ifdef GLS_MIXING
#  define RI_SPLINES
#  define KANTHA_CLAYSON
#  define N2S2_HORAVG
# endif

# define ANA_STFLUX
# define ANA_SSFLUX
# define ANA_BPFLUX
# define ANA_BTFLUX
# define ANA_BSFLUX
# define ANA_SPFLUX
# define ANA_SRFLUX
#endif

#undef FLOATS
#define AVERAGES
# undef STATIONS
#define DIAGNOSTICS_UV
