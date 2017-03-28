/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse gmsh_yyparse
#define yylex   gmsh_yylex
#define yyerror gmsh_yyerror
#define yylval  gmsh_yylval
#define yychar  gmsh_yychar
#define yydebug gmsh_yydebug
#define yynerrs gmsh_yynerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     tDOUBLE = 258,
     tSTRING = 259,
     tBIGSTR = 260,
     tEND = 261,
     tAFFECT = 262,
     tDOTS = 263,
     tSCOPE = 264,
     tPi = 265,
     tMPI_Rank = 266,
     tMPI_Size = 267,
     tEuclidian = 268,
     tCoordinates = 269,
     tTestLevel = 270,
     tExp = 271,
     tLog = 272,
     tLog10 = 273,
     tSqrt = 274,
     tSin = 275,
     tAsin = 276,
     tCos = 277,
     tAcos = 278,
     tTan = 279,
     tRand = 280,
     tAtan = 281,
     tAtan2 = 282,
     tSinh = 283,
     tCosh = 284,
     tTanh = 285,
     tFabs = 286,
     tAbs = 287,
     tFloor = 288,
     tCeil = 289,
     tRound = 290,
     tFmod = 291,
     tModulo = 292,
     tHypot = 293,
     tList = 294,
     tLinSpace = 295,
     tLogSpace = 296,
     tListFromFile = 297,
     tCatenary = 298,
     tPrintf = 299,
     tError = 300,
     tStr = 301,
     tSprintf = 302,
     tStrCat = 303,
     tStrPrefix = 304,
     tStrRelative = 305,
     tStrReplace = 306,
     tAbsolutePath = 307,
     tDirName = 308,
     tStrSub = 309,
     tStrLen = 310,
     tFind = 311,
     tStrFind = 312,
     tStrCmp = 313,
     tStrChoice = 314,
     tUpperCase = 315,
     tLowerCase = 316,
     tLowerCaseIn = 317,
     tTextAttributes = 318,
     tBoundingBox = 319,
     tDraw = 320,
     tSetChanged = 321,
     tToday = 322,
     tFixRelativePath = 323,
     tCurrentDirectory = 324,
     tSyncModel = 325,
     tNewModel = 326,
     tOnelabAction = 327,
     tOnelabRun = 328,
     tCodeName = 329,
     tCpu = 330,
     tMemory = 331,
     tTotalMemory = 332,
     tCreateTopology = 333,
     tCreateTopologyNoHoles = 334,
     tDistanceFunction = 335,
     tDefineConstant = 336,
     tUndefineConstant = 337,
     tDefineNumber = 338,
     tDefineStruct = 339,
     tNameStruct = 340,
     tDimNameSpace = 341,
     tAppend = 342,
     tDefineString = 343,
     tSetNumber = 344,
     tSetString = 345,
     tPoint = 346,
     tCircle = 347,
     tEllipse = 348,
     tLine = 349,
     tSphere = 350,
     tPolarSphere = 351,
     tSurface = 352,
     tSpline = 353,
     tVolume = 354,
     tBlock = 355,
     tCylinder = 356,
     tCone = 357,
     tTorus = 358,
     tEllipsoid = 359,
     tQuadric = 360,
     tShapeFromFile = 361,
     tRectangle = 362,
     tDisk = 363,
     tWire = 364,
     tCharacteristic = 365,
     tLength = 366,
     tParametric = 367,
     tElliptic = 368,
     tRefineMesh = 369,
     tAdaptMesh = 370,
     tRelocateMesh = 371,
     tSetFactory = 372,
     tThruSections = 373,
     tWedge = 374,
     tFillet = 375,
     tChamfer = 376,
     tPlane = 377,
     tRuled = 378,
     tTransfinite = 379,
     tPhysical = 380,
     tCompound = 381,
     tPeriodic = 382,
     tUsing = 383,
     tPlugin = 384,
     tDegenerated = 385,
     tRecursive = 386,
     tRotate = 387,
     tTranslate = 388,
     tSymmetry = 389,
     tDilate = 390,
     tExtrude = 391,
     tLevelset = 392,
     tAffine = 393,
     tBooleanUnion = 394,
     tBooleanIntersection = 395,
     tBooleanDifference = 396,
     tBooleanSection = 397,
     tBooleanFragments = 398,
     tThickSolid = 399,
     tRecombine = 400,
     tSmoother = 401,
     tSplit = 402,
     tDelete = 403,
     tCoherence = 404,
     tIntersect = 405,
     tMeshAlgorithm = 406,
     tReverse = 407,
     tLayers = 408,
     tScaleLast = 409,
     tHole = 410,
     tAlias = 411,
     tAliasWithOptions = 412,
     tCopyOptions = 413,
     tQuadTriAddVerts = 414,
     tQuadTriNoNewVerts = 415,
     tRecombLaterals = 416,
     tTransfQuadTri = 417,
     tText2D = 418,
     tText3D = 419,
     tInterpolationScheme = 420,
     tTime = 421,
     tCombine = 422,
     tBSpline = 423,
     tBezier = 424,
     tNurbs = 425,
     tNurbsOrder = 426,
     tNurbsKnots = 427,
     tColor = 428,
     tColorTable = 429,
     tFor = 430,
     tIn = 431,
     tEndFor = 432,
     tIf = 433,
     tElseIf = 434,
     tElse = 435,
     tEndIf = 436,
     tExit = 437,
     tAbort = 438,
     tField = 439,
     tReturn = 440,
     tCall = 441,
     tSlide = 442,
     tMacro = 443,
     tShow = 444,
     tHide = 445,
     tGetValue = 446,
     tGetStringValue = 447,
     tGetEnv = 448,
     tGetString = 449,
     tGetNumber = 450,
     tUnique = 451,
     tHomology = 452,
     tCohomology = 453,
     tBetti = 454,
     tExists = 455,
     tFileExists = 456,
     tGetForced = 457,
     tGetForcedStr = 458,
     tGMSH_MAJOR_VERSION = 459,
     tGMSH_MINOR_VERSION = 460,
     tGMSH_PATCH_VERSION = 461,
     tGmshExecutableName = 462,
     tSetPartition = 463,
     tNameToString = 464,
     tStringToName = 465,
     tAFFECTDIVIDE = 466,
     tAFFECTTIMES = 467,
     tAFFECTMINUS = 468,
     tAFFECTPLUS = 469,
     tOR = 470,
     tAND = 471,
     tNOTEQUAL = 472,
     tEQUAL = 473,
     tGREATERGREATER = 474,
     tLESSLESS = 475,
     tGREATEROREQUAL = 476,
     tLESSOREQUAL = 477,
     UNARYPREC = 478,
     tMINUSMINUS = 479,
     tPLUSPLUS = 480
   };
#endif
/* Tokens.  */
#define tDOUBLE 258
#define tSTRING 259
#define tBIGSTR 260
#define tEND 261
#define tAFFECT 262
#define tDOTS 263
#define tSCOPE 264
#define tPi 265
#define tMPI_Rank 266
#define tMPI_Size 267
#define tEuclidian 268
#define tCoordinates 269
#define tTestLevel 270
#define tExp 271
#define tLog 272
#define tLog10 273
#define tSqrt 274
#define tSin 275
#define tAsin 276
#define tCos 277
#define tAcos 278
#define tTan 279
#define tRand 280
#define tAtan 281
#define tAtan2 282
#define tSinh 283
#define tCosh 284
#define tTanh 285
#define tFabs 286
#define tAbs 287
#define tFloor 288
#define tCeil 289
#define tRound 290
#define tFmod 291
#define tModulo 292
#define tHypot 293
#define tList 294
#define tLinSpace 295
#define tLogSpace 296
#define tListFromFile 297
#define tCatenary 298
#define tPrintf 299
#define tError 300
#define tStr 301
#define tSprintf 302
#define tStrCat 303
#define tStrPrefix 304
#define tStrRelative 305
#define tStrReplace 306
#define tAbsolutePath 307
#define tDirName 308
#define tStrSub 309
#define tStrLen 310
#define tFind 311
#define tStrFind 312
#define tStrCmp 313
#define tStrChoice 314
#define tUpperCase 315
#define tLowerCase 316
#define tLowerCaseIn 317
#define tTextAttributes 318
#define tBoundingBox 319
#define tDraw 320
#define tSetChanged 321
#define tToday 322
#define tFixRelativePath 323
#define tCurrentDirectory 324
#define tSyncModel 325
#define tNewModel 326
#define tOnelabAction 327
#define tOnelabRun 328
#define tCodeName 329
#define tCpu 330
#define tMemory 331
#define tTotalMemory 332
#define tCreateTopology 333
#define tCreateTopologyNoHoles 334
#define tDistanceFunction 335
#define tDefineConstant 336
#define tUndefineConstant 337
#define tDefineNumber 338
#define tDefineStruct 339
#define tNameStruct 340
#define tDimNameSpace 341
#define tAppend 342
#define tDefineString 343
#define tSetNumber 344
#define tSetString 345
#define tPoint 346
#define tCircle 347
#define tEllipse 348
#define tLine 349
#define tSphere 350
#define tPolarSphere 351
#define tSurface 352
#define tSpline 353
#define tVolume 354
#define tBlock 355
#define tCylinder 356
#define tCone 357
#define tTorus 358
#define tEllipsoid 359
#define tQuadric 360
#define tShapeFromFile 361
#define tRectangle 362
#define tDisk 363
#define tWire 364
#define tCharacteristic 365
#define tLength 366
#define tParametric 367
#define tElliptic 368
#define tRefineMesh 369
#define tAdaptMesh 370
#define tRelocateMesh 371
#define tSetFactory 372
#define tThruSections 373
#define tWedge 374
#define tFillet 375
#define tChamfer 376
#define tPlane 377
#define tRuled 378
#define tTransfinite 379
#define tPhysical 380
#define tCompound 381
#define tPeriodic 382
#define tUsing 383
#define tPlugin 384
#define tDegenerated 385
#define tRecursive 386
#define tRotate 387
#define tTranslate 388
#define tSymmetry 389
#define tDilate 390
#define tExtrude 391
#define tLevelset 392
#define tAffine 393
#define tBooleanUnion 394
#define tBooleanIntersection 395
#define tBooleanDifference 396
#define tBooleanSection 397
#define tBooleanFragments 398
#define tThickSolid 399
#define tRecombine 400
#define tSmoother 401
#define tSplit 402
#define tDelete 403
#define tCoherence 404
#define tIntersect 405
#define tMeshAlgorithm 406
#define tReverse 407
#define tLayers 408
#define tScaleLast 409
#define tHole 410
#define tAlias 411
#define tAliasWithOptions 412
#define tCopyOptions 413
#define tQuadTriAddVerts 414
#define tQuadTriNoNewVerts 415
#define tRecombLaterals 416
#define tTransfQuadTri 417
#define tText2D 418
#define tText3D 419
#define tInterpolationScheme 420
#define tTime 421
#define tCombine 422
#define tBSpline 423
#define tBezier 424
#define tNurbs 425
#define tNurbsOrder 426
#define tNurbsKnots 427
#define tColor 428
#define tColorTable 429
#define tFor 430
#define tIn 431
#define tEndFor 432
#define tIf 433
#define tElseIf 434
#define tElse 435
#define tEndIf 436
#define tExit 437
#define tAbort 438
#define tField 439
#define tReturn 440
#define tCall 441
#define tSlide 442
#define tMacro 443
#define tShow 444
#define tHide 445
#define tGetValue 446
#define tGetStringValue 447
#define tGetEnv 448
#define tGetString 449
#define tGetNumber 450
#define tUnique 451
#define tHomology 452
#define tCohomology 453
#define tBetti 454
#define tExists 455
#define tFileExists 456
#define tGetForced 457
#define tGetForcedStr 458
#define tGMSH_MAJOR_VERSION 459
#define tGMSH_MINOR_VERSION 460
#define tGMSH_PATCH_VERSION 461
#define tGmshExecutableName 462
#define tSetPartition 463
#define tNameToString 464
#define tStringToName 465
#define tAFFECTDIVIDE 466
#define tAFFECTTIMES 467
#define tAFFECTMINUS 468
#define tAFFECTPLUS 469
#define tOR 470
#define tAND 471
#define tNOTEQUAL 472
#define tEQUAL 473
#define tGREATERGREATER 474
#define tLESSLESS 475
#define tGREATEROREQUAL 476
#define tLESSOREQUAL 477
#define UNARYPREC 478
#define tMINUSMINUS 479
#define tPLUSPLUS 480




/* Copy the first part of user declarations.  */
#line 1 "Gmsh.y"

// Gmsh - Copyright (C) 1997-2017 C. Geuzaine, J.-F. Remacle
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <gmsh@onelab.info>.

#include <sstream>
#include <map>
#include <string.h>
#include <stdarg.h>
#include <time.h>
#include "GmshConfig.h"
#include "GmshMessage.h"
#include "fullMatrix.h"
#include "MallocUtils.h"
#include "ListUtils.h"
#include "TreeUtils.h"
#include "StringUtils.h"
#include "Numeric.h"
#include "Context.h"
#include "GModel.h"
#include "GModelIO_GEO.h"
#include "GModelIO_OCC.h"
#include "GeoDefines.h"
#include "ExtrudeParams.h"
#include "Options.h"
#include "Parser.h"
#include "OpenFile.h"
#include "CommandLine.h"
#include "FunctionManager.h"
#include "ColorTable.h"
#include "OS.h"
#include "CreateFile.h"
#include "gmshSurface.h"
#include "gmshLevelset.h"
#include "fullMatrix.h"

#if defined(HAVE_MESH)
#include "Generator.h"
#include "Field.h"
#include "BackgroundMesh.h"
#include "HighOrder.h"
#endif

#if defined(HAVE_POST)
#include "PView.h"
#include "PViewDataList.h"
#endif

#if defined(HAVE_PLUGINS)
#include "PluginManager.h"
#endif

#if defined(HAVE_OPENGL)
#include "drawContext.h"
#endif

#if defined(HAVE_POPPLER)
#include "gmshPopplerWrapper.h"
#endif

#define MAX_RECUR_TESTS 100
#define MAX_RECUR_LOOPS 100

// global parser variables
std::string gmsh_yyname;
int gmsh_yyerrorstate = 0;
int gmsh_yyviewindex = 0;
std::map<std::string, gmsh_yysymbol> gmsh_yysymbols;
std::map<std::string, std::vector<std::string> > gmsh_yystringsymbols;
NameSpaces nameSpaces;

// static parser variables (accessible only in this file)
#if defined(HAVE_POST)
static PViewDataList *ViewData = 0;
#endif
static std::vector<double> ViewCoord;
static std::vector<double> *ViewValueList = 0;
static int *ViewNumList = 0;
static ExtrudeParams extr;
static gmshSurface *myGmshSurface = 0;
static int statusImbricatedTests[MAX_RECUR_TESTS];
static int ImbricatedLoop = 0, ImbricatedTest = 0;
static gmshfpos_t yyposImbricatedLoopsTab[MAX_RECUR_LOOPS];
static int yylinenoImbricatedLoopsTab[MAX_RECUR_LOOPS];
static double LoopControlVariablesTab[MAX_RECUR_LOOPS][3];
static std::string LoopControlVariablesNameTab[MAX_RECUR_LOOPS];
static std::string factory;
static std::string struct_name, struct_namespace;
static int flag_tSTRING_alloc = 0;

static std::map<std::string, std::vector<double> > floatOptions;
static std::map<std::string, std::vector<std::string> > charOptions;
static int flag_Enum, member_ValMax;

void init_options(int member_ValMax_ = 0)
{
  floatOptions.clear(); charOptions.clear();
  flag_Enum = 0; member_ValMax = member_ValMax_;
}

// parser functions defined at the end of this file
void yyerror(const char *s);
void yymsg(int level, const char *fmt, ...);
char *strsave(char *ptr);
void skip(const char *skip, const char *until);
void skipTest(const char *skip, const char *until,
              const char *until2, int l_until2_sub, int *type_until2);
void assignVariable(const std::string &name, int index, int assignType,
                    double value);
void assignVariables(const std::string &name, List_T *indices, int assignType,
                     List_T *values);
void incrementVariable(const std::string &name, int index, double value);
int printListOfDouble(char *format, List_T *list, char *buffer);
fullMatrix<double> ListOfListOfDouble2Matrix(List_T *list);
void ListOfDouble2Vector(List_T *list, std::vector<int> &v);
void ListOfDouble2Vector(List_T *list, std::vector<double> &v);
void ListOfShapes2VectorOfPairs(List_T *list, std::vector<std::pair<int, int> > &v);
void VectorOfPairs2ListOfShapes(const std::vector<std::pair<int, int> > &v, List_T *list);
void addPeriodicEdge(int, int, const std::vector<double>&);
void addPeriodicFace(int, int, const std::map<int, int>&);
void addPeriodicFace(int, int, const std::vector<double>&);
void computeAffineTransformation(SPoint3&, SPoint3&, double, SPoint3&,
                                 std::vector<double>&);
void addEmbedded(int dim, std::vector<int> tags, int dim2, int tag2);
void getAllElementaryTags(int dim, List_T *in);
void getAllPhysicalTags(int dim, List_T *in);
void getElementaryTagsForPhysicalGroups(int dim, List_T *in, List_T *out);
void getElementaryTagsInBoundingBox(int dim, double x1, double y1, double z1,
                                    double x2, double y2, double z2, List_T *out);
void setVisibility(int dim, int visible, bool recursive);
void setVisibility(const std::vector<std::pair<int, int> > &dimTags, int visible,
                   bool recursive);
void setColor(const std::vector<std::pair<int, int> > &dimTags, unsigned int val,
              bool recursive);

double treat_Struct_FullName_Float
  (char* c1, char* c2, int type_var = 1, int index = 0,
   double val_default = 0., int type_treat = 0);
double treat_Struct_FullName_dot_tSTRING_Float
  (char* c1, char* c2, char* c3, int index = 0,
   double val_default = 0., int type_treat = 0);
int treat_Struct_FullName_dot_tSTRING_Float_getDim
  (char* c1, char* c2, char* c3);
char* treat_Struct_FullName_String
  (char* c1, char* c2, int type_var = 1, int index = 0,
   char* val_default = NULL, int type_treat = 0);
char* treat_Struct_FullName_dot_tSTRING_String
  (char* c1, char* c2, char* c3, int index = 0,
   char* val_default = NULL, int type_treat = 0);

struct doubleXstring{
  double d;
  char *s;
};



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 159 "Gmsh.y"
{
  char *c;
  int i;
  unsigned int u;
  double d;
  double v[5];
  Shape s;
  List_T *l;
  struct TwoChar c2;
}
/* Line 193 of yacc.c.  */
#line 723 "Gmsh.tab.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 736 "Gmsh.tab.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   15487

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  248
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  107
/* YYNRULES -- Number of rules.  */
#define YYNRULES  588
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2151

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   480

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   233,     2,   245,     2,   230,   232,     2,
     238,   239,   228,   226,   247,   227,   244,   229,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     220,     2,   221,   215,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   240,     2,   241,   237,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   242,   231,   243,   246,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     216,   217,   218,   219,   222,   223,   224,   225,   234,   235,
     236
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    12,    14,    16,    18,
      24,    26,    28,    30,    32,    34,    36,    38,    40,    42,
      44,    46,    48,    50,    52,    54,    56,    58,    60,    66,
      72,    80,    88,    96,   106,   113,   120,   127,   136,   137,
     140,   143,   146,   149,   152,   154,   158,   160,   164,   165,
     166,   177,   179,   183,   184,   198,   200,   204,   205,   221,
     230,   245,   246,   253,   255,   257,   259,   261,   263,   265,
     267,   269,   271,   273,   275,   281,   287,   290,   298,   306,
     311,   315,   322,   332,   340,   347,   355,   362,   367,   376,
     386,   396,   403,   413,   420,   430,   436,   445,   454,   466,
     473,   483,   489,   497,   507,   517,   529,   537,   547,   557,
     558,   560,   561,   565,   571,   572,   582,   583,   595,   601,
     602,   612,   613,   617,   621,   627,   633,   634,   637,   638,
     640,   642,   646,   649,   651,   656,   659,   660,   663,   665,
     669,   672,   675,   678,   683,   685,   687,   691,   693,   695,
     699,   701,   703,   707,   709,   711,   715,   716,   722,   723,
     726,   734,   742,   750,   759,   768,   776,   784,   796,   805,
     813,   822,   831,   840,   850,   854,   859,   870,   878,   886,
     894,   902,   910,   918,   926,   934,   942,   950,   959,   972,
     981,   989,   997,  1006,  1015,  1024,  1033,  1042,  1051,  1057,
    1069,  1075,  1085,  1095,  1100,  1110,  1120,  1122,  1124,  1125,
    1128,  1135,  1142,  1149,  1156,  1165,  1176,  1191,  1208,  1221,
    1236,  1251,  1266,  1281,  1290,  1299,  1306,  1311,  1317,  1324,
    1331,  1335,  1340,  1344,  1350,  1357,  1363,  1367,  1371,  1376,
    1382,  1387,  1393,  1397,  1403,  1411,  1419,  1423,  1431,  1435,
    1438,  1441,  1444,  1447,  1450,  1466,  1469,  1472,  1475,  1478,
    1481,  1498,  1510,  1517,  1526,  1535,  1546,  1548,  1551,  1554,
    1556,  1560,  1564,  1569,  1574,  1576,  1578,  1584,  1596,  1610,
    1611,  1619,  1620,  1634,  1635,  1651,  1652,  1659,  1669,  1672,
    1676,  1687,  1689,  1692,  1698,  1706,  1709,  1712,  1716,  1719,
    1723,  1726,  1730,  1740,  1747,  1749,  1751,  1753,  1755,  1757,
    1758,  1761,  1765,  1769,  1774,  1784,  1789,  1804,  1805,  1809,
    1810,  1812,  1813,  1816,  1817,  1820,  1821,  1824,  1831,  1839,
    1846,  1852,  1856,  1865,  1871,  1876,  1883,  1895,  1907,  1926,
    1945,  1958,  1971,  1984,  1995,  2006,  2017,  2028,  2039,  2044,
    2049,  2054,  2059,  2064,  2069,  2074,  2079,  2084,  2087,  2091,
    2098,  2100,  2102,  2104,  2107,  2113,  2121,  2132,  2134,  2138,
    2141,  2144,  2147,  2151,  2155,  2159,  2163,  2167,  2171,  2175,
    2179,  2183,  2187,  2191,  2195,  2199,  2203,  2207,  2211,  2215,
    2219,  2225,  2230,  2235,  2240,  2245,  2250,  2255,  2260,  2265,
    2270,  2275,  2282,  2287,  2292,  2297,  2302,  2307,  2312,  2317,
    2322,  2329,  2336,  2343,  2348,  2350,  2352,  2354,  2356,  2358,
    2360,  2362,  2364,  2366,  2368,  2370,  2371,  2378,  2380,  2385,
    2392,  2394,  2399,  2404,  2409,  2416,  2422,  2430,  2435,  2440,
    2447,  2452,  2456,  2459,  2465,  2471,  2475,  2481,  2488,  2497,
    2504,  2509,  2517,  2524,  2531,  2538,  2543,  2550,  2555,  2556,
    2559,  2560,  2563,  2564,  2572,  2574,  2578,  2580,  2582,  2585,
    2586,  2590,  2592,  2595,  2598,  2602,  2606,  2618,  2628,  2636,
    2644,  2646,  2650,  2652,  2654,  2657,  2661,  2666,  2672,  2674,
    2676,  2679,  2683,  2687,  2693,  2698,  2701,  2704,  2707,  2710,
    2714,  2718,  2722,  2726,  2743,  2760,  2777,  2794,  2796,  2798,
    2800,  2804,  2809,  2814,  2819,  2826,  2833,  2842,  2851,  2856,
    2871,  2876,  2881,  2883,  2885,  2889,  2893,  2903,  2911,  2913,
    2919,  2923,  2930,  2932,  2936,  2938,  2940,  2945,  2950,  2954,
    2960,  2967,  2976,  2983,  2989,  2995,  3001,  3007,  3009,  3014,
    3016,  3018,  3020,  3022,  3027,  3034,  3039,  3046,  3052,  3060,
    3065,  3070,  3075,  3084,  3089,  3094,  3099,  3104,  3113,  3122,
    3129,  3134,  3141,  3146,  3148,  3153,  3158,  3159,  3166,  3171,
    3174,  3179,  3181,  3185,  3191,  3197,  3206,  3208,  3210
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     249,     0,    -1,   250,    -1,     1,     6,    -1,    -1,   250,
     251,    -1,   253,    -1,   254,    -1,   274,    -1,   117,   238,
     348,   239,     6,    -1,   295,    -1,   296,    -1,   300,    -1,
     301,    -1,   302,    -1,   303,    -1,   307,    -1,   316,    -1,
     317,    -1,   323,    -1,   324,    -1,   306,    -1,   305,    -1,
     304,    -1,   299,    -1,   326,    -1,   221,    -1,   222,    -1,
      44,   238,   348,   239,     6,    -1,    45,   238,   348,   239,
       6,    -1,    44,   238,   348,   239,   252,   348,     6,    -1,
      44,   238,   348,   247,   344,   239,     6,    -1,    45,   238,
     348,   247,   344,   239,     6,    -1,    44,   238,   348,   247,
     344,   239,   252,   348,     6,    -1,   354,   348,   242,   255,
     243,     6,    -1,   156,     4,   240,   327,   241,     6,    -1,
     157,     4,   240,   327,   241,     6,    -1,   158,     4,   240,
     327,   247,   327,   241,     6,    -1,    -1,   255,   258,    -1,
     255,   262,    -1,   255,   265,    -1,   255,   267,    -1,   255,
     268,    -1,   327,    -1,   256,   247,   327,    -1,   327,    -1,
     257,   247,   327,    -1,    -1,    -1,     4,   259,   238,   256,
     239,   260,   242,   257,   243,     6,    -1,   348,    -1,   261,
     247,   348,    -1,    -1,   163,   238,   327,   247,   327,   247,
     327,   239,   263,   242,   261,   243,     6,    -1,   348,    -1,
     264,   247,   348,    -1,    -1,   164,   238,   327,   247,   327,
     247,   327,   247,   327,   239,   266,   242,   264,   243,     6,
      -1,   165,   242,   340,   243,   242,   340,   243,     6,    -1,
     165,   242,   340,   243,   242,   340,   243,   242,   340,   243,
     242,   340,   243,     6,    -1,    -1,   166,   269,   242,   257,
     243,     6,    -1,     7,    -1,   214,    -1,   213,    -1,   212,
      -1,   211,    -1,   236,    -1,   235,    -1,   238,    -1,   240,
      -1,   239,    -1,   241,    -1,    81,   240,   276,   241,     6,
      -1,    82,   240,   280,   241,     6,    -1,   332,     6,    -1,
      89,   272,   349,   247,   327,   273,     6,    -1,    90,   272,
     354,   247,   349,   273,     6,    -1,   354,   270,   341,     6,
      -1,   354,   271,     6,    -1,   354,   272,   273,   270,   341,
       6,    -1,   354,   272,   242,   344,   243,   273,   270,   341,
       6,    -1,   354,   240,   327,   241,   270,   327,     6,    -1,
     354,   240,   327,   241,   271,     6,    -1,   354,   238,   327,
     239,   270,   327,     6,    -1,   354,   238,   327,   239,   271,
       6,    -1,   354,     7,   349,     6,    -1,   354,   272,   273,
       7,    46,   272,   273,     6,    -1,   354,   272,   273,     7,
      46,   272,   352,   273,     6,    -1,   354,   272,   273,   214,
      46,   272,   352,   273,     6,    -1,   354,   244,     4,     7,
     349,     6,    -1,   354,   240,   327,   241,   244,     4,     7,
     349,     6,    -1,   354,   244,     4,   270,   327,     6,    -1,
     354,   240,   327,   241,   244,     4,   270,   327,     6,    -1,
     354,   244,     4,   271,     6,    -1,   354,   240,   327,   241,
     244,     4,   271,     6,    -1,   354,   244,   173,   244,     4,
       7,   345,     6,    -1,   354,   240,   327,   241,   244,   173,
     244,     4,     7,   345,     6,    -1,   354,   244,   174,     7,
     346,     6,    -1,   354,   240,   327,   241,   244,   174,     7,
     346,     6,    -1,   354,   184,     7,   327,     6,    -1,   184,
     240,   327,   241,     7,     4,     6,    -1,   184,   240,   327,
     241,   244,     4,     7,   327,     6,    -1,   184,   240,   327,
     241,   244,     4,     7,   349,     6,    -1,   184,   240,   327,
     241,   244,     4,     7,   242,   344,   243,     6,    -1,   184,
     240,   327,   241,   244,     4,     6,    -1,   129,   238,     4,
     239,   244,     4,     7,   327,     6,    -1,   129,   238,     4,
     239,   244,     4,     7,   349,     6,    -1,    -1,   247,    -1,
      -1,   276,   275,   354,    -1,   276,   275,   354,     7,   327,
      -1,    -1,   276,   275,   354,     7,   242,   341,   277,   282,
     243,    -1,    -1,   276,   275,   354,   272,   273,     7,   242,
     341,   278,   282,   243,    -1,   276,   275,   354,     7,   349,
      -1,    -1,   276,   275,   354,     7,   242,   349,   279,   286,
     243,    -1,    -1,   280,   275,   348,    -1,   327,     7,   349,
      -1,   281,   247,   327,     7,   349,    -1,   343,     7,   354,
     238,   239,    -1,    -1,   247,   284,    -1,    -1,   284,    -1,
     285,    -1,   284,   247,   285,    -1,     4,   341,    -1,     4,
      -1,     4,   242,   281,   243,    -1,     4,   349,    -1,    -1,
     247,   287,    -1,   288,    -1,   287,   247,   288,    -1,     4,
     327,    -1,     4,   349,    -1,   188,   349,    -1,     4,   242,
     352,   243,    -1,   327,    -1,   349,    -1,   349,   247,   327,
      -1,   327,    -1,   349,    -1,   349,   247,   327,    -1,   327,
      -1,   349,    -1,   349,   247,   327,    -1,   327,    -1,   349,
      -1,   349,   247,   327,    -1,    -1,   176,    95,   242,   327,
     243,    -1,    -1,   122,   338,    -1,    91,   238,   327,   239,
       7,   338,     6,    -1,    94,   238,   327,   239,     7,   341,
       6,    -1,    98,   238,   327,   239,     7,   341,     6,    -1,
      92,   238,   327,   239,     7,   341,   294,     6,    -1,    93,
     238,   327,   239,     7,   341,   294,     6,    -1,   168,   238,
     327,   239,     7,   341,     6,    -1,   169,   238,   327,   239,
       7,   341,     6,    -1,   170,   238,   327,   239,     7,   341,
     172,   341,   171,   327,     6,    -1,   126,    94,   238,   327,
     239,     7,   341,     6,    -1,   109,   238,   327,   239,     7,
     341,     6,    -1,    94,     4,   238,   327,   239,     7,   341,
       6,    -1,   122,    97,   238,   327,   239,     7,   341,     6,
      -1,    97,   238,   327,   239,     7,   341,   293,     6,    -1,
     123,    97,   238,   327,   239,     7,   341,   293,     6,    -1,
      13,    14,     6,    -1,    14,    97,   327,     6,    -1,   112,
      97,   238,   327,   239,     7,     5,     5,     5,     6,    -1,
      95,   238,   327,   239,     7,   341,     6,    -1,    96,   238,
     327,   239,     7,   341,     6,    -1,   100,   238,   327,   239,
       7,   341,     6,    -1,   103,   238,   327,   239,     7,   341,
       6,    -1,   107,   238,   327,   239,     7,   341,     6,    -1,
     108,   238,   327,   239,     7,   341,     6,    -1,   101,   238,
     327,   239,     7,   341,     6,    -1,   102,   238,   327,   239,
       7,   341,     6,    -1,   119,   238,   327,   239,     7,   341,
       6,    -1,   144,   238,   327,   239,     7,   341,     6,    -1,
     126,    97,   238,   327,   239,     7,   341,     6,    -1,   126,
      97,   238,   327,   239,     7,   341,     4,   242,   340,   243,
       6,    -1,    97,     4,   238,   327,   239,     7,   341,     6,
      -1,    99,   238,   327,   239,     7,   341,     6,    -1,   118,
     238,   327,   239,     7,   341,     6,    -1,   123,   118,   238,
     327,   239,     7,   341,     6,    -1,   126,    99,   238,   327,
     239,     7,   341,     6,    -1,   125,    91,   238,   289,   239,
     270,   341,     6,    -1,   125,    94,   238,   290,   239,   270,
     341,     6,    -1,   125,    97,   238,   291,   239,   270,   341,
       6,    -1,   125,    99,   238,   292,   239,   270,   341,     6,
      -1,   133,   338,   242,   297,   243,    -1,   132,   242,   338,
     247,   338,   247,   327,   243,   242,   297,   243,    -1,   134,
     338,   242,   297,   243,    -1,   135,   242,   338,   247,   327,
     243,   242,   297,   243,    -1,   135,   242,   338,   247,   338,
     243,   242,   297,   243,    -1,     4,   242,   297,   243,    -1,
     150,    94,   242,   344,   243,    97,   242,   327,   243,    -1,
     147,    94,   238,   327,   239,   242,   344,   243,     6,    -1,
     298,    -1,   296,    -1,    -1,   298,   295,    -1,   298,    91,
     242,   344,   243,     6,    -1,   298,    94,   242,   344,   243,
       6,    -1,   298,    97,   242,   344,   243,     6,    -1,   298,
      99,   242,   344,   243,     6,    -1,   137,   122,   238,   327,
     239,     7,   341,     6,    -1,   137,    91,   238,   327,   239,
       7,   242,   340,   243,     6,    -1,   137,   122,   238,   327,
     239,     7,   242,   338,   247,   338,   247,   344,   243,     6,
      -1,   137,   122,   238,   327,   239,     7,   242,   338,   247,
     338,   247,   338,   247,   344,   243,     6,    -1,   137,    95,
     238,   327,   239,     7,   242,   338,   247,   344,   243,     6,
      -1,   137,   101,   238,   327,   239,     7,   242,   338,   247,
     338,   247,   344,   243,     6,    -1,   137,   102,   238,   327,
     239,     7,   242,   338,   247,   338,   247,   344,   243,     6,
      -1,   137,   104,   238,   327,   239,     7,   242,   338,   247,
     338,   247,   344,   243,     6,    -1,   137,   105,   238,   327,
     239,     7,   242,   338,   247,   338,   247,   344,   243,     6,
      -1,   137,     4,   238,   327,   239,     7,   341,     6,    -1,
     137,     4,   238,   327,   239,     7,     5,     6,    -1,   137,
       4,   242,   327,   243,     6,    -1,   148,   242,   298,   243,
      -1,   131,   148,   242,   298,   243,    -1,   148,   184,   240,
     327,   241,     6,    -1,   148,     4,   240,   327,   241,     6,
      -1,   148,   354,     6,    -1,   148,     4,     4,     6,    -1,
     148,    84,     6,    -1,   173,   345,   242,   298,   243,    -1,
     131,   173,   345,   242,   298,   243,    -1,   208,   327,   242,
     298,   243,    -1,   189,     5,     6,    -1,   190,     5,     6,
      -1,   189,   242,   298,   243,    -1,   131,   189,   242,   298,
     243,    -1,   190,   242,   298,   243,    -1,   131,   190,   242,
     298,   243,    -1,   354,   349,     6,    -1,    73,   238,   352,
     239,     6,    -1,   354,   354,   240,   327,   241,   348,     6,
      -1,   354,   354,   354,   240,   327,   241,     6,    -1,   354,
     327,     6,    -1,   129,   238,     4,   239,   244,     4,     6,
      -1,   167,     4,     6,    -1,   182,     6,    -1,   183,     6,
      -1,    70,     6,    -1,    71,     6,    -1,    64,     6,    -1,
      64,   242,   327,   247,   327,   247,   327,   247,   327,   247,
     327,   247,   327,   243,     6,    -1,    65,     6,    -1,    66,
       6,    -1,    78,     6,    -1,    79,     6,    -1,   114,     6,
      -1,   115,   242,   344,   243,   242,   344,   243,   242,   340,
     243,   242,   327,   247,   327,   243,     6,    -1,   187,   238,
     242,   344,   243,   247,   349,   247,   349,   239,     6,    -1,
     175,   238,   327,     8,   327,   239,    -1,   175,   238,   327,
       8,   327,     8,   327,   239,    -1,   175,     4,   176,   242,
     327,     8,   327,   243,    -1,   175,     4,   176,   242,   327,
       8,   327,     8,   327,   243,    -1,   177,    -1,   188,     4,
      -1,   188,   349,    -1,   185,    -1,   186,   354,     6,    -1,
     186,   349,     6,    -1,   178,   238,   327,   239,    -1,   179,
     238,   327,   239,    -1,   180,    -1,   181,    -1,   136,   338,
     242,   298,   243,    -1,   136,   242,   338,   247,   338,   247,
     327,   243,   242,   298,   243,    -1,   136,   242,   338,   247,
     338,   247,   338,   247,   327,   243,   242,   298,   243,    -1,
      -1,   136,   338,   242,   298,   308,   312,   243,    -1,    -1,
     136,   242,   338,   247,   338,   247,   327,   243,   242,   298,
     309,   312,   243,    -1,    -1,   136,   242,   338,   247,   338,
     247,   338,   247,   327,   243,   242,   298,   310,   312,   243,
      -1,    -1,   136,   242,   298,   311,   312,   243,    -1,   136,
     242,   298,   243,   128,   109,   242,   327,   243,    -1,   118,
     341,    -1,   123,   118,   341,    -1,   120,   242,   344,   243,
     242,   344,   243,   242,   327,   243,    -1,   313,    -1,   312,
     313,    -1,   153,   242,   327,   243,     6,    -1,   153,   242,
     341,   247,   341,   243,     6,    -1,   154,     6,    -1,   145,
       6,    -1,   145,   327,     6,    -1,   159,     6,    -1,   159,
     161,     6,    -1,   160,     6,    -1,   160,   161,     6,    -1,
     155,   238,   327,   239,     7,   341,   128,   327,     6,    -1,
     128,     4,   240,   327,   241,     6,    -1,   139,    -1,   140,
      -1,   141,    -1,   142,    -1,   143,    -1,    -1,   148,     6,
      -1,   131,   148,     6,    -1,   148,   327,     6,    -1,   131,
     148,   327,     6,    -1,   314,   242,   298,   315,   243,   242,
     298,   315,   243,    -1,   106,   238,   348,   239,    -1,   314,
     238,   327,   239,     7,   242,   298,   315,   243,   242,   298,
     315,   243,     6,    -1,    -1,   128,     4,   327,    -1,    -1,
       4,    -1,    -1,     7,   341,    -1,    -1,     7,   327,    -1,
      -1,   138,   341,    -1,   110,   111,   341,     7,   327,     6,
      -1,   124,    94,   342,     7,   327,   318,     6,    -1,   124,
      97,   342,   320,   319,     6,    -1,   124,    99,   342,   320,
       6,    -1,   162,   342,     6,    -1,   151,    97,   242,   344,
     243,     7,   327,     6,    -1,   145,    97,   342,   321,     6,
      -1,   145,    99,   342,     6,    -1,   146,    97,   342,     7,
     327,     6,    -1,   127,    94,   242,   344,   243,     7,   242,
     344,   243,   322,     6,    -1,   127,    97,   242,   344,   243,
       7,   242,   344,   243,   322,     6,    -1,   127,    94,   242,
     344,   243,     7,   242,   344,   243,   132,   242,   338,   247,
     338,   247,   327,   243,     6,    -1,   127,    97,   242,   344,
     243,     7,   242,   344,   243,   132,   242,   338,   247,   338,
     247,   327,   243,     6,    -1,   127,    94,   242,   344,   243,
       7,   242,   344,   243,   133,   338,     6,    -1,   127,    97,
     242,   344,   243,     7,   242,   344,   243,   133,   338,     6,
      -1,   127,    97,   327,   242,   344,   243,     7,   327,   242,
     344,   243,     6,    -1,    91,   242,   344,   243,   176,    97,
     242,   327,   243,     6,    -1,    94,   242,   344,   243,   176,
      97,   242,   327,   243,     6,    -1,    91,   242,   344,   243,
     176,    99,   242,   327,   243,     6,    -1,    94,   242,   344,
     243,   176,    99,   242,   327,   243,     6,    -1,    97,   242,
     344,   243,   176,    99,   242,   327,   243,     6,    -1,   152,
      97,   342,     6,    -1,   152,    94,   342,     6,    -1,   116,
      91,   342,     6,    -1,   116,    94,   342,     6,    -1,   116,
      97,   342,     6,    -1,   130,    94,   341,     6,    -1,   126,
      94,   341,     6,    -1,   126,    97,   341,     6,    -1,   126,
      99,   341,     6,    -1,   149,     6,    -1,   149,     4,     6,
      -1,   149,    91,   242,   344,   243,     6,    -1,   197,    -1,
     198,    -1,   199,    -1,   325,     6,    -1,   325,   242,   341,
     243,     6,    -1,   325,   242,   341,   247,   341,   243,     6,
      -1,   325,   238,   341,   239,   242,   341,   247,   341,   243,
       6,    -1,   328,    -1,   238,   327,   239,    -1,   227,   327,
      -1,   226,   327,    -1,   233,   327,    -1,   327,   227,   327,
      -1,   327,   226,   327,    -1,   327,   228,   327,    -1,   327,
     229,   327,    -1,   327,   231,   327,    -1,   327,   232,   327,
      -1,   327,   230,   327,    -1,   327,   237,   327,    -1,   327,
     220,   327,    -1,   327,   221,   327,    -1,   327,   225,   327,
      -1,   327,   224,   327,    -1,   327,   219,   327,    -1,   327,
     218,   327,    -1,   327,   217,   327,    -1,   327,   216,   327,
      -1,   327,   222,   327,    -1,   327,   223,   327,    -1,   327,
     215,   327,     8,   327,    -1,    16,   272,   327,   273,    -1,
      17,   272,   327,   273,    -1,    18,   272,   327,   273,    -1,
      19,   272,   327,   273,    -1,    20,   272,   327,   273,    -1,
      21,   272,   327,   273,    -1,    22,   272,   327,   273,    -1,
      23,   272,   327,   273,    -1,    24,   272,   327,   273,    -1,
      26,   272,   327,   273,    -1,    27,   272,   327,   247,   327,
     273,    -1,    28,   272,   327,   273,    -1,    29,   272,   327,
     273,    -1,    30,   272,   327,   273,    -1,    31,   272,   327,
     273,    -1,    32,   272,   327,   273,    -1,    33,   272,   327,
     273,    -1,    34,   272,   327,   273,    -1,    35,   272,   327,
     273,    -1,    36,   272,   327,   247,   327,   273,    -1,    37,
     272,   327,   247,   327,   273,    -1,    38,   272,   327,   247,
     327,   273,    -1,    25,   272,   327,   273,    -1,     3,    -1,
      10,    -1,    15,    -1,    11,    -1,    12,    -1,   204,    -1,
     205,    -1,   206,    -1,    75,    -1,    76,    -1,    77,    -1,
      -1,    83,   272,   327,   329,   282,   273,    -1,   332,    -1,
     195,   272,   348,   273,    -1,   195,   272,   348,   247,   327,
     273,    -1,   334,    -1,   354,   240,   327,   241,    -1,   354,
     238,   327,   239,    -1,   200,   238,   334,   239,    -1,   200,
     238,   334,   244,   335,   239,    -1,   202,   238,   334,   330,
     239,    -1,   202,   238,   334,   244,   335,   330,   239,    -1,
     201,   238,   349,   239,    -1,   245,   354,   272,   273,    -1,
     245,   334,   244,   335,   238,   239,    -1,    86,   272,   354,
     273,    -1,    86,   272,   273,    -1,   354,   271,    -1,   354,
     240,   327,   241,   271,    -1,   354,   238,   327,   239,   271,
      -1,   354,   244,   335,    -1,   354,     9,   354,   244,   335,
      -1,   354,   244,   335,   238,   327,   239,    -1,   354,     9,
     354,   244,   335,   238,   327,   239,    -1,   354,   240,   327,
     241,   244,     4,    -1,   354,   244,     4,   271,    -1,   354,
     240,   327,   241,   244,     4,   271,    -1,   191,   238,   348,
     247,   327,   239,    -1,    56,   238,   341,   247,   341,   239,
      -1,    57,   272,   348,   247,   348,   273,    -1,    55,   272,
     348,   273,    -1,    58,   272,   348,   247,   348,   273,    -1,
      63,   238,   352,   239,    -1,    -1,   247,   327,    -1,    -1,
     247,   348,    -1,    -1,    84,   334,   337,   333,   240,   283,
     241,    -1,   354,    -1,   354,     9,   354,    -1,     4,    -1,
      87,    -1,    87,   327,    -1,    -1,   238,   336,   239,    -1,
     339,    -1,   227,   338,    -1,   226,   338,    -1,   338,   227,
     338,    -1,   338,   226,   338,    -1,   242,   327,   247,   327,
     247,   327,   247,   327,   247,   327,   243,    -1,   242,   327,
     247,   327,   247,   327,   247,   327,   243,    -1,   242,   327,
     247,   327,   247,   327,   243,    -1,   238,   327,   247,   327,
     247,   327,   239,    -1,   341,    -1,   340,   247,   341,    -1,
     327,    -1,   343,    -1,   242,   243,    -1,   242,   344,   243,
      -1,   227,   242,   344,   243,    -1,   327,   228,   242,   344,
     243,    -1,   341,    -1,     5,    -1,   227,   343,    -1,   327,
     228,   343,    -1,   327,     8,   327,    -1,   327,     8,   327,
       8,   327,    -1,    91,   242,   327,   243,    -1,    91,     5,
      -1,    94,     5,    -1,    97,     5,    -1,    99,     5,    -1,
     125,    91,   342,    -1,   125,    94,   342,    -1,   125,    97,
     342,    -1,   125,    99,   342,    -1,    91,   176,    64,   242,
     327,   247,   327,   247,   327,   247,   327,   247,   327,   247,
     327,   243,    -1,    94,   176,    64,   242,   327,   247,   327,
     247,   327,   247,   327,   247,   327,   247,   327,   243,    -1,
      97,   176,    64,   242,   327,   247,   327,   247,   327,   247,
     327,   247,   327,   247,   327,   243,    -1,    99,   176,    64,
     242,   327,   247,   327,   247,   327,   247,   327,   247,   327,
     247,   327,   243,    -1,   296,    -1,   307,    -1,   316,    -1,
     354,   272,   273,    -1,    39,   240,   354,   241,    -1,    39,
     240,   343,   241,    -1,    39,   238,   343,   239,    -1,    39,
     272,   242,   344,   243,   273,    -1,   354,   272,   242,   344,
     243,   273,    -1,    40,   272,   327,   247,   327,   247,   327,
     273,    -1,    41,   272,   327,   247,   327,   247,   327,   273,
      -1,    42,   272,   348,   273,    -1,    43,   272,   327,   247,
     327,   247,   327,   247,   327,   247,   327,   247,   327,   273,
      -1,   196,   272,   343,   273,    -1,    32,   272,   343,   273,
      -1,   327,    -1,   343,    -1,   344,   247,   327,    -1,   344,
     247,   343,    -1,   242,   327,   247,   327,   247,   327,   247,
     327,   243,    -1,   242,   327,   247,   327,   247,   327,   243,
      -1,   354,    -1,     4,   244,   173,   244,     4,    -1,   242,
     347,   243,    -1,   354,   240,   327,   241,   244,   174,    -1,
     345,    -1,   347,   247,   345,    -1,   349,    -1,   354,    -1,
     354,   240,   327,   241,    -1,   354,   238,   327,   239,    -1,
     354,   244,   335,    -1,   354,     9,   354,   244,   335,    -1,
     354,   244,   335,   238,   327,   239,    -1,   354,     9,   354,
     244,   335,   238,   327,   239,    -1,   354,   240,   327,   241,
     244,     4,    -1,   125,    91,   242,   327,   243,    -1,   125,
      94,   242,   327,   243,    -1,   125,    97,   242,   327,   243,
      -1,   125,    99,   242,   327,   243,    -1,     5,    -1,   209,
     240,   354,   241,    -1,    67,    -1,   207,    -1,    72,    -1,
      74,    -1,   193,   238,   348,   239,    -1,   192,   238,   348,
     247,   348,   239,    -1,   194,   272,   348,   273,    -1,   194,
     272,   348,   247,   348,   273,    -1,   203,   238,   334,   331,
     239,    -1,   203,   238,   334,   244,   335,   331,   239,    -1,
      48,   272,   352,   273,    -1,    49,   238,   348,   239,    -1,
      50,   238,   348,   239,    -1,    51,   238,   348,   247,   348,
     247,   348,   239,    -1,    46,   272,   352,   273,    -1,    60,
     272,   348,   273,    -1,    61,   272,   348,   273,    -1,    62,
     272,   348,   273,    -1,    59,   272,   327,   247,   348,   247,
     348,   273,    -1,    54,   272,   348,   247,   327,   247,   327,
     273,    -1,    54,   272,   348,   247,   327,   273,    -1,    47,
     272,   348,   273,    -1,    47,   272,   348,   247,   344,   273,
      -1,    68,   272,   348,   273,    -1,    69,    -1,    53,   272,
     348,   273,    -1,    52,   272,   348,   273,    -1,    -1,    88,
     272,   349,   350,   286,   273,    -1,    85,   272,   351,   273,
      -1,   245,   327,    -1,   354,     9,   245,   327,    -1,   348,
      -1,   352,   247,   348,    -1,     4,   246,   242,   327,   243,
      -1,   353,   246,   242,   327,   243,    -1,   210,   240,   348,
     241,   246,   242,   327,   243,    -1,     4,    -1,   353,    -1,
     210,   240,   348,   241,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   259,   259,   260,   265,   267,   271,   272,   273,   274,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   312,   316,   323,   328,
     333,   347,   360,   373,   401,   415,   428,   441,   460,   465,
     466,   467,   468,   469,   473,   475,   480,   482,   488,   592,
     487,   610,   617,   628,   627,   645,   652,   663,   662,   679,
     696,   719,   718,   732,   733,   734,   735,   736,   740,   741,
     747,   747,   748,   748,   754,   755,   756,   757,   762,   768,
     830,   845,   874,   884,   889,   897,   902,   910,   919,   924,
     936,   953,   959,   968,   986,  1004,  1013,  1025,  1030,  1038,
    1058,  1081,  1092,  1100,  1122,  1145,  1183,  1204,  1216,  1230,
    1230,  1232,  1234,  1243,  1253,  1252,  1273,  1272,  1290,  1300,
    1299,  1313,  1315,  1323,  1329,  1334,  1360,  1362,  1365,  1367,
    1371,  1372,  1376,  1388,  1401,  1416,  1426,  1428,  1432,  1433,
    1438,  1446,  1455,  1463,  1481,  1485,  1492,  1500,  1504,  1511,
    1519,  1523,  1530,  1538,  1542,  1549,  1558,  1561,  1568,  1571,
    1578,  1602,  1618,  1634,  1671,  1711,  1727,  1743,  1765,  1775,
    1791,  1808,  1824,  1845,  1856,  1862,  1868,  1875,  1906,  1921,
    1943,  1966,  1989,  2012,  2036,  2060,  2083,  2108,  2118,  2141,
    2158,  2174,  2192,  2210,  2220,  2232,  2244,  2256,  2273,  2289,
    2305,  2320,  2337,  2354,  2389,  2411,  2435,  2436,  2441,  2444,
    2448,  2459,  2470,  2481,  2497,  2516,  2537,  2552,  2568,  2586,
    2637,  2658,  2680,  2703,  2808,  2824,  2859,  2870,  2881,  2887,
    2902,  2930,  2942,  2951,  2958,  2970,  2989,  2995,  3001,  3008,
    3015,  3022,  3034,  3107,  3125,  3142,  3157,  3190,  3202,  3226,
    3230,  3235,  3242,  3247,  3257,  3262,  3268,  3276,  3280,  3284,
    3293,  3357,  3373,  3390,  3407,  3429,  3451,  3486,  3494,  3502,
    3508,  3515,  3522,  3542,  3568,  3580,  3592,  3610,  3628,  3647,
    3646,  3671,  3670,  3697,  3696,  3721,  3720,  3743,  3759,  3776,
    3793,  3816,  3819,  3825,  3837,  3857,  3861,  3865,  3869,  3873,
    3877,  3881,  3885,  3894,  3907,  3908,  3909,  3910,  3911,  3915,
    3916,  3917,  3918,  3919,  3922,  3945,  3964,  3986,  3989,  4005,
    4008,  4025,  4028,  4034,  4037,  4044,  4047,  4054,  4071,  4112,
    4156,  4195,  4220,  4229,  4259,  4285,  4311,  4343,  4370,  4396,
    4422,  4448,  4474,  4496,  4502,  4508,  4514,  4520,  4526,  4552,
    4578,  4595,  4612,  4629,  4641,  4647,  4653,  4665,  4669,  4679,
    4690,  4691,  4692,  4696,  4702,  4714,  4732,  4760,  4761,  4762,
    4763,  4764,  4765,  4766,  4767,  4768,  4775,  4776,  4777,  4778,
    4779,  4780,  4781,  4782,  4783,  4784,  4785,  4786,  4787,  4788,
    4789,  4790,  4791,  4792,  4793,  4794,  4795,  4796,  4797,  4798,
    4799,  4800,  4801,  4802,  4803,  4804,  4805,  4806,  4807,  4808,
    4809,  4810,  4811,  4812,  4821,  4822,  4823,  4824,  4825,  4826,
    4827,  4828,  4829,  4830,  4831,  4836,  4835,  4843,  4845,  4850,
    4855,  4859,  4864,  4869,  4873,  4877,  4881,  4885,  4891,  4907,
    4912,  4918,  4924,  4943,  4964,  4997,  5001,  5006,  5010,  5015,
    5020,  5030,  5040,  5045,  5056,  5065,  5070,  5075,  5103,  5104,
    5110,  5111,  5117,  5116,  5139,  5141,  5146,  5155,  5157,  5163,
    5164,  5170,  5174,  5178,  5182,  5186,  5193,  5197,  5201,  5205,
    5212,  5217,  5224,  5229,  5233,  5238,  5242,  5250,  5261,  5265,
    5277,  5285,  5293,  5300,  5310,  5333,  5339,  5345,  5351,  5357,
    5368,  5379,  5390,  5401,  5407,  5413,  5419,  5425,  5435,  5445,
    5455,  5468,  5480,  5484,  5488,  5492,  5510,  5518,  5526,  5555,
    5565,  5581,  5592,  5597,  5601,  5605,  5617,  5621,  5633,  5650,
    5660,  5664,  5679,  5684,  5691,  5695,  5700,  5714,  5731,  5735,
    5740,  5744,  5749,  5757,  5763,  5769,  5775,  5784,  5788,  5792,
    5800,  5806,  5812,  5816,  5824,  5832,  5839,  5849,  5854,  5859,
    5874,  5888,  5902,  5914,  5930,  5939,  5948,  5958,  5969,  5977,
    5985,  5989,  6008,  6015,  6021,  6028,  6036,  6035,  6045,  6069,
    6071,  6077,  6082,  6090,  6099,  6108,  6120,  6123,  6127
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tDOUBLE", "tSTRING", "tBIGSTR", "tEND",
  "tAFFECT", "tDOTS", "tSCOPE", "tPi", "tMPI_Rank", "tMPI_Size",
  "tEuclidian", "tCoordinates", "tTestLevel", "tExp", "tLog", "tLog10",
  "tSqrt", "tSin", "tAsin", "tCos", "tAcos", "tTan", "tRand", "tAtan",
  "tAtan2", "tSinh", "tCosh", "tTanh", "tFabs", "tAbs", "tFloor", "tCeil",
  "tRound", "tFmod", "tModulo", "tHypot", "tList", "tLinSpace",
  "tLogSpace", "tListFromFile", "tCatenary", "tPrintf", "tError", "tStr",
  "tSprintf", "tStrCat", "tStrPrefix", "tStrRelative", "tStrReplace",
  "tAbsolutePath", "tDirName", "tStrSub", "tStrLen", "tFind", "tStrFind",
  "tStrCmp", "tStrChoice", "tUpperCase", "tLowerCase", "tLowerCaseIn",
  "tTextAttributes", "tBoundingBox", "tDraw", "tSetChanged", "tToday",
  "tFixRelativePath", "tCurrentDirectory", "tSyncModel", "tNewModel",
  "tOnelabAction", "tOnelabRun", "tCodeName", "tCpu", "tMemory",
  "tTotalMemory", "tCreateTopology", "tCreateTopologyNoHoles",
  "tDistanceFunction", "tDefineConstant", "tUndefineConstant",
  "tDefineNumber", "tDefineStruct", "tNameStruct", "tDimNameSpace",
  "tAppend", "tDefineString", "tSetNumber", "tSetString", "tPoint",
  "tCircle", "tEllipse", "tLine", "tSphere", "tPolarSphere", "tSurface",
  "tSpline", "tVolume", "tBlock", "tCylinder", "tCone", "tTorus",
  "tEllipsoid", "tQuadric", "tShapeFromFile", "tRectangle", "tDisk",
  "tWire", "tCharacteristic", "tLength", "tParametric", "tElliptic",
  "tRefineMesh", "tAdaptMesh", "tRelocateMesh", "tSetFactory",
  "tThruSections", "tWedge", "tFillet", "tChamfer", "tPlane", "tRuled",
  "tTransfinite", "tPhysical", "tCompound", "tPeriodic", "tUsing",
  "tPlugin", "tDegenerated", "tRecursive", "tRotate", "tTranslate",
  "tSymmetry", "tDilate", "tExtrude", "tLevelset", "tAffine",
  "tBooleanUnion", "tBooleanIntersection", "tBooleanDifference",
  "tBooleanSection", "tBooleanFragments", "tThickSolid", "tRecombine",
  "tSmoother", "tSplit", "tDelete", "tCoherence", "tIntersect",
  "tMeshAlgorithm", "tReverse", "tLayers", "tScaleLast", "tHole", "tAlias",
  "tAliasWithOptions", "tCopyOptions", "tQuadTriAddVerts",
  "tQuadTriNoNewVerts", "tRecombLaterals", "tTransfQuadTri", "tText2D",
  "tText3D", "tInterpolationScheme", "tTime", "tCombine", "tBSpline",
  "tBezier", "tNurbs", "tNurbsOrder", "tNurbsKnots", "tColor",
  "tColorTable", "tFor", "tIn", "tEndFor", "tIf", "tElseIf", "tElse",
  "tEndIf", "tExit", "tAbort", "tField", "tReturn", "tCall", "tSlide",
  "tMacro", "tShow", "tHide", "tGetValue", "tGetStringValue", "tGetEnv",
  "tGetString", "tGetNumber", "tUnique", "tHomology", "tCohomology",
  "tBetti", "tExists", "tFileExists", "tGetForced", "tGetForcedStr",
  "tGMSH_MAJOR_VERSION", "tGMSH_MINOR_VERSION", "tGMSH_PATCH_VERSION",
  "tGmshExecutableName", "tSetPartition", "tNameToString", "tStringToName",
  "tAFFECTDIVIDE", "tAFFECTTIMES", "tAFFECTMINUS", "tAFFECTPLUS", "'?'",
  "tOR", "tAND", "tNOTEQUAL", "tEQUAL", "'<'", "'>'", "tGREATERGREATER",
  "tLESSLESS", "tGREATEROREQUAL", "tLESSOREQUAL", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'|'", "'&'", "'!'", "UNARYPREC", "tMINUSMINUS",
  "tPLUSPLUS", "'^'", "'('", "')'", "'['", "']'", "'{'", "'}'", "'.'",
  "'#'", "'~'", "','", "$accept", "All", "GeoFormatItems", "GeoFormatItem",
  "SendToFile", "Printf", "View", "Views", "ElementCoords",
  "ElementValues", "Element", "@1", "@2", "Text2DValues", "Text2D", "@3",
  "Text3DValues", "Text3D", "@4", "InterpolationMatrix", "Time", "@5",
  "NumericAffectation", "NumericIncrement", "LP", "RP", "Affectation",
  "Comma", "DefineConstants", "@6", "@7", "@8", "UndefineConstants",
  "Enumeration", "FloatParameterOptionsOrNone",
  "FloatParameterOptionsOrNone_NoComma", "FloatParameterOptions",
  "FloatParameterOption", "CharParameterOptionsOrNone",
  "CharParameterOptions", "CharParameterOption", "PhysicalId0",
  "PhysicalId1", "PhysicalId2", "PhysicalId3", "InSphereCenter",
  "CircleOptions", "Shape", "Transform", "MultipleShape", "ListOfShapes",
  "LevelSet", "Delete", "Colorify", "SetPartition", "Visibility",
  "Command", "Slide", "Loop", "Extrude", "@9", "@10", "@11", "@12",
  "ExtrudeParameters", "ExtrudeParameter", "BooleanOperator",
  "BooleanOption", "Boolean", "BooleanShape", "TransfiniteType",
  "TransfiniteArrangement", "TransfiniteCorners", "RecombineAngle",
  "PeriodicTransform", "Constraints", "Coherence", "HomologyCommand",
  "Homology", "FExpr", "FExpr_Single", "@13", "GetForced_Default",
  "GetForcedStr_Default", "DefineStruct", "@14", "Struct_FullName",
  "tSTRING_Member_Float", "Append", "AppendOrNot", "VExpr", "VExpr_Single",
  "RecursiveListOfListOfDouble", "ListOfDouble", "ListOfDoubleOrAll",
  "FExpr_Multi", "RecursiveListOfDouble", "ColorExpr", "ListOfColor",
  "RecursiveListOfColor", "StringExprVar", "StringExpr", "@15",
  "NameStruct_Arg", "RecursiveListOfStringExprVar", "StringIndex",
  "String__Index", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,    63,   470,   471,   472,   473,
      60,    62,   474,   475,   476,   477,    43,    45,    42,    47,
      37,   124,    38,    33,   478,   479,   480,    94,    40,    41,
      91,    93,   123,   125,    46,    35,   126,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   248,   249,   249,   250,   250,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   252,   252,   253,   253,
     253,   253,   253,   253,   254,   254,   254,   254,   255,   255,
     255,   255,   255,   255,   256,   256,   257,   257,   259,   260,
     258,   261,   261,   263,   262,   264,   264,   266,   265,   267,
     267,   269,   268,   270,   270,   270,   270,   270,   271,   271,
     272,   272,   273,   273,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   275,
     275,   276,   276,   276,   277,   276,   278,   276,   276,   279,
     276,   280,   280,   281,   281,   281,   282,   282,   283,   283,
     284,   284,   285,   285,   285,   285,   286,   286,   287,   287,
     288,   288,   288,   288,   289,   289,   289,   290,   290,   290,
     291,   291,   291,   292,   292,   292,   293,   293,   294,   294,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   296,   296,
     296,   296,   296,   296,   296,   296,   297,   297,   298,   298,
     298,   298,   298,   298,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   299,   299,   300,   300,   300,   300,
     300,   300,   300,   301,   301,   302,   303,   303,   303,   303,
     303,   303,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   305,   306,   306,   306,   306,   306,   306,   306,   306,
     306,   306,   306,   306,   306,   306,   307,   307,   307,   308,
     307,   309,   307,   310,   307,   311,   307,   307,   307,   307,
     307,   312,   312,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   314,   314,   314,   314,   314,   315,
     315,   315,   315,   315,   316,   316,   317,   318,   318,   319,
     319,   320,   320,   321,   321,   322,   322,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   324,   324,   324,
     325,   325,   325,   326,   326,   326,   326,   327,   327,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   327,   327,   327,   328,   328,   328,   328,   328,   328,
     328,   328,   328,   328,   328,   329,   328,   328,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   328,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   328,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   328,   330,   330,
     331,   331,   333,   332,   334,   334,   335,   336,   336,   337,
     337,   338,   338,   338,   338,   338,   339,   339,   339,   339,
     340,   340,   341,   341,   341,   341,   341,   341,   342,   342,
     343,   343,   343,   343,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   343,   343,   343,   343,
     343,   343,   344,   344,   344,   344,   345,   345,   345,   345,
     346,   346,   347,   347,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   349,   349,   349,
     349,   349,   349,   349,   349,   349,   349,   349,   349,   349,
     349,   349,   349,   349,   349,   349,   349,   349,   349,   349,
     349,   349,   349,   349,   349,   349,   350,   349,   349,   351,
     351,   352,   352,   353,   353,   353,   354,   354,   354
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     1,     1,     1,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     5,
       7,     7,     7,     9,     6,     6,     6,     8,     0,     2,
       2,     2,     2,     2,     1,     3,     1,     3,     0,     0,
      10,     1,     3,     0,    13,     1,     3,     0,    15,     8,
      14,     0,     6,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     5,     2,     7,     7,     4,
       3,     6,     9,     7,     6,     7,     6,     4,     8,     9,
       9,     6,     9,     6,     9,     5,     8,     8,    11,     6,
       9,     5,     7,     9,     9,    11,     7,     9,     9,     0,
       1,     0,     3,     5,     0,     9,     0,    11,     5,     0,
       9,     0,     3,     3,     5,     5,     0,     2,     0,     1,
       1,     3,     2,     1,     4,     2,     0,     2,     1,     3,
       2,     2,     2,     4,     1,     1,     3,     1,     1,     3,
       1,     1,     3,     1,     1,     3,     0,     5,     0,     2,
       7,     7,     7,     8,     8,     7,     7,    11,     8,     7,
       8,     8,     8,     9,     3,     4,    10,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     8,    12,     8,
       7,     7,     8,     8,     8,     8,     8,     8,     5,    11,
       5,     9,     9,     4,     9,     9,     1,     1,     0,     2,
       6,     6,     6,     6,     8,    10,    14,    16,    12,    14,
      14,    14,    14,     8,     8,     6,     4,     5,     6,     6,
       3,     4,     3,     5,     6,     5,     3,     3,     4,     5,
       4,     5,     3,     5,     7,     7,     3,     7,     3,     2,
       2,     2,     2,     2,    15,     2,     2,     2,     2,     2,
      16,    11,     6,     8,     8,    10,     1,     2,     2,     1,
       3,     3,     4,     4,     1,     1,     5,    11,    13,     0,
       7,     0,    13,     0,    15,     0,     6,     9,     2,     3,
      10,     1,     2,     5,     7,     2,     2,     3,     2,     3,
       2,     3,     9,     6,     1,     1,     1,     1,     1,     0,
       2,     3,     3,     4,     9,     4,    14,     0,     3,     0,
       1,     0,     2,     0,     2,     0,     2,     6,     7,     6,
       5,     3,     8,     5,     4,     6,    11,    11,    18,    18,
      12,    12,    12,    10,    10,    10,    10,    10,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     2,     3,     6,
       1,     1,     1,     2,     5,     7,    10,     1,     3,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       5,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     6,     4,     4,     4,     4,     4,     4,     4,     4,
       6,     6,     6,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     6,     1,     4,     6,
       1,     4,     4,     4,     6,     5,     7,     4,     4,     6,
       4,     3,     2,     5,     5,     3,     5,     6,     8,     6,
       4,     7,     6,     6,     6,     4,     6,     4,     0,     2,
       0,     2,     0,     7,     1,     3,     1,     1,     2,     0,
       3,     1,     2,     2,     3,     3,    11,     9,     7,     7,
       1,     3,     1,     1,     2,     3,     4,     5,     1,     1,
       2,     3,     3,     5,     4,     2,     2,     2,     2,     3,
       3,     3,     3,    16,    16,    16,    16,     1,     1,     1,
       3,     4,     4,     4,     6,     6,     8,     8,     4,    14,
       4,     4,     1,     1,     3,     3,     9,     7,     1,     5,
       3,     6,     1,     3,     1,     1,     4,     4,     3,     5,
       6,     8,     6,     5,     5,     5,     5,     1,     4,     1,
       1,     1,     1,     4,     6,     4,     6,     5,     7,     4,
       4,     4,     8,     4,     4,     4,     4,     8,     8,     6,
       4,     6,     4,     1,     4,     4,     0,     6,     4,     2,
       4,     1,     3,     5,     5,     8,     1,     1,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     2,     3,     1,   586,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   304,   305,   306,   307,   308,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   266,
       0,     0,   274,   275,     0,     0,     0,   269,     0,     0,
       0,     0,     0,   360,   361,   362,     0,     0,     5,     6,
       7,     8,    10,    11,    24,    12,    13,    14,    15,    23,
      22,    21,    16,     0,    17,    18,    19,    20,     0,    25,
       0,   587,     0,   208,     0,     0,     0,     0,     0,   253,
       0,   255,   256,   251,   252,     0,   257,   258,   111,   121,
     586,   469,   464,    70,    71,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   259,     0,     0,     0,     0,     0,   414,   415,   417,
     418,   416,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   422,   423,   424,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   419,   420,   421,     0,     0,     0,     0,
       0,     0,   507,   508,     0,   509,   482,   367,   427,   430,
     288,   483,   464,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   471,     0,     0,   208,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     586,     0,     0,   208,     0,     0,   357,     0,     0,     0,
       0,     0,     0,     0,     0,   489,     0,   488,     0,     0,
       0,     0,     0,   586,     0,     0,   528,     0,     0,     0,
       0,   249,   250,     0,   547,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   549,     0,
     573,   551,   552,     0,     0,     0,     0,     0,     0,   550,
       0,     0,     0,     0,   267,   268,     0,   208,     0,   208,
       0,     0,     0,   464,     0,     0,   208,   363,     0,     0,
      76,     0,    63,     0,     0,    67,    66,    65,    64,    69,
      68,    70,    71,     0,     0,     0,     0,     0,     0,   534,
     464,     0,   207,     0,   206,     0,   174,     0,     0,   534,
     535,     0,     0,   581,     0,   109,   109,     0,   462,     0,
       0,     0,     0,     0,   522,   523,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    70,    71,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   495,     0,     0,   496,     0,   497,     0,   498,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   370,     0,   369,   490,   371,     0,   484,     0,     0,
     464,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    70,    71,     0,   442,     0,     0,     0,     0,
       0,     0,   289,     0,   321,   321,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   208,     0,   208,   208,     0,   473,   472,     0,     0,
       0,     0,   208,   208,     0,     0,     0,     0,   285,     0,
     208,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   323,     0,     0,     0,     0,     0,   232,     0,     0,
     230,   358,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   331,   248,     0,     0,     0,     0,     0,   208,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   271,   270,     0,   236,     0,
     237,     0,     0,   369,     0,   208,     0,     0,     0,     0,
     309,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,    72,    73,     0,
       0,   246,    38,   242,     0,     0,     0,     0,     0,   203,
       0,     0,     0,     0,     0,     0,     0,   209,     0,   175,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   110,     0,     0,     0,   467,     0,     0,   465,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   315,     0,     0,     0,     0,     0,     0,   350,
     351,   352,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     464,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   425,   441,     0,     0,     0,     0,     0,     0,   499,
     500,   501,   502,     0,     0,     0,     0,     0,   458,     0,
     368,   485,     0,     0,   492,     0,   387,   386,   385,   384,
     380,   381,   388,   389,   383,   382,   373,   372,     0,   374,
     491,   375,   378,   376,   377,   379,   465,     0,     0,   466,
     445,     0,   510,     0,     0,     0,     0,     0,     0,     0,
     319,     0,     0,   144,   145,     0,   147,   148,     0,   150,
     151,     0,   153,   154,     0,   354,     0,   355,     0,   356,
       0,     0,     0,     0,   353,     0,   208,     0,     0,     0,
       0,     0,   475,   474,     0,     0,     0,     0,     0,     0,
       0,   279,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   334,     0,     0,   231,     0,     0,
     226,     0,     0,     0,   349,   348,     0,     0,     0,   368,
       0,     0,     0,     0,     0,     0,     0,     0,   272,   273,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   576,     0,
       0,     0,   460,     0,     0,   238,   240,     0,   374,     0,
     588,     0,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,   368,     0,    63,     0,     0,
       0,     0,    79,     0,    63,    64,     0,     0,   465,     0,
       0,   445,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   583,    28,    26,    27,     0,     0,     0,     0,
       0,   466,   538,    29,     0,     0,   243,   582,    74,   112,
      75,   122,   468,   470,   128,     0,     0,     0,     0,   524,
     525,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     9,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   413,   400,     0,   402,   403,   404,   405,
     406,   521,   407,   408,   409,     0,     0,     0,   513,   512,
     511,     0,     0,     0,   518,     0,   455,     0,     0,     0,
     457,   126,   440,     0,   494,     0,     0,     0,     0,     0,
     428,   520,   433,     0,   437,     0,     0,     0,   486,     0,
       0,   438,     0,     0,     0,     0,   432,   431,   450,     0,
       0,     0,     0,     0,     0,   368,   317,   322,   320,     0,
     330,     0,     0,     0,     0,     0,     0,     0,     0,   368,
     368,   368,     0,     0,     0,     0,   227,     0,   239,   241,
       0,     0,     0,   198,   200,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   291,     0,   276,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     324,   333,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   233,     0,     0,
       0,     0,   563,     0,   570,   559,   560,   561,     0,   575,
     574,     0,     0,   564,   565,   566,   572,   579,   578,     0,
     136,     0,   553,     0,   555,     0,     0,     0,   548,     0,
     235,     0,     0,     0,   310,     0,     0,     0,   364,     0,
     584,     0,     0,     0,     0,   101,    63,     0,     0,     0,
       0,     0,     0,     0,    95,     0,     0,     0,     0,     0,
       0,     0,     0,    48,     0,     0,     0,    61,     0,    39,
      40,    41,    42,    43,     0,   432,   431,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   537,   536,     0,     0,     0,     0,     0,   133,     0,
     129,   130,     0,     0,     0,     0,     0,   158,   158,     0,
       0,     0,     0,     0,     0,     0,   156,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   327,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     458,   459,   435,     0,     0,   493,   390,   487,   446,   444,
       0,   443,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   329,     0,   146,     0,   149,     0,   152,     0,   155,
       0,     0,     0,     0,     0,     0,     0,   234,     0,     0,
       0,     0,     0,     0,     0,   296,     0,     0,   295,     0,
     298,     0,   300,     0,   286,   292,     0,     0,     0,   225,
       0,     0,     0,     0,     0,     0,     0,     0,   335,     0,
     229,   228,   359,     0,     0,    35,    36,     0,     0,     0,
       0,   529,     0,     0,     0,   262,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   460,   461,   557,
       0,     0,   208,   311,     0,   312,   208,     0,     0,   543,
     544,   545,   546,     0,    86,     0,     0,     0,     0,    84,
      91,    93,     0,   532,     0,    99,     0,     0,     0,     0,
      81,     0,     0,     0,     0,     0,    34,   446,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    30,    31,     0,   539,     0,     0,    32,     0,     0,
     113,   118,     0,     0,   132,   135,   463,     0,    77,    78,
     160,     0,     0,     0,     0,     0,     0,   161,     0,     0,
     177,   178,     0,     0,     0,     0,   162,   190,   179,   183,
     184,   180,   181,   182,   169,     0,     0,   401,   410,   411,
     412,   514,     0,     0,     0,   453,   454,   456,   127,   426,
       0,     0,     0,     0,   452,   429,   434,     0,   191,   439,
       0,   449,   447,   515,   185,     0,     0,   156,     0,     0,
     328,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   247,     0,     0,     0,     0,   208,   208,     0,     0,
     297,   482,     0,     0,   299,   301,     0,     0,   280,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   186,
       0,     0,     0,     0,   165,   166,     0,     0,     0,     0,
     102,   106,     0,   571,     0,     0,   569,     0,   580,     0,
       0,   137,   138,   577,   554,   556,     0,     0,     0,   309,
     313,   309,     0,   365,    85,    63,     0,     0,     0,     0,
      83,     0,   530,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   480,     0,     0,   449,   244,   447,   245,
     210,   211,   212,   213,     0,     0,     0,     0,     0,     0,
     542,   540,     0,   114,   119,     0,     0,   522,   523,   131,
       0,     0,   159,   163,   164,   170,     0,     0,   189,     0,
     172,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   436,     0,   451,     0,   171,     0,   192,   318,   194,
     195,   196,   197,   168,     0,   187,   193,     0,     0,     0,
       0,     0,     0,   479,   478,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   224,   223,     0,     0,     0,
       0,     0,     0,     0,     0,   214,     0,     0,   332,    37,
       0,   527,     0,     0,   264,   263,     0,     0,     0,     0,
       0,     0,     0,   140,   141,   142,     0,   558,     0,   585,
       0,     0,     0,     0,     0,    96,     0,     0,    97,   533,
       0,     0,    88,     0,     0,     0,    44,     0,     0,     0,
       0,     0,    46,     0,    33,     0,     0,   126,   136,     0,
     134,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   516,   517,     0,     0,     0,     0,     0,   448,
       0,   173,     0,   325,   325,     0,   107,   108,   208,     0,
     201,   202,   287,     0,   293,     0,     0,   208,     0,     0,
       0,     0,     0,     0,     0,     0,   205,   204,     0,     0,
       0,     0,   103,   104,   562,   568,   567,     0,   139,     0,
       0,   314,     0,    92,    94,     0,   100,     0,    82,    89,
      90,    49,     0,     0,     0,     0,   481,     0,     0,   448,
     541,     0,     0,     0,   116,     0,   123,     0,   343,   345,
     344,   346,     0,   347,   176,     0,     0,     0,     0,     0,
       0,   290,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   477,     0,   303,     0,     0,   281,     0,   215,
       0,     0,     0,     0,     0,     0,     0,   526,   265,     0,
     143,     0,   208,   366,     0,   531,     0,    45,     0,     0,
       0,    62,    47,     0,   115,   120,   126,     0,     0,   157,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   326,
     336,     0,     0,   337,     0,   199,     0,   294,     0,   277,
       0,   208,     0,     0,     0,     0,     0,     0,   167,   105,
     261,   309,    98,     0,     0,     0,     0,     0,     0,   124,
     125,     0,     0,     0,     0,     0,     0,   188,     0,   340,
       0,   341,   342,   476,     0,     0,   283,   218,     0,     0,
       0,     0,     0,     0,     0,     0,    53,     0,    59,     0,
       0,   117,     0,     0,     0,     0,     0,     0,     0,     0,
     302,   282,   278,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   219,   220,   221,   222,     0,
     216,   316,    50,     0,    57,     0,   254,     0,   519,     0,
       0,     0,     0,     0,     0,   284,     0,     0,    51,     0,
       0,   260,     0,     0,     0,     0,     0,     0,   217,     0,
       0,     0,     0,   503,   504,   505,   506,     0,     0,    54,
      52,     0,    55,     0,   338,   339,     0,     0,    60,    58,
      56
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,   108,  1026,   109,   110,  1007,  1825,  1831,
    1289,  1501,  1976,  2117,  1290,  2082,  2141,  1291,  2119,  1292,
    1293,  1505,   404,   555,   556,  1090,   111,   733,   425,  1837,
    1986,  1838,   426,  1716,  1362,  1319,  1320,  1321,  1464,  1661,
    1662,   872,   875,   878,   881,  1554,  1544,   717,   252,   413,
     414,   114,   115,   116,   117,   118,   119,   120,   121,   253,
    1189,  2010,  2073,   909,  1185,  1186,   254,   984,   255,   125,
    1390,  1149,   870,   923,  1946,   126,   127,   128,   129,   256,
     257,  1111,  1127,  1247,   258,   738,   259,   860,   737,   428,
     587,   292,  1692,   327,   328,   261,   528,   335,  1277,  1494,
     423,   419,  1240,   966,   424,   131,   383
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1788
static const yytype_int16 yypact[] =
{
   10315,    36,    89, 10465, -1788, -1788,  -180,    86,    90,  -203,
    -112,    40,   220,   247,   270,   306,     2,   347,   357,     5,
     130,    26,   -86,   -86,    88,   151,   168,     4,   190,   230,
      33,   252,   258,   278,   321,   341,   350,   372,   386,   412,
     418,   519,   598,   662,   427,   543,   483,  6044,   501,   538,
     694,   -33,   584,   441,   639,   234,   599,   706,   -99,   580,
       1,     1,   594,   376,   448, -1788, -1788, -1788, -1788, -1788,
     605,   381,   747,   767,    13,    59,   775,   776,   507,   889,
     897,   908,  5336,   911,   697,   703,   705,    27,    16, -1788,
     708,   709, -1788, -1788,   943,   944,   711, -1788, 10662,   714,
   10692,    18,    20, -1788, -1788, -1788, 10145,   715, -1788, -1788,
   -1788, -1788, -1788, -1788, -1788, -1788, -1788, -1788, -1788, -1788,
   -1788, -1788, -1788,   107, -1788, -1788, -1788, -1788,    64, -1788,
     948,   710,  5098,   312,   716,   951, 10145, 10632, 10632, -1788,
   10145, -1788, -1788, -1788, -1788, 10632, -1788, -1788, -1788, -1788,
     713,   722,   953, -1788, -1788, 10722,    26, 10145,  8962, 10145,
   10145,   725, 10145,  8962, 10145, 10145,   726, 10145,  8962, 10145,
   10145, 10145, 10145, 10145, 10145, 10632, 10145, 10145, 10145,  6280,
     727, -1788,  8962,  5336,  5336,  5336, 10632, -1788, -1788, -1788,
   -1788, -1788,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   307,   -86,   -86,   -86,   -86,
     -86,   728,   -86,   -86,   729, -1788, -1788, -1788,   -86,   -86,
       8,    22,    31,    34,  6280,   850,   514,   731,   -86,   -86,
     732,   733,   737, -1788, -1788, -1788, 10145,  6516, 10145, 10145,
    6752,    26, -1788, -1788,   734, -1788,  4183, -1788, -1788, -1788,
   -1788, -1788,   106, 10145,  8962,   739,   740,  6988,  5336,  5336,
    5336,   741,   742,   743,   744,  7224,  7460,  7696,   746,  9279,
     981,  6280,   749,    27,   750,   751,     1,     1,     1, 10145,
   10145,   -56, -1788,   336,     1,  9515,   380,   117,   748,   756,
     757,   759,   761,   762,   766, 10145,  5336,  5336,  5336,   768,
      12,   999,   769, -1788,  1001,  1002, -1788,   772,   777,   778,
    5336,  5336,   781,   785,   786, -1788, 10145, -1788,  1011,  1012,
   10145, 10145, 10145,   392, 10145,   788, -1788,   851, 10145, 10145,
   10145, -1788, -1788, 10145, -1788,   -86,   -86,   -86,   793,   794,
     795,   -86,   -86,   -86,   -86,   -86,   -86,   -86, -1788,   -86,
   -1788, -1788, -1788,   -86,   -86,   796,   797,   -86,   798, -1788,
     800,  1031,  1035,   803, -1788, -1788,  1036, -1788,  1040, -1788,
     -86, 10145, 13163,   116, 10632, 10145, -1788, -1788,  6280,  6280,
   -1788,   805, 10722,   626,  1043, -1788, -1788, -1788, -1788, -1788,
   -1788, 10145, 10145,    51,  6280,  1046,   461,  1316,   813,  1051,
      49,   825, -1788,   827,  8235, 10145, -1788,  1962,  -170, -1788,
      69,  -123,  9471, -1788,   -88,  -138,   -38,   984, -1788,    26,
     821,   828, 13625,  8962,  4363, -1788,   176, 13650, 13675, 10145,
   13700,   211, 13725, 13750, 10145, 13775,   217, 13800, 13825, 13850,
   13875, 13900, 13925,   835, 13950, 13975, 14000,  1069, 10145,   224,
    1071,  1072,  1073,   841, 10145, 10145, 10145, 10145, 10145, 10145,
   10145, 10145, 10145, 10145, 10145, 10145, 10145, 10145, 10145, 10145,
    8962, 10145, 10145, 10145, 10145, 10145, 10145,  8962,  8962,   839,
   10145, 10145, 10632, 10145, 10632,  6280, 10632, 10632, 10632, 10145,
      47, -1788,  1018, 10145, -1788,  1019, -1788,  1020, -1788,  1045,
    6280,  5336,  5336,  5336,  5336, 10632, 10632,  8962,    26, 10722,
      26,   870,  8962,   870, -1788,   870, 14025, -1788,   255,   867,
      52, 10145, 10145, 10145, 10145, 10145, 10145, 10145, 10145, 10145,
   10145, 10145, 10145, 10145, 10145,  7932, 10145, 10145, 10145, 10145,
   10145,    26, 10145, 10145,  1109, -1788,   536, 14050,   294, 10145,
   10145, 10145, -1788,  1116,  1117,  1117,  9193,  9193,  9193,  9193,
   10145,  1119, 10145,  1125, 10145,  1126,  8962,  8962, 13191,   894,
    1128, -1788,   899, -1788, -1788,  -179, -1788, -1788,  9546,  9786,
       1,     1,   312,   312,  -151,  9515,  9515, 10145,  1648,  -140,
   -1788, 10145, 10145, 10145, 10145, 10145, 10145, 10145, 10145, 10145,
   14075,  1136,  1138,  1139, 10145,  1141, 10145, -1788, 10145,  4405,
   -1788, -1788,  8962,  8962,  8962,  1142,  1143, 10145, 10145, 10145,
   14100, -1788, -1788, 14125, 14150, 14175,   972,  9861, -1788,   909,
    4540, 14200, 14225, 13274, 10632, 10632, 10632, 10632, 10632, 10632,
   10632, 10632, 10632, 10145, 10632, 10632, 10632, 10632,    11, 10722,
   10632, 10632, 10632,    26,    26, -1788, -1788,  8962, -1788,  5403,
   -1788,  5639, 10145,   870, 10145, -1788, 10145, 10145,   913, 14250,
    7999,   916,   369, 10145,  1144,   910,   915,   917,   918, 10145,
   14275, 13301,   155,   914,  1154,  1156, -1788, -1788, -1788,  8962,
      21, -1788, -1788, -1788,    26, 10145, 10145,  1109,   924, -1788,
     397,    39,    41,   424,   927,    30,   669, -1788,  3481, -1788,
     140,  8962,    26, 10145, 10145,  1162,  1164,  8962, 10145,  1165,
   10632,  1166, -1788,    26,  1167, 10632, 10145,   929,   934, -1788,
   10145, 10722,  1168,  8962,  1003,  8962,  1170,  1173, 14300,  1175,
    1007,  1177,  1178, 14325,  1179,  1013,  1180,  1181,  1183,  1184,
    1185,  1187, -1788,  1188,  1193,  1194, 10145, 14350,   960, -1788,
   -1788, -1788,  1198, 13247, 13247, 13247, 13247, 13247, 13247, 13247,
   13247, 13247, 13247, 13247, 10017, 13247, 13247, 13247, 13247,   871,
     -26, 13247, 13247, 13247, 10050, 10717, 10750,  4363,   966,   965,
      99,  8962, 10783, 10816,   -26, 10849,   -26,   961,   967,   968,
     -62, 15250, -1788,   -26,   971, 12235,   974,   975,   976, -1788,
   -1788, -1788, -1788,   977,  -111,   -26,  -187,   980,   520,   443,
    1200, -1788,  1162,   -26,  4804,  4980,  1225,  1769,  1118,  1118,
     445,   445,   445,   445,   445,   445,   477,   477,  8962,   296,
   -1788,   296,   296,   870,   870,   870,   978, 14375, 13328,   -72,
     983,  8962, -1788,  1216,   985, 14400, 14425, 14450, 10145,  6280,
    1222,  1224,   989, 15250,   986,   993, 15250,   987,   996, 15250,
     990,   997, 15250,   992, 14475, -1788, 14500, -1788, 14525, -1788,
     444,   469,  8962,   998, -1788,  5875, -1788,  6111,  6347,     1,
   10145, 10145, -1788, -1788,  1004,  1005,  9515,  8439,  1113,   401,
       1,  6583, 14550, 12264, 14575, 14600, 14625, 14650, 14675, 14700,
   14725,  1237, 10145,  1239, -1788, 10145, 14750, -1788, 13355, 13382,
   -1788,   479,   488,   494, -1788, -1788, 13409, 13436, 10882, -1788,
    1242,  1243,  1244,  1008, 10145,  6819, 10145, 10145, -1788, -1788,
      19,   -47,   -27,   -47,  1014,  1016,  1009,   -26,   -26,  1010,
   10915,   -26,   -26,   -26,   -26, 10145,   -26,  1249, -1788,  1017,
    1024,   194,   591,  1025,   526, -1788, -1788, 13247,   296,  7055,
    1000,  1258,  1120,  9599,  1026,  1028,  1261,  6280, 12293, -1788,
   10145, 10145, 10145, 10145,  2112,   162,    85, 10722, 10145,  1270,
    1275,    28, -1788,   527,  1235,  1236,  6280,    25,  1039, 14775,
   13463,   534, 10145,  8962,  8962,  8962,  8962, 10145,  1047,  1048,
    1050,  1052, -1788, -1788, -1788, -1788, 10632,   -31,  1053, 14800,
   13490, -1788,  1054, -1788,   145, 10948, -1788, -1788, -1788,    98,
   -1788, -1788, 15250, -1788,  1280, 13247,   -26,     1,   614,  4363,
   -1788,  6280,  6280,  1282,  6280,   684,  6280,  6280,  1284,  6280,
    1195,  6280,  6280,  6280,  6280,  6280,  6280,  6280,  6280,  6280,
    2398,  1288,  8962, -1788, -1788, -1788, -1788, -1788, -1788, -1788,
   -1788, -1788, -1788, -1788, -1788, 10145, -1788, -1788, -1788, -1788,
   -1788, -1788, -1788, -1788, -1788, 10145, 10145, 10145, -1788, -1788,
   -1788,   549, 10145, 10145, -1788, 10145, -1788,  6280, 10632, 10632,
   -1788,  1049, -1788, 10145, -1788, 10145, 10145, 10145, 10145, 10145,
   -1788, -1788, -1788,  1162, -1788,  1162, 10145,  1059, -1788,  6280,
    1061, -1788, 10145, 10145,   554,  1162,   -72,  -103, -1788, 10145,
     556,  6280,  8962,  1293,  1294,  1295,  2514, -1788, -1788,  1297,
   -1788,   166, 10145,   166, 10145,   166, 10145,   166, 10145,  1301,
    1303,  1304,  1305,  1307,   559,  1300, -1788,  7291, -1788, -1788,
    -133, 10981, 11014, -1788, -1788, 12322,   -82,  1207,  1313,  9830,
    1077,  1314,  1083,    32,    35,   328, -1788,  -109, -1788,   401,
    1317,  1319,  1320,  1321,  1322,  1323,  1324,  1326,  1327,  6280,
   15250, -1788,  2550,  1093,  1330,  1347,  1352,  1263,  1363,  1365,
    1366, 10145,  6280,  6280,  6280,  1369, 11047, -1788,  5009,  1251,
    1370,  1371, -1788,  8962, -1788, -1788, -1788, -1788, 10632, -1788,
   -1788, 10145, 10632, -1788, -1788, -1788, -1788, 15250, -1788,  1131,
    1130, 10632, -1788, 10632, -1788,  1162, 10632,  1140, -1788,  1133,
   -1788,  1146,  1148,  9914, -1788,  2592,  1150,  6280, -1788,  1135,
   -1788, 12351, 12380, 12409, 12438, -1788, -1788, 10145,  1375,    56,
   10145,  1376,  1380,  2694, -1788,  1387,    27,  1390,  1160,   -26,
     -86,   -86,  1395, -1788,  1171,  1172,  1163, -1788,  1396, -1788,
   -1788, -1788, -1788, -1788,  1162,   322,   780, 10145, 13517,   562,
     564,   565,   570, 14825, 10145, 10145, 10145, 10145,  1398,   150,
    1162, -1788,  1169, 10145,  1400, 10145,  4237,   -26,  4604,  1174,
    1161, -1788,  1405,  1406,    74,  1176,  1182,  1298,  1298,  6280,
    1410,  1186,  1189,  1411,  1415,  6280,  1246,  1190,  1417,  1421,
    1424,  1428,  1429,  1431,  1432,  1433,  1434, -1788,  1454,   571,
   13247, 13247, 13247, 13247,   -26, 11080, 11113, 11146,  1221,   -26,
     -26,  1280,   -26, 11179, 11212, 11245, 11278, 14850, 13247,  1226,
    1214, 15250, -1788,  1457,  1245, 15250, 15250, -1788,  1248, -1788,
    1483, -1788, 14875,   -26,  1485,   572,  6280,  6280,  6280,  1488,
    1491, -1788,  6280, 15250,  6280, 15250,  6280, 15250,  6280, 15250,
    6280,  6280,  6280,  1252,  1256,  1493,   389, -1788, 10145, 10145,
   10145,  1260,  1262,  1264,  1265, -1788,  2927,  6280, -1788, 10145,
   -1788,  1497, -1788,  1501, -1788, -1788,  9515,   472,  5572, -1788,
    1266,  1267,  1268,  1269,  1273,  1274,  8168,  1511, -1788,  8962,
   -1788, -1788, -1788,  1276, 10145, -1788, -1788, 13544,  1513,  1515,
    1350, -1788, 10145, 10145, 10145, -1788,  1517,   497,   214,  1277,
    5032,  1278, 10145,    29,   -26,  1289,   -26,  1302, -1788, -1788,
   10722, 10145, -1788, -1788,  3000, -1788, -1788,  1308,  1521, -1788,
   -1788, -1788, -1788,  3039, -1788,   204,  1285,  1543,  3085, -1788,
   -1788, -1788,    27, -1788,   577, -1788, 10145,   166,  1068, 10632,
   -1788,  1318, 10145, 10145,  6280,  1309, -1788,   548,  1548,  1552,
   14900,  1553,  1554,  1555,  1556,  1557,  1200, 14925, 14950, 14975,
   15000, -1788, -1788, 10632,  1328,  1550, 15025, -1788, 11311,  4862,
   15250, -1788,  1558,  6752, -1788, -1788, -1788,  1280, -1788, -1788,
   -1788, 10145, 10145,     1,  1561,  1563,  1564, -1788, 10145, 10145,
   -1788, -1788,  1565,  1469,  1566, 10145, -1788, -1788, -1788, -1788,
   -1788, -1788, -1788, -1788, -1788,  1568,  1332, -1788, -1788, -1788,
   -1788, -1788, 10145, 10145, 10145, -1788, -1788, -1788,  1161, -1788,
   10145, 10145, 10145, 10145, -1788, -1788, -1788,  1336, -1788, -1788,
   10145,   -72, -1788, -1788, -1788,  1334,  1571,  1246,  1572, 10145,
   -1788,  1573,  1574,  1576,  1577,  1578,   858,  1579,  8962,  8962,
   10145, -1788,  9193, 12467, 15050,  8662,   312,   312, 10145, 10145,
   -1788,   528,  1339, 15075, -1788, -1788, 12496,  -107, -1788,  1581,
    1582,  6280,     1,     1,     1,     1,     1,  5808,  1584, -1788,
     578, 10145,  3120,  1585, -1788, -1788,  6280,  8898,   702, 15100,
   -1788, -1788,  8404, -1788, 10632, 10145, -1788, 10632, 15250,  8490,
   10722,  1346, -1788, -1788, -1788, -1788,  1355,  1348, 12525,  7999,
   -1788,  7999,  6280, -1788, -1788, 10722, 10145,  1590,  1593,    28,
   -1788,  1594, -1788,    27, 13571,  6280,  1595,   -47,   -47, 10145,
   11344, 11377,   603, -1788, 10145, 10145,   330, -1788,  1357, -1788,
   -1788, -1788, -1788, -1788,  1295,  1301,  1303,  1304,  1596, 10145,
   -1788, -1788, 10145, -1788, -1788,  1361,   608,  3153,  1600, -1788,
   12554, 12583,   342, -1788, -1788, -1788, 12612, 12641, -1788,  1367,
   -1788, 12670,  1605,  6280, 13247, 13247, 11410, 11443, 11476, 11509,
   11542, -1788, 15125, -1788, 10145, -1788,  1606, -1788, 15250, -1788,
   -1788, -1788, -1788, -1788,  1372, -1788, -1788,   610,   613, 13219,
    3245,  1607,  1377, -1788, -1788, 10145,  1368,  1374, 12699, 13598,
    1614,  6280,  1617,  1379, 10145, -1788, -1788,   616,  -104,   -69,
     -52,   -25,   156,  8726,   161, -1788,  1620, 12728, -1788, -1788,
    1456, -1788, 10145, 10145, -1788, -1788,  8962,  3272,  1624,  1393,
   13247,   -26, 10632, 15250, -1788, -1788,    29, -1788, 10722, -1788,
    1394,  1397,  1399,  1627,  3513, -1788,  1629,  1632, -1788, -1788,
    1401,  1633, -1788,  1635,  1638,   174, 15250, 10145, 10145,  1404,
    6280,   627, 15250, 15150, -1788, 15175, 11575,  1049,  1130,  6280,
   -1788, 10145, 10722,    26,  1641,  1642,  1643,  1644, 10145,  1646,
    1647,   628, -1788, -1788, 10145, 10145, 10145, 10145, 10145, -1788,
   12757, -1788,  6280,   547,   596,  8962, -1788, -1788,   312,  9224,
   -1788, -1788, -1788,  1649, -1788,  1413,  6280, -1788, 12786,  1651,
    8962,     1,     1,     1,     1,     1, -1788, -1788, 10145, 12815,
   12844,   629, -1788, -1788, -1788, -1788, -1788,   635, -1788,  1419,
    1418, -1788,  1653, -1788, -1788,    27, -1788,  1489, -1788, -1788,
   -1788, -1788, 10145, 11608, 11641,  6280, -1788,  1658, 10145,  1423,
   -1788, 10145,  1425,  1435, -1788,  3938, -1788,  1441, -1788, -1788,
   -1788, -1788, 12873, -1788, -1788,  1439, 11674, 11707, 11740, 11773,
   11806, -1788,   637,  1442,     1,  6280,  1660,  1443,     1,  1661,
     638,  1440, -1788, 10145, -1788,  1683,  1562,  7527,  1449, -1788,
     640,   167,   173,   178,   210,   216,  3565, -1788, -1788,  1687,
   -1788,  1689, -1788, -1788,  1691, -1788,  1461, 15250, 10145, 10145,
     645, -1788, 15250, 11839, -1788, -1788,  1049, 10722,  1465, -1788,
   10145, 10145, 10145, 10145, 10145, 10145,  1699,     1,    96, -1788,
   -1788,     1,   131, -1788,  1700, -1788, 12902, -1788, 10145, -1788,
     401, -1788,  1701,  8962,  8962,  8962,  8962,  8726, -1788, -1788,
   -1788,  7999, -1788, 10145, 15200, 11872,    53, 10145,  1466, -1788,
   -1788, 11905, 11938, 11971, 12004, 12037, 12070, -1788,   222, -1788,
     239, -1788, -1788, -1788,  3899,   539,  7763, -1788,   647,   648,
     653,   656,   274,   659,  1467,   661, -1788, 10145, -1788,  6280,
   12931, -1788, 10145, 10145, 10145, 10145, 10145, 10145,     1,     1,
   -1788, -1788, -1788,   401,  1702,  1705,  1706,  1707,  8962,  1708,
    1709,  1710,  1476, 15225,   664,  1713, 12960, 13247, 12103, 12136,
   12169, 12202,   279,   304,   634, -1788, -1788, -1788, -1788,   666,
   -1788, -1788, -1788, 10632, -1788,  1478, -1788,  1715, -1788, 10145,
   10145, 10145, 10145, 10145, 10145, -1788,  1716,   667, -1788,  1481,
    6280, -1788, 12989, 13018, 13047, 13076, 13105, 13134, -1788,  1718,
   10632, 10632,   693, -1788, -1788, -1788, -1788,  1719,  1720, -1788,
   -1788,   695, -1788,  1721, -1788, -1788,  1723, 10632, -1788, -1788,
   -1788
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1788, -1788, -1788, -1788,   425, -1788, -1788, -1788, -1788,  -290,
   -1788, -1788, -1788, -1788, -1788, -1788, -1788, -1788, -1788, -1788,
   -1788, -1788,  -681,   -98,  4006,  3106, -1788,  1311, -1788, -1788,
   -1788, -1788, -1788, -1788, -1787, -1788,   374,   215,   -85, -1788,
     -48, -1788, -1788, -1788, -1788,   157,   431,  1758,     6,  -588,
    -273, -1788, -1788, -1788, -1788, -1788, -1788, -1788, -1788,  1759,
   -1788, -1788, -1788, -1788, -1187, -1178,  1760, -1657,  1762, -1788,
   -1788, -1788,  1204, -1788,   -92, -1788, -1788, -1788, -1788,  1983,
   -1788, -1788,   405,   309,  1778, -1788,     0,  -701, -1788, -1788,
      38, -1788, -1621,   300,  -102,  2317,  1155,  -280,   103, -1788,
     -65,   -44, -1788, -1788,  -497, -1788,    -3
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -543
static const yytype_int16 yytable[] =
{
     132,   810,  1427,   582,   904,   905,  1011,  1425,   161,   113,
    1777,   998,  1810,   501,  1811,   150,   615,   310,   152,  1006,
     337,   151,   598,   376,  1032,   378,  1220,   504,  1004,  1283,
     150,   333,   150,  1659,   405,   137,   506,   166,  1420,   508,
     619,  1422,     4,   161,   262,   166,   139,   590,   591,   282,
    1922,   150,  1122,   150,   371,   692,   375,  1123,   704,  2058,
    1485,   429,   133,   315,   266,   316,   134,   408,   899,   720,
     387,   314,   418,   421,   283,   590,   591,   721,   722,   262,
    1540,   460,   461,   462,   336,   267,   590,   591,   409,     5,
     284,   285,  1266,   590,   591,   372,   906,   311,   291,   293,
     135,   296,  2039,   731,   669,  1316,   671,   910,   551,   732,
     453,   430,  1851,   680,  1408,   551,   726,   590,   591,   590,
     591,   463,   590,   591,   727,   551,   138,   266,   697,   410,
     698,  1130,   399,   400,   420,   420,  1119,  2041,  1426,   412,
    1774,  1380,   420,  1880,   590,   591,  1023,   951,  1018,   953,
     317,   729,   153,   431,   154,   262,  1522,   590,   591,   730,
     262,  1412,   997,   399,   400,   262,   563,   564,   565,  1266,
     590,   591,   420,  1266,   590,   591,   262,  1110,  1881,   262,
     262,   262,   262,   420,   502,   730,   592,   136,  1284,  1285,
    1286,  1287,   697,  1421,   698,  1882,  1423,   312,   505,  2028,
     730,   590,   591,   734,   611,   612,   613,   507,  1309,   732,
     509,  1675,   697,   697,   698,   698,   745,  1660,   625,   626,
    1223,   107,  1883,   107,   693,   694,   141,   287,   288,  1486,
    1487,   262,   395,   396,   397,  1005,   107,   107,   107,   289,
     145,  1942,   162,   290,   262,   148,   163,   262,   530,  1425,
     503,   529,   616,   142,   338,   313,   965,   107,   134,   107,
     377,   262,   379,  1221,   262,   262,   262,   262,  1288,   334,
    1276,   167,   262,   262,   262,   168,   143,   162,   262,   167,
     336,  1014,   140,  1015,   399,   400,   697,   705,   698,   706,
     153,  -535,   154,   707,  1980,  2059,   395,   396,   397,   398,
     590,   591,   388,   262,   262,   262,   389,   723,   895,   724,
     897,   898,   144,   725,  1267,  1270,   411,   262,   262,   678,
     399,   400,   590,   591,   585,   586,   157,   911,   278,  1269,
     158,   279,   594,   599,   399,   400,   153,   552,   154,   553,
    1100,   399,   400,   554,   552,   385,   553,   260,   684,   386,
     554,   399,   400,   146,   676,   601,   677,   590,   591,   602,
     554,  1024,  1025,   147,  2054,   945,   395,   396,   397,   398,
     149,  1024,  1025,   395,   396,   397,   398,   395,   396,   397,
     398,   420,   590,   591,  1314,   262,   262,   590,   591,   159,
     399,   400,   745,   590,   591,  1611,  1612,   399,   400,   590,
     591,   262,   979,  1884,   590,   591,   160,   708,  1885,   819,
     820,   821,   822,  1911,  2013,   395,   396,   397,   398,   744,
    2014,  1912,  1369,   745,  1370,  2015,   739,   804,   164,   806,
     262,   808,   809,   697,  1378,   698,   590,   591,  2084,   399,
     400,  1243,   590,   591,    59,    60,    61,    62,   590,   591,
     823,   824,   297,   697,   750,   698,  1178,  2016,   745,    73,
     755,   745,    76,  2017,   745,   590,   591,   768,   165,  2068,
    1392,   745,  1394,  1179,  1396,   827,  1398,   262,   306,   457,
     307,  1180,  1181,  1182,   262,   800,  2069,  1183,  1184,   420,
     169,   420,   262,   420,   420,   420,   170,   813,   831,  2132,
     590,   591,   745,  1651,  1652,   590,   591,   262,   262,   262,
     262,   262,   420,   420,   262,   152,   171,   152,   826,   262,
     828,  2078,   874,   877,   880,   883,  2113,   548,   549,  1178,
     590,   591,   271,   550,   260,   272,   531,   864,   273,   298,
     274,   745,   262,   299,  1467,   487,  1179,   488,   856,   300,
     301,  2114,   302,   303,  1180,  1181,  1182,   399,   400,   172,
    1183,  1184,   590,   591,  -537,   399,   400,   562,   590,   591,
     304,  1424,  -542,   262,   262,   571,   573,   575,   593,   173,
     952,   580,   954,   955,   956,   957,   958,   959,   174,   961,
     962,   963,   964,  1507,   999,   969,   970,   971,   412,   412,
    1178,   320,   287,   288,   321,   511,   590,   591,   512,  1524,
     175,   513,   986,   514,   289,   968,   987,  1179,   295,   262,
     262,   262,   600,  1167,   176,  1180,  1181,  1182,   902,   903,
     179,  1183,  1184,   586,   183,   157,   636,   184,   134,  1013,
     185,   420,   420,   420,   420,   420,   420,   420,   420,   420,
     177,   420,   420,   420,   420,   967,   178,   420,   420,   420,
     152,   973,   170,   972,   262,  1037,  1016,  1178,   181,   182,
    1041,   543,   544,   674,   546,   547,   548,   549,   268,  1943,
    1944,   269,   550,   270,  1179,  1945,  1128,  1162,   681,   682,
     745,   745,  1180,  1181,  1182,   180,   262,  1046,  1183,  1184,
     697,  1008,   698,   699,   695,   674,   546,   547,   548,   549,
    1793,  1325,  1163,  1326,   550,  1628,   745,   685,   262,  1028,
     686,   186,  1206,   687,   262,   688,   745,   420,  1947,  1948,
    1039,  1207,   420,   275,  1945,   745,   276,  1208,   277,   263,
     262,   745,   262,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,  1138,  1178,  1019,  1125,   550,  1020,  1126,  1021,  1249,
    1279,  1770,  1297,   745,   745,   697,  -538,   698,   861,  1179,
     264,  1331,  2071,  1332,   150,   344,  1695,  1180,  1181,  1182,
    -539,   265,  1354,  1183,  1184,   807,   745,  1377,   262,  1383,
     281,   745,  1405,   745,  1676,  1512,   745,  1513,  1514,   745,
     562,   745,   745,  1515,  1566,  1595,  1685,   745,   745,   745,
    1682,  1786,   286,  2045,  1683,   745,   345,   346,   347,   348,
     349,   350,   351,   352,   353,  1245,   294,   280,  1246,   354,
     355,   356,   357,   305,   308,   262,  1829,   358,   359,   360,
    1830,  1840,   361,  1863,   362,  1841,  1864,   745,   262,  1879,
     745,   309,  1754,  1830,  1755,   363,   262,  1425,   364,   318,
    1917,  1935,  1969,   319,  1918,  1830,   745,  2115,  1970,   531,
    1996,  2004,   730,  2012,  1830,   745,  2094,   745,  2026,   262,
    2074,  2075,  1830,   322,   745,   745,  2076,  1268,  1271,  2077,
     745,   323,  2079,   745,  2081,   393,   745,  2105,  1918,  2116,
    2129,  1830,   324,   745,  2130,   329,  1425,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     674,   546,   547,   548,   549,   330,  2143,  1170,  2146,   550,
    1830,   331,  2147,   332,  1176,  1794,   339,   340,  1187,   341,
     342,   343,   373,  1272,   390,   384,   391,   416,   415,   134,
     427,  1308,   429,   439,   444,   458,   495,   498,   510,   515,
     518,   519,   365,   366,   367,   520,   386,   559,   560,   566,
     567,   568,   569,   368,   262,   579,   603,   369,   576,   370,
     107,   581,   583,   584,   604,   605,  1493,   606,  1278,   607,
     608,  1687,  1688,   262,   609,   617,   614,   620,   621,   618,
     262,   262,   262,   262,   622,   399,   400,   631,   632,   623,
     624,   627,  -536,   420,  1508,   628,   629,   639,  1766,  1767,
     638,   647,   648,   649,   660,   661,   663,   665,  1379,  1381,
     664,   666,   668,  1359,  1360,   667,   670,   683,   262,   262,
     689,   262,   696,   262,   262,   702,   262,   703,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   133,   740,   262,
     709,   736,   150,   344,   762,   741,   766,   769,   770,   771,
     772,   801,   814,   816,   817,  1324,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,   743,
     546,   547,   548,   549,   262,   420,   420,   550,   550,   818,
     697,   832,   698,   859,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   868,   869,   885,   262,   354,   355,   356,
     357,   887,   889,   893,   894,   358,   359,   360,   262,   262,
     361,   896,   362,   922,   924,   943,   925,   927,   934,   935,
     989,   946,   990,   363,   980,   985,   364,   991,  1000,   992,
     993,  1001,  1002,  1459,  1012,  1017,  1031,  1461,  1043,  1147,
    1033,  1036,  1038,  1040,  1044,  1047,  1465,  1051,  1466,  1048,
    1052,  1468,  1054,  1055,  1056,  1057,  1059,  1061,  1062,  1060,
    1063,  1064,  1065,   393,  1066,  1067,   262,  1379,  1381,  1669,
    1068,  1069,  1072,  1671,  1073,  1098,  1099,  1129,  1107,   262,
     262,   262,  1681,  1113,  1108,  1109,  1115,  1116,  1117,  1124,
     262,  1139,  1135,  1141,  1118,   420,  1148,  1142,  1151,   420,
    1150,  1509,  1153,  1152,  1154,  1155,  1157,  1156,   420,  1158,
     420,  1177,  1165,   420,  1199,  1201,  1251,  1173,  1174,  1212,
    1213,  1214,  1215,  1226,   262,  1227,  1228,  1231,  1239,  1454,
     365,   366,   367,  1242,  1241,  1252,  1248,  1258,  1253,  1256,
    1257,   368,  1531,   336,  1535,   369,  1274,   370,   107,  1275,
    1951,  1280,  1281,  1294,  1318,  1304,  1305,  1259,  1306,  1329,
    1307,  1335,  1313,   420,  1337,  1348,  1361,  1310,  1372,  1374,
    1386,  1387,  1388,  1391,  1406,  1897,  1282,   697,  1400,   698,
    1401,  1402,  1403,   436,  1404,   262,  1413,  1414,   441,  1417,
    1418,  1419,   701,   446,  1428,  1429,   262,  1430,  1431,  1432,
    1433,  1434,   262,  1435,  1436,  1439,  1440,   459,   537,   538,
     539,   540,   541,   542,   543,   544,   674,   546,   547,   548,
     549,  1327,  1328,  1441,  1330,   550,  1333,  1334,  1442,  1336,
    1443,  1338,  1339,  1340,  1341,  1342,  1343,  1344,  1345,  1346,
    1444,  1445,  1446,  1451,  1456,  1457,  1462,  1463,  1478,  1469,
    1470,  1484,  1489,   262,   262,   262,  1490,  1677,  1471,   262,
    1472,   262,  1476,   262,  1492,   262,  1495,   262,   262,   262,
    1496,  1500,  1506,  1819,  1521,  1504,  1527,  1358,  1537,  1502,
    1503,  1538,  1539,  1525,   262,  1536,  1547,  1550,  1541,   558,
    1543,  1551,  1553,  1556,  1542,   262,  1667,  1557,  1548,  1373,
    1558,  1549,  1555,   262,  1559,  1560,   262,  1561,  1562,  1563,
    1564,  1384,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,  1708,  1565,
    1575,  1126,   550,  1588,  1627,  1586,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,   674,
     546,   547,   548,   549,  1589,  1714,  1590,  1591,   550,   336,
    1455,  1594,  1599,  1743,  1608,   420,   420,  1600,  1609,  1437,
    1610,   262,  1616,  1624,  1617,  1619,  1618,  1625,  1631,  1632,
    1633,  1634,  1448,  1449,  1450,  1635,  1636,  1639,  1641,  1644,
     420,  1645,  1646,  1650,  1654,  1657,   262,  1673,  1664,  1678,
     262,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   674,   546,   547,   548,   549,  1246,
    1679,  1694,  1696,   550,  1710,  1672,  1689,  1477,  1697,  1699,
    1700,  1701,  1702,  1703,  1729,  1715,  1709,  1723,  1761,  1724,
    1725,  1728,  1730,  1732,  1733,  1741,  1744,  1745,  1747,  1749,
    1750,  1722,  1751,  1752,  1753,  1756,  1771,  1775,  1776,  1799,
    1785,  1789,  1801,  1806,  1807,  1808,  1815,  1816,  1743,  -540,
    1818,  1822,  1834,  1839,  1957,   262,   262,  1843,  1798,  1848,
    1850,  1870,  1861,  1867,  1862,  1804,  1805,  1871,  1534,  1868,
    1874,  1877,   412,   412,  1876,  1974,  1886,  1888,   262,  1546,
    1893,  1813,  1894,  1903,   262,  1552,  1905,  1900,  1906,  1908,
    1901,  1909,  1902,   262,  1910,  1907,  1915,  1928,  1929,  1930,
    1931,   420,  1933,  1934,   420,  1954,  1955,  1959,  1971,  1973,
    1972,     7,     8,  1975,  1981,  -541,  2000,  2003,  1984,   262,
    1778,  1779,  1780,  1781,  1782,  1784,  1278,   829,  1985,  1988,
     336,  1990,   262,  2005,  1997,  2001,  1596,  1597,  1598,  2007,
    2008,  2011,  1601,  2019,  1602,  2020,  1603,  2022,  1604,  2021,
    1605,  1606,  1607,  2023,  2030,  2037,  2042,  2047,  2095,  2061,
    2080,  2096,  2097,  2098,  2100,  2101,  2102,  1622,  2103,  2106,
    2120,  2121,  2128,  2131,  2139,  2144,  2145,  2148,  1630,  2149,
     262,   890,   891,  2055,  1523,  1578,  1638,   735,  2046,   710,
      25,    26,   711,    28,    29,   712,    31,   713,    33,    34,
      35,    36,  1719,  1923,  1746,    38,    39,    40,  1898,  1545,
      42,   112,   122,   123,  1899,   124,   714,    48,   262,   871,
      50,   715,  1949,    53,   716,  1587,  1666,   931,   932,   933,
     262,   130,  1817,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    70,   262,     0,     0,     0,     0,  1926,   420,
       0,     0,     0,     0,  1693,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,    85,    86,     0,
       0,     0,   974,     0,     0,     0,     0,   262,     0,  1713,
       0,     0,     0,     0,     0,     0,   262,     0,     0,     0,
    1927,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1003,     0,     0,     0,     0,   262,
       0,     0,   262,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   262,   412,     0,  1027,   262,     0,     0,
       0,     0,  1034,     0,     0,     0,     0,     0,     0,     0,
       0,   908,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   336,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   262,     0,     0,     0,     0,     0,     0,  1961,
    1962,  1963,  1964,  1965,     0,     0,     0,     0,     0,     0,
       0,  1693,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   262,  2029,     0,     0,  1790,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1101,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   719,     0,
       0,     0,  1812,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1998,     0,     0,  1821,  2002,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   674,   546,   547,
     548,   549,     0,  1134,     0,     0,   550,     0,     0,     0,
     262,   262,   262,   262,   262,     0,  1140,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1693,     0,  2038,     0,     0,  2118,  2040,
       0,     0,     0,     0,     0,     0,     0,  1164,     0,     0,
       0,     0,     0,     0,     0,  2052,   262,     0,     0,     0,
       0,     0,     0,     0,     0,  2140,  2142,     0,     0,     0,
       0,  1875,     0,     0,     0,   262,     0,     0,     0,     0,
       0,     0,  2150,     0,     0,     0,     0,     0,     0,   382,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     420,     0,     0,     0,     0,     0,  2092,  2093,     0,     0,
       0,     0,     0,     0,     0,   407,     0,   262,  1265,   417,
       0,     0,     0,   422,     0,     0,     0,   420,   420,     0,
    1916,     0,     0,     0,     0,     0,     0,     0,     0,  1924,
     432,   434,   437,   438,   420,   440,   434,   442,   443,     0,
     445,   434,   447,   448,   449,   450,   451,   452,     0,   454,
     455,   456,  1693,     0,     0,   434,     0,     0,  1299,  1300,
    1301,  1302,     0,     0,     0,     0,  1956,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     674,   546,   547,   548,   549,     0,     0,     0,     0,   550,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1693,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1349,     0,   521,
     523,   525,   526,   434,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1999,   557,   434,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   578,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   588,   589,     0,     0,     0,     0,   589,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   610,     0,
       0,     0,     0,     0,     0,     0,     0,  1385,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   630,
       0,     0,     0,   633,   634,   635,     0,   637,     0,     0,
       0,   640,   641,   642,     0,     0,   643,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     674,   546,   547,   548,   549,     0,     0,     0,     0,   550,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1693,
       0,     0,     0,     0,   673,     0,     0,     0,   679,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1458,     0,
       0,     0,     0,     0,   690,   691,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   718,     0,
       0,     0,     0,     0,  1347,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   523,     0,     0,     0,
    1693,     0,   748,     0,     0,     0,     0,   753,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   767,     0,     0,     0,     0,     0,   773,   774,   775,
     776,   777,   778,   779,   780,   781,   782,   783,   784,   785,
     786,   787,   788,   789,   791,   792,   793,   794,   795,   796,
     797,   797,     0,   802,   803,   435,   805,     0,     0,     0,
     435,     0,   811,     0,     0,   435,   815,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   435,
     797,     0,     0,     0,     0,   434,     0,     0,     0,     0,
       0,     0,     0,     0,   834,   835,   836,   837,   838,   839,
     840,   841,   842,   843,   844,   845,   846,   847,   849,   851,
     852,   853,   854,   855,     0,   857,   858,     0,     0,     0,
       0,     0,   865,   866,   867,     0,     0,     0,     0,   873,
     876,   879,   882,   884,     0,   886,  1438,   888,     0,   434,
     434,     0,     0,     0,   524,     0,     0,   435,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   521,   673,
     907,   435,     0,     0,   912,   913,   914,   915,   916,   917,
     918,   919,   920,     0,  1640,     0,     0,   926,  1475,   928,
       0,   929,     0,     0,     0,   434,   434,   434,     0,     0,
     936,   937,   938,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   674,   546,   547,   548,
     549,     0,     0,     0,     0,   550,   960,     0,     0,     0,
       0,     0,  1389,     0,     0,     0,     0,     0,     0,     0,
     434,     0,     0,     0,     0,   977,     0,   978,     0,   857,
     858,     0,     0,     0,     0,     0,   988,     0,     0,     0,
       0,     0,   994,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   434,     0,     0,     0,     0,     0,  1009,  1010,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1491,     0,     0,     0,   434,     0,  1029,  1030,     0,     0,
     434,  1035,     0,     0,     0,     0,     0,     0,     0,  1042,
       0,     0,     0,  1045,     0,     0,   849,     0,  1049,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,   674,   546,   547,   548,   549,     0,     0,  1070,
     524,   550,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1757,  1758,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,   434,     0,     0,   550,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   790,     0,     0,
       0,     0,     0,     0,   798,   799,     0,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     674,   546,   547,   548,   549,     0,     0,     0,     0,   550,
       0,   434,     0,     0,   825,     0,     0,     0,     0,   435,
       0,     0,     0,     0,   434,     0,     0,     0,     0,     0,
       0,  1146,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   850,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   434,     0,     0,     0,     0,
       0,     0,     0,  1171,  1172,     0,     0,     0,     0,  1175,
       0,     0,     0,   435,   435,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1200,     0,     0,  1202,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,   674,   546,   547,   548,   549,  1216,     0,  1218,
    1219,   550,     0,  1620,     0,     0,     0,     0,     0,   435,
     435,   435,     0,     0,     0,     0,     0,     0,  1237,     0,
       0,  1891,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1255,     0,     0,     0,
       0,     0,     0,  1261,  1262,  1263,  1264,     0,     0,     0,
       0,  1273,     0,     0,   435,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1298,   434,   434,   434,   434,
    1303,     0,     0,     0,     0,     0,  1670,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   435,     0,     0,     0,
    1950,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1960,     0,     0,   435,     0,
       0,     0,     0,     0,   435,  1674,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   434,     0,     0,     0,     0,
     850,     0,  1050,     0,     0,     0,     0,     0,  1350,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1351,  1352,
    1353,     0,     0,     0,     0,  1355,  1356,     0,  1357,     0,
       0,  1680,     0,     0,     0,     0,  1363,     0,  1364,  1365,
    1366,  1367,  1368,     0,     0,     0,     0,     0,     0,  1371,
       0,     0,     0,     0,     0,  1375,  1376,     0,   435,     0,
       0,     0,  1382,     0,     0,   434,  1788,     0,     0,     0,
       0,     0,     0,     0,     0,  1393,     0,  1395,     0,  1397,
       0,  1399,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   674,   546,   547,   548,   549,
    1842,   531,  1416,     0,   550,   435,     0,     0,  2048,  2049,
    2050,  2051,  2053,     0,     0,     0,     0,     0,   435,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1447,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   434,     0,     0,   435,
       0,     0,     0,     0,  1460,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,  2099,     0,     0,  1474,   550,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1483,  1866,     0,  1488,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   674,   546,   547,
     548,   549,     0,     0,     0,     0,   550,     0,  1892,     0,
    1510,     0,     0,     0,     0,     0,     0,  1517,  1518,  1519,
    1520,     0,     0,     0,     0,     0,  1526,     0,  1528,  1530,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,     0,     0,     0,     0,     0,     0,
     435,   435,   435,   435,     0,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   743,   546,   547,   548,   549,     0,     0,     0,   435,
     550,  1613,  1614,  1615,     0,     0,     0,     0,     0,     0,
    1621,     0,  1623,     0,     0,     0,     0,     0,     0,  1626,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   434,     0,     0,     0,     0,  1642,     0,     0,
       0,     0,     0,     0,     0,  1647,  1648,  1649,     0,     0,
       0,     0,     0,     0,     0,  1658,     0,     0,     0,     0,
       0,     0,     0,     0,  1668,     0,     0,     0,     0,   435,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,  1684,
       0,     0,   550,     0,     0,  1690,  1691,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     674,   546,   547,   548,   549,     0,     0,     0,     0,   550,
       0,     0,   700,     0,     0,     0,  1717,     0,     0,  1904,
       0,     0,     0,     0,  1720,  1721,     0,     0,     0,     0,
       0,  1726,  1727,     0,     0,     0,     0,     0,  1731,     0,
     435,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1734,  1735,  1736,     0,     0,
       0,     0,     0,  1737,  1738,  1739,  1740,     0,     0,     0,
       0,  2018,     0,  1742,     0,     0,     0,     0,     0,     0,
       0,     0,  1748,     0,     0,     0,     0,     0,     0,     0,
       0,   434,   434,  1759,     0,  1760,     0,     0,     0,     0,
       0,  1768,  1769,     0,     0,     0,   812,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     434,     0,     0,     0,  1787,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1797,     0,     0,  1800,     0,
       0,     0,  1803,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1814,
       0,     0,   862,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1826,     0,     0,     0,     0,  1832,  1833,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1835,     0,     0,  1836,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,   674,
     546,   547,   548,   549,     0,     0,     0,     0,   550,     0,
       0,     0,     0,     0,  1022,     0,     0,  1860,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   674,   546,   547,   548,   549,     0,     0,  1869,     0,
     550,     0,     0,     0,     0,     0,   435,  1878,     0,     0,
       0,     0,     0,     0,     0,     0,   523,     0,     0,     0,
       0,     0,     0,     0,     0,  1889,  1890,     0,     0,   434,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,     0,     0,     0,     0,     0,     0,
    1913,  1914,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1925,     0,     0,     0,     0,     0,
       0,  1932,     0,     0,     0,     0,     0,  1936,  1937,  1938,
    1939,  1940,     0,     0,     0,     0,     0,     0,   434,     0,
    1718,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   434,     0,     0,     0,     0,     0,     0,
       0,  1966,     0,     0,     0,     0,     0,     0,     0,  1074,
    1075,  1076,  1077,  1078,  1079,  1080,  1081,  1082,  1083,  1084,
       0,  1086,  1087,  1088,  1089,  1977,  1091,  1092,  1093,  1094,
       0,  1982,     0,     0,  1983,  2070,     0,     0,     0,     0,
    1104,     0,  1106,     0,     0,     0,     0,     0,     0,  1112,
       0,     0,     0,     0,     0,   435,   435,     0,     0,     0,
    1120,  1121,     0,     0,     0,     0,  2006,     0,     0,  1131,
       0,     0,     0,     0,     0,  1987,     0,     0,     0,     0,
       0,     0,     0,     0,   435,     0,     0,     0,     0,     0,
       0,  2024,  2025,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2031,  2032,  2033,  2034,  2035,  2036,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2044,     0,     0,     0,     0,   434,   434,   434,   434,
     434,     0,     0,     0,     0,     0,  1832,     0,     0,     0,
    2060,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   155,   156,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2083,     0,     0,     0,     0,  2086,  2087,  2088,  2089,  2090,
    2091,     0,     0,     0,     0,     0,     0,  1222,  1224,  1225,
       0,   434,     0,  1229,  1230,     0,     0,  1233,  1234,  1235,
    1236,     0,  1238,     0,     0,     0,     0,  1244,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2122,  2123,  2124,  2125,  2126,  2127,     0,     0,
     524,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   435,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   674,   546,   547,
     548,   549,     0,     0,     0,     0,   550,     0,   406,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1322,  1323,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   674,   546,   547,   548,
     549,     0,     0,     0,     0,   550,     0,     0,     0,     0,
       0,     0,   435,     0,     0,     0,     0,     0,     0,     0,
       0,   531,     0,     0,     0,     0,     0,   435,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   489,   490,   491,   492,   493,   494,     0,   496,   497,
       0,     0,     0,     0,   499,   500,     0,     0,     0,     0,
     187,   150,   344,     0,   516,   517,     0,   188,   189,   190,
       0,     0,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   380,
     209,   210,   211,   212,   213,   214,     0,     0,     0,     0,
       0,     0,     0,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   220,   221,   222,   223,   354,   355,   356,   357,
     224,     0,     0,     0,   358,   359,   360,     0,     0,   361,
       0,   362,   225,   226,   227,     0,     0,     0,     0,     0,
     228,    21,   363,   229,     0,   364,     0,     0,     0,     0,
     435,   435,   435,   435,   435,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   644,   645,   646,     0,     0,     0,   650,   651,   652,
     653,   654,   655,   656,     0,   657,     0,     0,     0,   658,
     659,   531,     0,   662,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1497,   672,     0,     0,     0,
       0,     0,     0,     0,     0,   435,     0,     0,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,     0,     0,     7,     8,
     550,     0,     0,  1532,     0,     0,     0,     0,   237,   365,
     366,   367,   238,     0,     0,     0,     0,   240,   241,   242,
     368,   243,   244,   245,   369,     0,   370,   107,     0,     0,
       0,     0,     0,     0,     0,     0,  1567,  1568,  1569,  1570,
    1571,     0,     0,   246,   381,  1576,  1577,     0,  1579,     0,
     248,     0,     0,     0,  1585,   326,     0,     0,     0,  1529,
       0,     0,   251,     0,     0,     0,     0,     0,     0,  1593,
       0,     0,     0,     0,     0,     0,   710,    25,    26,   711,
      28,    29,   712,    31,   713,    33,    34,    35,    36,     0,
       0,     0,    38,    39,    40,     0,     0,    42,     0,     0,
       0,     0,     0,   714,    48,     0,     0,    50,   715,     0,
      53,   716,     0,     0,     0,     0,   833,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   947,    70,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1653,     0,  1656,     0,     0,     0,
    1663,     0,  1665,    84,    85,    86,     0,     0,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   743,   546,   547,   548,   549,     0,     0,     0,     0,
     550,     0,     0,     0,  1686,     0,     0,   187,     6,   344,
       0,     0,     0,     0,   188,   189,   190,     0,     0,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   930,     0,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   220,
     221,   222,   223,   354,   355,   356,   357,   224,     0,     0,
       0,   358,   359,   360,     0,     0,   361,     0,   362,   225,
     226,   227,     0,     0,     0,     0,     0,   228,    21,   363,
     229,     0,   364,     0,     0,   230,     0,     0,   231,     0,
       0,   232,     0,   233,     0,     0,     0,     0,     0,     0,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   234,     0,    49,     0,     0,   235,     0,   236,
       0,     0,     0,     0,     0,     0,    59,    60,    61,    62,
      63,     0,     0,    65,    66,    67,    68,    69,     0,     0,
       0,    73,     0,     0,    76,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1823,  1824,   237,   365,   366,   367,   238,
     239,     0,     0,     0,   240,   241,   242,   368,   243,   244,
     245,   369,  1132,   370,   107,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     246,   247,     0,     0,     0,     0,     0,   248,     0,     0,
    1852,  1853,   326,     0,     0,     0,  1533,     0,     0,   251,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   187,     6,   344,     0,     0,
       0,     0,   188,   189,   190,     0,     0,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,  1895,  1896,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   220,   221,   222,
     223,   354,   355,   356,   357,   224,     0,     0,     0,   358,
     359,   360,     0,     0,   361,     0,   362,   225,   226,   227,
       0,     0,     0,     0,     0,   228,    21,   363,   229,     0,
     364,     0,     0,   230,     0,     0,   231,     0,     0,   232,
       0,   233,     0,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     234,     0,    49,     0,     0,   235,     0,   236,  1133,     0,
       0,     0,     0,     0,    59,    60,    61,    62,    63,     0,
       0,    65,    66,    67,    68,    69,     0,     0,     0,    73,
       0,     0,    76,     0,     0,     0,     0,  1453,     0,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,   674,   546,   547,   548,   549,     0,     0,     0,
       0,   550,     0,     0,     0,  1317,     0,     0,     0,     0,
       0,     0,     0,   237,   365,   366,   367,   238,   239,     0,
       0,     0,   240,   241,   242,   368,   243,   244,   245,   369,
       0,   370,   107,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   246,   247,
       0,     0,     0,     0,     0,   248,     0,     0,     0,     0,
     326,   187,   150,   344,   250,   392,     0,   251,   188,   189,
     190,     0,     0,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     380,   209,   210,   211,   212,   213,   214,     0,     0,     0,
       0,     0,     0,     0,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   220,   221,   222,   223,   354,   355,   356,
     357,   224,     0,     0,     0,   358,   359,   360,     0,     0,
     361,     0,   362,   225,   226,   227,     0,     0,     0,     0,
       0,   228,    21,   363,   229,     0,   364,     0,     0,     0,
       0,     0,     0,  2108,     0,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,     0,
       0,     0,     0,   393,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   674,   546,   547,
     548,   549,     0,     0,     0,     0,   550,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     674,   546,   547,   548,   549,     0,     0,     0,     0,   550,
       0,   697,     0,   698,     0,     0,     0,     0,     0,  1655,
       0,     0,   394,     0,     0,     0,  1498,  1499,     0,   237,
     365,   366,   367,   238,     0,     0,     0,     0,   240,   241,
     242,   368,   243,   244,   245,   369,     0,   370,   107,   395,
     396,   397,   398,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   246,   381,     0,     0,     0,     0,
       0,   248,     0,   399,   400,     0,   401,     0,   402,   187,
       6,   325,   403,   251,     0,     0,   188,   189,   190,     0,
       0,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   220,   221,   222,   223,     0,     0,     0,     0,   224,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   225,   226,   227,     0,     0,     7,     8,     0,   228,
      21,     0,   229,     0,     0,     0,     0,   230,     0,     0,
     231,     0,     0,   232,     0,   233,     0,     0,     0,     0,
       0,     0,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   234,     0,    49,     0,     0,   235,
       0,   236,     0,     0,     0,     0,     0,     0,    59,    60,
      61,    62,    63,     0,     0,    65,    66,    67,    68,    69,
       0,     0,     0,    73,     0,     0,    76,     0,     0,     0,
       0,     0,     0,     0,   710,    25,    26,   711,    28,    29,
     712,    31,   713,    33,    34,    35,    36,     0,     0,     0,
      38,    39,    40,     0,     0,    42,     0,     0,     0,     0,
       0,   714,    48,     0,     0,    50,   715,   237,    53,   716,
       0,   238,   239,     0,     0,     0,   240,   241,   242,     0,
     243,   244,   245,     0,     0,     0,   107,    70,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   246,   247,     0,     0,     0,     0,     0,   248,
       0,    84,    85,    86,   326,   187,     6,  1629,   250,     0,
       0,   251,   188,   189,   190,     0,     0,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   220,   221,   222,
     223,     0,     0,     0,     0,   224,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   975,   225,   226,   227,
       0,     0,     7,     8,     0,   228,    21,     0,   229,     0,
       0,     0,     0,   230,     0,     0,   231,     0,     0,   232,
       0,   233,     0,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     234,     0,    49,     0,     0,   235,     0,   236,     0,     0,
       0,     0,     0,     0,    59,    60,    61,    62,    63,     0,
       0,    65,    66,    67,    68,    69,     0,     0,     0,    73,
       0,     0,    76,     0,     0,     0,     0,     0,     0,     0,
     710,    25,    26,   711,    28,    29,   712,    31,   713,    33,
      34,    35,    36,     0,     0,     0,    38,    39,    40,     0,
       0,    42,     0,     0,     0,     0,     0,   714,    48,     0,
       0,    50,   715,   237,    53,   716,     0,   238,   239,     0,
       0,     0,   240,   241,   242,     0,   243,   244,   245,     0,
       0,     0,   107,    70,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   246,   247,
       0,     0,     0,     0,     0,   248,     0,    84,    85,    86,
     326,   187,     6,     0,   250,     0,     0,   251,   188,   189,
     190,     0,     0,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   220,   221,   222,   223,     0,     0,     0,
       0,   224,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   976,   225,   226,   227,     0,     0,     7,     8,
       0,   228,    21,     0,   229,     0,     0,     0,     0,   230,
       0,     0,   231,     0,     0,   232,     0,   233,     0,     0,
       0,     0,     0,     0,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   234,     0,    49,     0,
       0,   235,     0,   236,     0,     0,     0,     0,     0,     0,
      59,    60,    61,    62,    63,     0,     0,    65,    66,    67,
      68,    69,     0,     0,     0,    73,     0,     0,    76,     0,
       0,     0,     0,     0,     0,     0,   710,    25,    26,   711,
      28,    29,   712,    31,   713,    33,    34,    35,    36,     0,
       0,     0,    38,    39,    40,     0,     0,    42,     0,     0,
       0,     0,     0,   714,    48,     0,     0,    50,   715,   237,
      53,   716,     0,   238,   239,     0,     0,     0,   240,   241,
     242,     0,   243,   244,   245,     0,     0,     0,   107,    70,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   595,  1783,     0,     0,     0,     0,
       0,   248,     0,    84,    85,    86,   597,   187,     6,     0,
     290,   527,     0,   251,   188,   189,   190,     0,     0,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   220,
     221,   222,   223,     0,     0,     0,     0,   224,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1166,   225,
     226,   227,     0,     0,     7,     8,     0,   228,    21,     0,
     229,     0,     0,     0,     0,   230,     0,     0,   231,     0,
       0,   232,     0,   233,     0,     0,     0,     0,     0,     0,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   234,     0,    49,     0,     0,   235,     0,   236,
       0,     0,     0,     0,     0,     0,    59,    60,    61,    62,
      63,     0,     0,    65,    66,    67,    68,    69,     0,     0,
       0,    73,     0,     0,    76,     0,     0,     0,     0,     0,
       0,     0,   710,    25,    26,   711,    28,    29,   712,    31,
     713,    33,    34,    35,    36,     0,     0,     0,    38,    39,
      40,     0,     0,    42,     0,     0,     0,     0,     0,   714,
      48,     0,     0,    50,   715,   237,    53,   716,     0,   238,
     239,     0,     0,     0,   240,   241,   242,     0,   243,   244,
     245,     0,     0,     0,   107,    70,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     246,   247,     0,     0,     0,     0,     0,   248,     0,    84,
      85,    86,   249,   187,     6,     0,   250,     0,     0,   251,
     188,   189,   190,     0,     0,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   220,   221,   222,   223,     0,
       0,     0,     0,   224,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1168,   225,   226,   227,     0,     0,
       7,     8,     0,   228,    21,     0,   229,     0,     0,     0,
       0,   230,     0,     0,   231,     0,     0,   232,     0,   233,
       0,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   234,     0,
      49,     0,     0,   235,     0,   236,     0,     0,     0,     0,
       0,     0,    59,    60,    61,    62,    63,     0,     0,    65,
      66,    67,    68,    69,     0,     0,     0,    73,     0,     0,
      76,     0,     0,     0,     0,     0,     0,     0,   710,    25,
      26,   711,    28,    29,   712,    31,   713,    33,    34,    35,
      36,     0,     0,     0,    38,    39,    40,     0,     0,    42,
       0,     0,     0,     0,     0,   714,    48,     0,     0,    50,
     715,   237,    53,   716,     0,   238,   239,     0,     0,     0,
     240,   241,   242,     0,   243,   244,   245,     0,     0,     0,
     107,    70,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   246,   247,     0,     0,
       0,     0,     0,   248,     0,    84,    85,    86,   326,   187,
       6,     0,   250,     0,     0,   251,   188,   189,   190,     0,
       0,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   220,   221,   222,   223,     0,     0,     0,     0,   224,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1169,   225,   226,   227,     0,     0,     7,     8,     0,   228,
      21,     0,   229,     0,     0,     0,     0,   230,     0,     0,
     231,     0,     0,   232,     0,   233,     0,     0,     0,     0,
       0,     0,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   234,     0,    49,     0,     0,   235,
       0,   236,     0,     0,     0,     0,     0,     0,    59,    60,
      61,    62,    63,     0,     0,    65,    66,    67,    68,    69,
       0,     0,     0,    73,     0,     0,    76,     0,     0,     0,
       0,     0,     0,     0,   710,    25,    26,   711,    28,    29,
     712,    31,   713,    33,    34,    35,    36,     0,     0,     0,
      38,    39,    40,     0,     0,    42,     0,     0,     0,     0,
       0,   714,    48,     0,     0,    50,   715,   237,    53,   716,
       0,   238,   239,     0,     0,     0,   240,   241,   242,     0,
     243,   244,   245,     0,     0,     0,   107,    70,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   246,   433,     0,     0,     0,     0,     0,   248,
       0,    84,    85,    86,   326,   187,     6,     0,   522,     0,
       0,   251,   188,   189,   190,     0,     0,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   220,   221,   222,
     223,     0,     0,     0,     0,   224,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1188,   225,   226,   227,
       0,     0,     7,     8,     0,   228,    21,     0,   229,     0,
       0,     0,     0,   230,     0,     0,   231,     0,     0,   232,
       0,   233,     0,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     234,     0,    49,     0,     0,   235,     0,   236,     0,     0,
       0,     0,     0,     0,    59,    60,    61,    62,    63,     0,
       0,    65,    66,    67,    68,    69,     0,     0,     0,    73,
       0,     0,    76,     0,     0,     0,     0,     0,     0,     0,
     710,    25,    26,   711,    28,    29,   712,    31,   713,    33,
      34,    35,    36,     0,     0,     0,    38,    39,    40,     0,
       0,    42,     0,     0,     0,     0,     0,   714,    48,     0,
       0,    50,   715,   237,    53,   716,     0,   238,   239,     0,
       0,     0,   240,   241,   242,     0,   243,   244,   245,     0,
       0,     0,   107,    70,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   246,   433,
       0,     0,     0,     0,     0,   248,     0,    84,    85,    86,
     326,   187,     6,     0,     0,   527,     0,   251,   188,   189,
     190,     0,     0,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   220,   221,   222,   223,     0,     0,     0,
       0,   224,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1217,   225,   226,   227,     0,     0,     7,     8,
       0,   228,    21,     0,   229,     0,     0,     0,     0,   230,
       0,     0,   231,     0,     0,   232,     0,   233,     0,     0,
       0,     0,     0,     0,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   234,     0,    49,     0,
       0,   235,     0,   236,     0,     0,     0,     0,     0,     0,
      59,    60,    61,    62,    63,     0,     0,    65,    66,    67,
      68,    69,     0,     0,     0,    73,     0,     0,    76,     0,
       0,     0,     0,     0,     0,     0,   710,    25,    26,   711,
      28,    29,   712,    31,   713,    33,    34,    35,    36,     0,
       0,     0,    38,    39,    40,     0,     0,    42,     0,     0,
       0,     0,     0,   714,    48,     0,     0,    50,   715,   237,
      53,   716,     0,   238,   239,     0,     0,     0,   240,   241,
     242,     0,   243,   244,   245,     0,     0,     0,   107,    70,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   246,   247,     0,     0,     0,     0,
       0,   248,     0,    84,    85,    86,   561,   187,     6,     0,
     250,     0,     0,   251,   188,   189,   190,     0,     0,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   220,
     221,   222,   223,     0,     0,     0,     0,   224,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1250,   225,
     226,   227,     0,     0,     7,     8,     0,   228,    21,     0,
     229,     0,     0,     0,     0,   230,     0,     0,   231,     0,
       0,   232,     0,   233,     0,     0,     0,     0,     0,     0,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   234,     0,    49,     0,     0,   235,     0,   236,
       0,     0,     0,     0,     0,     0,    59,    60,    61,    62,
      63,     0,     0,    65,    66,    67,    68,    69,     0,     0,
       0,    73,     0,     0,    76,     0,     0,     0,     0,     0,
       0,     0,   710,    25,    26,   711,    28,    29,   712,    31,
     713,    33,    34,    35,    36,     0,     0,     0,    38,    39,
      40,     0,     0,    42,     0,     0,     0,     0,     0,   714,
      48,     0,     0,    50,   715,   237,    53,   716,     0,   238,
     239,     0,     0,     0,   240,   241,   242,     0,   243,   244,
     245,     0,     0,     0,   107,    70,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     246,   247,     0,     0,     0,     0,     0,   248,     0,    84,
      85,    86,   570,   187,     6,     0,   250,     0,     0,   251,
     188,   189,   190,     0,     0,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   220,   221,   222,   223,     0,
       0,     0,     0,   224,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1407,   225,   226,   227,     0,     0,
       7,     8,     0,   228,    21,     0,   229,     0,     0,     0,
       0,   230,     0,     0,   231,     0,     0,   232,     0,   233,
       0,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   234,     0,
      49,     0,     0,   235,     0,   236,     0,     0,     0,     0,
       0,     0,    59,    60,    61,    62,    63,     0,     0,    65,
      66,    67,    68,    69,     0,     0,     0,    73,     0,     0,
      76,     0,     0,     0,     0,     0,     0,     0,   710,    25,
      26,   711,    28,    29,   712,    31,   713,    33,    34,    35,
      36,     0,     0,     0,    38,    39,    40,     0,     0,    42,
       0,     0,     0,     0,     0,   714,    48,     0,     0,    50,
     715,   237,    53,   716,     0,   238,   239,     0,     0,     0,
     240,   241,   242,     0,   243,   244,   245,     0,     0,     0,
     107,    70,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   246,   247,     0,     0,
       0,     0,     0,   248,     0,    84,    85,    86,   572,   187,
       6,     0,   250,     0,     0,   251,   188,   189,   190,     0,
       0,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   220,   221,   222,   223,     0,     0,     0,     0,   224,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2009,   225,   226,   227,     0,     0,     7,     8,     0,   228,
      21,     0,   229,     0,     0,     0,     0,   230,     0,     0,
     231,     0,     0,   232,     0,   233,     0,     0,     0,     0,
       0,     0,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   234,     0,    49,     0,     0,   235,
       0,   236,     0,     0,     0,     0,     0,     0,    59,    60,
      61,    62,    63,     0,     0,    65,    66,    67,    68,    69,
       0,     0,     0,    73,     0,     0,    76,     0,     0,     0,
       0,     0,     0,     0,   710,    25,    26,   711,    28,    29,
     712,    31,   713,    33,    34,    35,    36,     0,     0,     0,
      38,    39,    40,     0,     0,    42,     0,     0,     0,     0,
       0,   714,    48,     0,     0,    50,   715,   237,    53,   716,
       0,   238,   239,     0,     0,     0,   240,   241,   242,     0,
     243,   244,   245,     0,     0,     0,   107,    70,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   246,   247,     0,     0,     0,     0,     0,   248,
       0,    84,    85,    86,   574,   187,     6,     0,   250,     0,
       0,   251,   188,   189,   190,     0,     0,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   220,   221,   222,
     223,     0,     0,     0,     0,   224,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2072,   225,   226,   227,
       0,     0,     7,     8,     0,   228,    21,     0,   229,     0,
       0,     0,     0,   230,     0,     0,   231,     0,     0,   232,
       0,   233,     0,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     234,     0,    49,     0,     0,   235,     0,   236,     0,     0,
       0,     0,     0,     0,    59,    60,    61,    62,    63,     0,
       0,    65,    66,    67,    68,    69,     0,     0,     0,    73,
       0,     0,    76,     0,     0,     0,     0,     0,     0,     0,
     710,    25,    26,   711,    28,    29,   712,    31,   713,    33,
      34,    35,    36,     0,     0,     0,    38,    39,    40,     0,
       0,    42,     0,     0,     0,     0,     0,   714,    48,     0,
       0,    50,   715,   237,    53,   716,     0,   238,   239,     0,
     982,     0,   240,   241,   242,     0,   243,   244,   245,     0,
       0,     0,   107,    70,     0,     0,     0,   983,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   246,   433,
       0,     0,     0,     0,     0,   248,     0,    84,    85,    86,
     326,   187,     6,     0,   848,     0,     0,   251,   188,   189,
     190,     0,     0,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   220,   221,   222,   223,     0,     0,     0,
       0,   224,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   225,   226,   227,     0,     0,     7,     8,
       0,   228,    21,     0,   229,     0,     0,     0,     0,   230,
       0,     0,   231,     0,     0,   232,     0,   233,     0,     0,
       0,     0,     0,     0,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   234,     0,    49,     0,
       0,   235,     0,   236,     0,     0,     0,     0,     0,     0,
      59,    60,    61,    62,    63,     0,     0,    65,    66,    67,
      68,    69,     0,     0,     0,    73,     0,     0,    76,     0,
       0,     0,     0,     0,     0,     0,   710,    25,    26,   711,
      28,    29,   712,    31,   713,    33,    34,    35,    36,     0,
       0,     0,    38,    39,    40,     0,     0,    42,     0,     0,
       0,     0,     0,   714,    48,     0,     0,    50,   715,   237,
      53,   716,     0,   238,   239,     0,     0,     0,   240,   241,
     242,     0,   243,   244,   245,     0,     0,     0,   107,    70,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   246,   247,     0,     0,     0,     0,
       0,   248,     0,    84,    85,    86,   326,   187,   150,   344,
    1637,     0,     0,   251,   188,   189,   190,     0,     0,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   380,   209,   210,   211,
     212,   213,   214,     0,     0,     0,     0,     0,     0,     0,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   220,
     221,   222,   223,   354,   355,   356,   357,   224,     0,     0,
       0,   358,   359,   360,     0,     0,   361,     0,   362,   225,
     226,   227,     0,     0,     0,     0,     0,   228,    21,   363,
     229,     0,   364,   187,   150,   344,     0,     0,     0,     0,
     188,   189,   190,     0,     0,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   380,   209,   210,   211,   212,   213,   214,     0,
       0,     0,     0,     0,     0,     0,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   220,   221,   222,   223,   354,
     355,   356,   357,   224,     0,     0,     0,   358,   359,   360,
       0,     0,   361,     0,   362,   225,   226,   227,     0,     0,
       0,     0,     0,   228,    21,   363,   229,     0,   364,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   237,   365,   366,   367,   238,
       0,     0,     0,     0,   240,   241,   242,   368,   243,   244,
     245,   369,     0,   370,   107,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     246,   381,     0,     0,     0,     0,     0,   248,     0,     0,
       0,     0,   326,     0,     0,     0,  1796,     0,     0,   251,
       0,     0,     0,     0,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   674,   546,   547,
     548,   549,     0,     0,     0,     0,   550,     0,   939,     0,
       0,   237,   365,   366,   367,   238,   900,     0,     0,     0,
     240,   241,   242,   368,   243,   244,   245,   369,     0,   370,
     107,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   246,   381,     0,     0,
       0,     0,     0,   248,     0,     0,     0,     0,   326,   187,
       6,     0,  1802,     0,     0,   251,   188,   189,   190,     0,
       0,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   220,   221,   222,   223,     0,     0,     0,     0,   224,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   225,   226,   227,     0,     0,     0,     0,     0,   228,
      21,     0,   229,     0,     0,     0,     0,   230,     0,     0,
     231,     0,     0,   232,     0,   233,     0,     0,     0,     0,
       0,     0,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   234,     0,    49,     0,     0,   235,
       0,   236,     0,     0,     0,     0,     0,     0,    59,    60,
      61,    62,    63,     0,     0,    65,    66,    67,    68,    69,
       0,     0,     0,    73,     0,     0,    76,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     674,   546,   547,   548,   549,     0,     0,     0,     0,   550,
       0,     0,     0,     0,     0,  1764,     0,     0,     0,  1765,
       0,     0,     0,     0,     0,     0,     0,   237,     0,     0,
       0,   238,   239,     0,     0,     0,   240,   241,   242,     0,
     243,   244,   245,     0,     0,     0,   107,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   595,  1783,     0,     0,     0,     0,     0,   248,
       0,     0,     0,     0,   597,   187,     6,     0,   290,     0,
       0,   251,   188,   189,   190,     0,     0,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   220,   221,   222,
     223,     0,     0,     0,     0,   224,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   225,   226,   227,
       0,     0,     0,     0,     0,   228,    21,     0,   229,     0,
       0,     0,     0,   230,     0,     0,   231,     0,     0,   232,
       0,   233,     0,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     234,     0,    49,     0,     0,   235,     0,   236,     0,     0,
       0,     0,     0,     0,    59,    60,    61,    62,    63,     0,
       0,    65,    66,    67,    68,    69,     0,     0,     0,    73,
       0,     0,    76,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   674,   546,   547,   548,
     549,     0,     0,     0,     0,   550,     0,     0,     0,     0,
       0,  1791,     0,     0,     0,  1792,     0,     0,     0,     0,
       0,     0,     0,   237,     0,     0,     0,   238,   239,     0,
       0,     0,   240,   241,   242,     0,   243,   244,   245,     0,
       0,     0,   107,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   246,   433,
       0,     0,     0,     0,     0,   248,   187,   150,   344,     0,
     326,     0,     0,   188,   189,   190,     0,   251,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   380,   209,   210,   211,   212,
     213,   214,     0,     0,     0,     0,     0,     0,     0,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   220,   221,
     222,   223,   354,   355,   356,   357,   224,     0,     0,     0,
     358,   359,   360,     0,     0,   361,     0,   362,   225,   226,
     227,     0,     0,     0,     0,     0,   228,    21,   363,   229,
       0,   364,   187,   150,     0,     0,     0,     0,     0,   188,
     189,   190,     0,     0,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   380,   209,   210,   211,   212,   213,   214,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   220,   221,   222,   223,     0,     0,
       0,     0,   224,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   225,   226,   227,     0,     0,     0,
       0,     0,   228,    21,     0,   229,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   237,   365,   366,   367,   238,     0,
       0,     0,     0,   240,   241,   242,   368,   243,   244,   245,
     369,     0,   370,   107,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   246,
     381,     0,     0,     0,     0,     0,   248,     0,     0,     0,
       0,   326,     0,     0,     0,     0,     0,     0,   251,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,   674,   546,   547,   548,   549,     0,     0,     0,
       0,   550,     0,     0,     0,     0,     0,  1952,     0,     0,
     237,  1953,     0,     0,   238,     0,     0,     0,     0,   240,
     241,   242,     0,   243,   244,   245,     0,     0,     0,   107,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   246,   381,     0,     0,     0,
       0,     0,   248,     0,     0,     0,     0,   326,   187,   150,
       0,   577,     0,     0,   251,   188,   189,   190,     0,     0,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   380,   209,   210,
     211,   212,   213,   214,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     220,   221,   222,   223,     0,     0,     0,     0,   224,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     225,   226,   227,     0,     0,     0,     0,     0,   228,    21,
       0,   229,   187,   150,     0,  1254,     0,     0,     0,   188,
     189,   190,     0,     0,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   380,   209,   210,   211,   212,   213,   214,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   220,   221,   222,   223,     0,     0,
       0,     0,   224,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   225,   226,   227,     0,     0,     0,
       0,     0,   228,    21,     0,   229,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,   674,
     546,   547,   548,   549,     0,     0,   237,     0,   550,     0,
     238,     0,     0,     0,     0,   240,   241,   242,   728,   243,
     244,   245,     0,     0,     0,   107,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   595,   596,     0,     0,     0,     0,     0,   248,     0,
       0,     0,     0,   597,     0,     0,     0,   290,     0,     0,
     251,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   674,   546,   547,   548,   549,     0,
       0,     0,     0,   550,     0,     0,     0,     0,     0,     0,
     237,     0,     0,   900,   238,     0,     0,     0,     0,   240,
     241,   242,     0,   243,   244,   245,     0,     0,     0,   107,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   246,   381,     0,     0,     0,
       0,     0,   248,   187,   150,     0,  1415,   326,     0,     0,
     188,   189,   190,     0,   251,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   380,   209,   210,   211,   212,   213,   214,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   220,   221,   222,   223,     0,
       0,     0,     0,   224,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   225,   226,   227,     0,     0,
       0,     0,     0,   228,    21,     0,   229,   187,   150,     0,
    1473,     0,     0,     0,   188,   189,   190,     0,     0,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   380,   209,   210,   211,
     212,   213,   214,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   220,
     221,   222,   223,     0,     0,     0,     0,   224,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   225,
     226,   227,     0,     0,     0,     0,     0,   228,    21,     0,
     229,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   674,   546,   547,   548,   549,     0,
       0,   237,     0,   550,     0,   238,     0,     0,     0,     0,
     240,   241,   242,   901,   243,   244,   245,     0,     0,     0,
     107,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   246,   381,     0,     0,
       0,     0,     0,   248,     0,     0,     0,     0,   326,     0,
       0,     0,     0,     0,     0,   251,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,   674,
     546,   547,   548,   549,     0,     0,     0,     0,   550,     0,
       0,     0,     0,     0,     0,   237,     0,     0,   944,   238,
       0,     0,     0,     0,   240,   241,   242,     0,   243,   244,
     245,     0,     0,     0,   107,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     246,   381,     0,     0,     0,     0,     0,   248,   187,   150,
       0,     0,   326,     0,     0,   188,   189,   190,     0,   251,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   380,   209,   210,
     211,   212,   213,   214,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     220,   221,   222,   223,     0,     0,     0,     0,   224,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     225,   226,   227,     0,     0,     0,     0,     0,   228,    21,
       0,   229,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   674,   546,   547,   548,   549,
       0,     0,     0,     0,   550,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1085,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1095,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    -4,     1,     0,     0,    -4,
       0,     0,     0,     0,     0,     0,     0,     0,    -4,    -4,
       0,     0,     0,     0,     0,     0,   237,     0,     0,     0,
     238,     0,     0,     0,     0,   240,   241,   242,     0,   243,
     244,   245,     0,     0,     0,   107,     0,     0,     0,    -4,
      -4,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   246,   381,     0,     0,     0,     0,     0,   248,    -4,
      -4,    -4,     0,   326,     0,    -4,    -4,     0,    -4,     0,
     251,     0,     0,    -4,    -4,     0,    -4,    -4,     0,    -4,
       0,     0,     0,     0,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,     0,
       0,    -4,    -4,    -4,    -4,    -4,     0,    -4,     0,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,     0,    -4,    -4,    -4,
      -4,    -4,    -4,     0,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,     0,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,     0,     6,
       0,    -4,    -4,    -4,     0,     0,     0,    -4,     7,     8,
       0,     0,    -4,    -4,    -4,    -4,     0,     0,    -4,     0,
      -4,     0,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,     0,     0,     0,     9,
      10,     0,    -4,    -4,    -4,     0,     0,     0,     0,     0,
       0,     0,     0,    -4,     0,    -4,     0,     0,     0,    11,
      12,    13,     0,     0,     0,    14,    15,     0,    16,     0,
       0,     0,     0,    17,    18,     0,    19,    20,     0,    21,
       0,     0,     0,     0,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,     0,
       0,    37,    38,    39,    40,    41,     0,    42,     0,    43,
      44,    45,    46,    47,    48,    49,     0,    50,    51,    52,
      53,    54,    55,     0,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,     0,     0,
       0,    79,    80,    81,     0,     0,     0,    82,     0,     0,
       0,     0,    83,    84,    85,    86,   150,   344,    87,     0,
      88,     0,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,     0,     0,     0,     0,
       0,     0,   103,   104,   105,     0,   150,   344,     0,     0,
       0,     0,     0,   106,     0,   107,     0,     0,   345,   346,
     347,   348,   349,   350,   351,   352,   353,     0,     0,     0,
       0,   354,   355,   356,   357,     0,   374,   344,     0,   358,
     359,   360,     0,     0,   361,     0,   362,     0,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   363,     0,     0,
     364,   354,   355,   356,   357,     0,     0,   344,     0,   358,
     359,   360,     0,     0,   361,     0,   362,     0,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   363,     0,     0,
     364,   354,   355,   356,   357,     0,     0,   393,     0,   358,
     359,   360,     0,     0,   361,     0,   362,     0,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   363,     0,     0,
     364,   354,   355,   356,   357,     0,     0,     0,     0,   358,
     359,   360,     0,     0,   361,     0,   362,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   363,     0,     0,
     364,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   365,   366,   367,     0,     0,     0,
       0,     0,     0,     0,     0,   368,     0,     0,     0,   369,
       0,   370,   107,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   365,   366,   367,     0,     0,     0,
       0,     0,     0,     0,     0,   368,     0,     0,     0,   369,
       0,   370,   107,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   365,   366,   367,     0,     0,     0,
       0,     0,     0,     0,     0,   368,     0,     0,     0,   369,
       0,   370,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   365,   366,   367,     0,     0,     0,
       0,     0,     0,     0,     0,   368,     0,     0,     0,   369,
       0,   370,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   674,   546,   547,   548,   549,
       0,     0,     0,     0,   550,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1096,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1097,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   674,   546,   547,   548,   549,     0,     0,     0,     0,
     550,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1102,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   674,   546,   547,   548,   549,     0,
       0,     0,     0,   550,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1103,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   674,   546,   547,
     548,   549,     0,     0,     0,     0,   550,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1105,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     674,   546,   547,   548,   549,     0,     0,     0,     0,   550,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1211,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1232,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   674,   546,   547,   548,
     549,     0,     0,     0,     0,   550,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1315,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,   674,
     546,   547,   548,   549,     0,     0,     0,     0,   550,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1409,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,   674,   546,   547,   548,   549,     0,     0,     0,
       0,   550,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1410,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   674,   546,   547,   548,   549,
       0,     0,     0,     0,   550,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1452,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1572,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   674,   546,   547,   548,   549,     0,     0,     0,     0,
     550,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1573,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   674,   546,   547,   548,   549,     0,
       0,     0,     0,   550,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1574,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   674,   546,   547,
     548,   549,     0,     0,     0,     0,   550,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1580,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     674,   546,   547,   548,   549,     0,     0,     0,     0,   550,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1581,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1582,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   674,   546,   547,   548,
     549,     0,     0,     0,     0,   550,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1583,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,   674,
     546,   547,   548,   549,     0,     0,     0,     0,   550,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1712,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,   674,   546,   547,   548,   549,     0,     0,     0,
       0,   550,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1827,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   674,   546,   547,   548,   549,
       0,     0,     0,     0,   550,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1828,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1854,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   674,   546,   547,   548,   549,     0,     0,     0,     0,
     550,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1855,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   674,   546,   547,   548,   549,     0,
       0,     0,     0,   550,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1856,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   674,   546,   547,
     548,   549,     0,     0,     0,     0,   550,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1857,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     674,   546,   547,   548,   549,     0,     0,     0,     0,   550,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1858,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1921,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   674,   546,   547,   548,
     549,     0,     0,     0,     0,   550,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1978,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,   674,
     546,   547,   548,   549,     0,     0,     0,     0,   550,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1979,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,   674,   546,   547,   548,   549,     0,     0,     0,
       0,   550,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1991,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   674,   546,   547,   548,   549,
       0,     0,     0,     0,   550,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1992,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1993,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   674,   546,   547,   548,   549,     0,     0,     0,     0,
     550,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1994,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   674,   546,   547,   548,   549,     0,
       0,     0,     0,   550,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1995,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   674,   546,   547,
     548,   549,     0,     0,     0,     0,   550,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2027,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     674,   546,   547,   548,   549,     0,     0,     0,     0,   550,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2057,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2062,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   674,   546,   547,   548,
     549,     0,     0,     0,     0,   550,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2063,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,   674,
     546,   547,   548,   549,     0,     0,     0,     0,   550,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2064,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,   674,   546,   547,   548,   549,     0,     0,     0,
       0,   550,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2065,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   674,   546,   547,   548,   549,
       0,     0,     0,     0,   550,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2066,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2067,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   674,   546,   547,   548,   549,     0,     0,     0,     0,
     550,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2109,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   674,   546,   547,   548,   549,     0,
       0,     0,     0,   550,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2110,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   674,   546,   547,
     548,   549,     0,     0,     0,     0,   550,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2111,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     674,   546,   547,   548,   549,     0,     0,     0,     0,   550,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2112,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,     0,     0,     0,     0,  1114,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,   674,   546,   547,   548,   549,     0,     0,     0,
       0,   550,     0,     0,     0,     0,     0,  1191,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   674,   546,   547,   548,   549,     0,     0,     0,     0,
     550,     0,     0,     0,     0,     0,  1260,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     674,   546,   547,   548,   549,     0,     0,     0,     0,   550,
       0,     0,     0,     0,     0,  1411,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,   674,
     546,   547,   548,   549,     0,     0,     0,     0,   550,     0,
       0,     0,     0,     0,  1479,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,     0,
       0,     0,     0,  1480,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   674,   546,   547,
     548,   549,     0,     0,     0,     0,   550,     0,     0,     0,
       0,     0,  1481,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   674,   546,   547,   548,
     549,     0,     0,     0,     0,   550,     0,     0,     0,     0,
       0,  1482,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   674,   546,   547,   548,   549,
       0,     0,     0,     0,   550,     0,     0,     0,     0,     0,
    1762,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   674,   546,   547,   548,   549,     0,
       0,     0,     0,   550,     0,     0,     0,     0,     0,  1773,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,     0,     0,     0,     0,  1809,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,   674,   546,   547,   548,   549,     0,     0,     0,
       0,   550,     0,     0,     0,     0,     0,  1844,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   674,   546,   547,   548,   549,     0,     0,     0,     0,
     550,     0,     0,     0,     0,     0,  1845,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     674,   546,   547,   548,   549,     0,     0,     0,     0,   550,
       0,     0,     0,     0,     0,  1846,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,   674,
     546,   547,   548,   549,     0,     0,     0,     0,   550,     0,
       0,     0,     0,     0,  1847,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,     0,
       0,     0,     0,  1849,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   674,   546,   547,
     548,   549,     0,     0,     0,     0,   550,     0,     0,     0,
       0,     0,  1872,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   674,   546,   547,   548,
     549,     0,     0,     0,     0,   550,     0,     0,     0,     0,
       0,  1887,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   674,   546,   547,   548,   549,
       0,     0,     0,     0,   550,     0,     0,     0,     0,     0,
    1941,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   674,   546,   547,   548,   549,     0,
       0,     0,     0,   550,     0,     0,     0,     0,     0,  1958,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,     0,     0,     0,     0,  1967,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,   674,   546,   547,   548,   549,     0,     0,     0,
       0,   550,     0,     0,     0,     0,     0,  1968,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   674,   546,   547,   548,   549,     0,     0,     0,     0,
     550,     0,     0,     0,     0,     0,  1989,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     674,   546,   547,   548,   549,     0,     0,     0,     0,   550,
       0,     0,     0,     0,     0,  2043,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,   674,
     546,   547,   548,   549,     0,     0,     0,     0,   550,     0,
       0,     0,     0,     0,  2085,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,     0,
       0,     0,     0,  2107,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   674,   546,   547,
     548,   549,     0,     0,     0,     0,   550,     0,     0,     0,
       0,     0,  2133,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   674,   546,   547,   548,
     549,     0,     0,     0,     0,   550,     0,     0,     0,     0,
       0,  2134,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   674,   546,   547,   548,   549,
       0,     0,     0,     0,   550,     0,     0,     0,     0,     0,
    2135,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   674,   546,   547,   548,   549,     0,
       0,     0,     0,   550,     0,     0,     0,     0,     0,  2136,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,     0,     0,     0,     0,  2137,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,   674,   546,   547,   548,   549,     0,     0,     0,
       0,   550,     0,     0,     0,     0,     0,  2138,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   674,   546,   547,   548,   549,     0,     0,     0,     0,
     550,     0,     0,     0,     0,   675,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,   674,
     546,   547,   548,   549,     0,     0,     0,     0,   550,     0,
       0,     0,     0,   892,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   674,   546,   547,
     548,   549,     0,     0,     0,     0,   550,     0,     0,     0,
       0,  1865,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   674,   546,   547,   548,   549,
       0,     0,     0,     0,   550,     0,   697,     0,   698,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,   674,   546,   547,   548,   549,     0,     0,     0,
       0,   550,     0,     0,     0,   950,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,   674,
     546,   547,   548,   549,     0,     0,     0,     0,   550,     0,
       0,     0,   996,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   674,   546,   547,   548,
     549,     0,     0,     0,     0,   550,     0,     0,     0,  1137,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,     0,     0,  1204,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     674,   546,   547,   548,   549,     0,     0,     0,     0,   550,
       0,     0,     0,  1205,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   674,   546,   547,
     548,   549,     0,     0,     0,     0,   550,     0,     0,     0,
    1209,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   674,   546,   547,   548,   549,     0,
       0,     0,     0,   550,     0,     0,     0,  1210,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   674,   546,   547,   548,   549,     0,     0,     0,     0,
     550,     0,     0,     0,  1296,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,     0,
       0,  1312,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   674,   546,   547,   548,   549,
       0,     0,     0,     0,   550,     0,     0,     0,  1511,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,   674,   546,   547,   548,   549,     0,     0,     0,
       0,   550,     0,     0,     0,  1643,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,   674,
     546,   547,   548,   549,     0,     0,     0,     0,   550,     0,
       0,     0,  1820,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   674,   546,   547,   548,
     549,     0,     0,     0,     0,   550,     0,     0,     0,  1873,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,   742,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,   746,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,   747,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,   749,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,   751,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,   752,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,   754,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,   756,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,   757,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,   758,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,   759,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,   760,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,   761,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,   763,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,   764,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,   765,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,   830,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,   863,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,   921,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,   939,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,   940,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,   941,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,   942,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,   948,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,   949,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,   981,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,   995,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,  1053,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,  1058,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,  1071,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,  1136,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,  1143,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,  1144,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,  1145,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,  1159,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,  1160,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,  1161,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,  1190,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,  1192,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,  1193,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,  1194,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,  1195,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,  1196,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,  1197,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,  1198,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,  1203,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,  1295,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,  1311,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,  1516,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,  1584,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,  1592,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,  1698,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,  1704,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,  1705,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,  1706,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,  1707,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,  1711,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,  1763,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,  1772,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,  1795,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,  1859,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,  1919,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,  1920,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550,     0,  2056,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   674,   546,   547,   548,   549,     0,     0,
       0,     0,   550,     0,  2104,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   674,   546,
     547,   548,   549,     0,     0,     0,     0,   550
};

static const yytype_int16 yycheck[] =
{
       3,   498,  1189,   283,   592,   593,   707,  1185,     4,     3,
    1631,   692,  1669,     5,  1671,     4,     4,     4,    21,   700,
       4,    21,   295,     5,   725,     5,     7,     5,     7,     4,
       4,     4,     4,     4,   132,   238,     5,     4,     6,     5,
     313,     6,     6,     4,    47,     4,     6,   226,   227,   148,
    1837,     4,   239,     4,    98,     4,   100,   244,     9,     6,
       4,     9,   242,     4,    97,     6,   246,   132,   247,   239,
       6,    74,   137,   138,   173,   226,   227,   247,     9,    82,
       6,   183,   184,   185,    87,   118,   226,   227,   132,     0,
     189,   190,     7,   226,   227,    98,   247,    84,    60,    61,
      14,    63,     6,   241,   377,     7,   379,   247,     9,   247,
     175,   155,  1733,   386,   247,     9,   239,   226,   227,   226,
     227,   186,   226,   227,   247,     9,   238,    97,   239,   132,
     241,   832,   235,   236,   137,   138,   247,     6,   247,   133,
     247,   244,   145,   247,   226,   227,     6,   644,   118,   646,
      91,   239,   238,   156,   240,   158,     6,   226,   227,   247,
     163,   243,     7,   235,   236,   168,   268,   269,   270,     7,
     226,   227,   175,     7,   226,   227,   179,   239,   247,   182,
     183,   184,   185,   186,   176,   247,   242,    97,   163,   164,
     165,   166,   239,   161,   241,   247,   161,   184,   176,  1986,
     247,   226,   227,   241,   306,   307,   308,   176,   239,   247,
     176,     7,   239,   239,   241,   241,   247,   188,   320,   321,
     247,   210,   247,   210,   173,   174,     6,   226,   227,   173,
     174,   234,   211,   212,   213,   214,   210,   210,   210,   238,
     238,  1862,   238,   242,   247,   240,   242,   250,   251,  1427,
     242,   251,   240,     6,   238,   242,   245,   210,   246,   210,
     242,   264,   242,   244,   267,   268,   269,   270,   243,   242,
     242,   238,   275,   276,   277,   242,     6,   238,   281,   238,
     283,   242,   242,   242,   235,   236,   239,   238,   241,   240,
     238,   242,   240,   244,  1915,   242,   211,   212,   213,   214,
     226,   227,   238,   306,   307,   308,   242,   238,   581,   240,
     583,   584,     6,   244,   995,   996,     4,   320,   321,   384,
     235,   236,   226,   227,   286,   287,   238,   600,    94,   244,
     242,    97,   294,   295,   235,   236,   238,   238,   240,   240,
     241,   235,   236,   244,   238,   238,   240,    47,   392,   242,
     244,   235,   236,     6,   238,   238,   240,   226,   227,   242,
     244,   221,   222,     6,  2021,   638,   211,   212,   213,   214,
     240,   221,   222,   211,   212,   213,   214,   211,   212,   213,
     214,   384,   226,   227,   239,   388,   389,   226,   227,   238,
     235,   236,   247,   226,   227,     6,     7,   235,   236,   226,
     227,   404,   675,   247,   226,   227,   238,   410,   247,   511,
     512,   513,   514,   239,   247,   211,   212,   213,   214,   243,
     247,   247,  1123,   247,  1125,   247,   429,   492,   238,   494,
     433,   496,   497,   239,  1135,   241,   226,   227,  2059,   235,
     236,   247,   226,   227,   132,   133,   134,   135,   226,   227,
     515,   516,     4,   239,   243,   241,   128,   247,   247,   147,
     243,   247,   150,   247,   247,   226,   227,   243,   238,   247,
    1151,   247,  1153,   145,  1155,   519,  1157,   480,    97,   179,
      99,   153,   154,   155,   487,   488,   247,   159,   160,   492,
     238,   494,   495,   496,   497,   498,   238,   500,   243,  2120,
     226,   227,   247,     6,     7,   226,   227,   510,   511,   512,
     513,   514,   515,   516,   517,   518,   238,   520,   518,   522,
     520,   247,   566,   567,   568,   569,   247,   231,   232,   128,
     226,   227,    91,   237,   234,    94,     8,   243,    97,    91,
      99,   247,   545,    95,  1245,   238,   145,   240,   551,   101,
     102,   247,   104,   105,   153,   154,   155,   235,   236,   238,
     159,   160,   226,   227,   242,   235,   236,   267,   226,   227,
     122,   243,   242,   576,   577,   275,   276,   277,   242,   238,
     645,   281,   647,   648,   649,   650,   651,   652,   238,   654,
     655,   656,   657,  1294,   692,   660,   661,   662,   592,   593,
     128,    94,   226,   227,    97,    91,   226,   227,    94,  1310,
     238,    97,   243,    99,   238,   659,   247,   145,   242,   622,
     623,   624,   242,   896,   238,   153,   154,   155,   590,   591,
     111,   159,   160,   595,    91,   238,   244,    94,   246,   242,
      97,   644,   645,   646,   647,   648,   649,   650,   651,   652,
     238,   654,   655,   656,   657,   658,   238,   660,   661,   662,
     663,   664,   238,   663,   667,   730,   242,   128,     6,   242,
     735,   226,   227,   228,   229,   230,   231,   232,    94,   132,
     133,    97,   237,    99,   145,   138,   243,   243,   388,   389,
     247,   247,   153,   154,   155,    97,   699,   741,   159,   160,
     239,   704,   241,   242,   404,   228,   229,   230,   231,   232,
       8,    97,   243,    99,   237,   243,   247,    91,   721,   722,
      94,   238,   243,    97,   727,    99,   247,   730,   132,   133,
     733,   243,   735,    94,   138,   247,    97,   243,    99,   238,
     743,   247,   745,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   859,   128,    94,   244,   237,    97,   247,    99,   243,
     243,   243,   238,   247,   247,   239,   242,   241,   242,   145,
     242,    97,   243,    99,     4,     5,   238,   153,   154,   155,
     242,    97,   243,   159,   160,   495,   247,   243,   801,   243,
      94,   247,   243,   247,  1485,   243,   247,   243,   243,   247,
     510,   247,   247,   243,   243,   243,  1497,   247,   247,   247,
     243,   243,   242,  2010,   247,   247,    46,    47,    48,    49,
      50,    51,    52,    53,    54,   244,   242,   238,   247,    59,
      60,    61,    62,   238,    97,   848,   243,    67,    68,    69,
     247,   243,    72,   243,    74,   247,   243,   247,   861,   243,
     247,    94,     4,   247,     6,    85,   869,  2045,    88,    94,
     243,   243,   243,    97,   247,   247,   247,   243,   243,     8,
     243,   243,   247,   243,   247,   247,  2073,   247,   243,   892,
     243,   243,   247,     4,   247,   247,   243,   995,   996,   243,
     247,     4,   243,   247,   243,   125,   247,   243,   247,   243,
     243,   247,     4,   247,   247,     4,  2094,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   238,   243,   899,   243,   237,
     247,   238,   247,   238,   906,   243,   238,   238,   910,     6,
       6,   240,   238,   997,     6,   240,   246,     6,   242,   246,
     238,  1026,     9,   238,   238,   238,   238,   238,   118,   238,
     238,   238,   192,   193,   194,   238,   242,   238,   238,   238,
     238,   238,   238,   203,   987,     4,   238,   207,   242,   209,
     210,   242,   242,   242,   238,   238,  1276,   238,  1001,   238,
     238,  1498,  1499,  1006,   238,     6,   238,     6,     6,   240,
    1013,  1014,  1015,  1016,   242,   235,   236,     6,     6,   242,
     242,   240,   242,  1026,   244,   240,   240,   176,  1616,  1617,
     242,   238,   238,   238,   238,   238,   238,     6,  1136,  1137,
     240,     6,     6,  1108,  1109,   242,     6,   242,  1051,  1052,
       7,  1054,     6,  1056,  1057,   242,  1059,     6,  1061,  1062,
    1063,  1064,  1065,  1066,  1067,  1068,  1069,   242,   247,  1072,
     243,    87,     4,     5,   239,   247,     7,     6,     6,     6,
     239,   242,    64,    64,    64,  1047,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,  1107,  1108,  1109,   237,   237,    64,
     239,   244,   241,     4,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     7,     7,     6,  1129,    59,    60,    61,
      62,     6,     6,   239,     6,    67,    68,    69,  1141,  1142,
      72,   242,    74,     7,     6,   173,     7,     6,     6,     6,
       6,   242,   242,    85,   241,   239,    88,   242,   244,   242,
     242,     7,     6,  1228,   240,   238,     4,  1232,   239,   869,
       6,     6,     6,     6,   240,     7,  1241,     7,  1243,   176,
       7,  1246,     7,   176,     7,     7,     7,     7,     7,   176,
       7,     7,     7,   125,     7,     7,  1199,  1295,  1296,  1472,
       7,     7,   242,  1476,     6,   239,   241,     7,   247,  1212,
    1213,  1214,  1492,   242,   247,   247,   242,   242,   242,   239,
    1223,   238,   244,     7,   247,  1228,     4,   242,   239,  1232,
       6,  1296,   239,   247,   247,   239,   239,   247,  1241,   247,
    1243,   128,   244,  1246,     7,     6,   246,   243,   243,     7,
       7,     7,   244,   239,  1257,   239,   247,   247,     9,     8,
     192,   193,   194,   239,   247,     7,   241,     6,   148,   243,
     242,   203,  1316,  1276,  1318,   207,     6,   209,   210,     4,
    1868,    46,    46,   244,     4,   238,   238,   987,   238,     7,
     238,     7,   238,  1296,    99,     7,   247,   244,   239,   238,
       7,     7,     7,     6,     4,  1802,  1006,   239,     7,   241,
       7,     7,     7,   158,     7,  1318,   109,     4,   163,   242,
       6,   238,     6,   168,     7,     6,  1329,     7,     7,     7,
       7,     7,  1335,     7,     7,   242,     6,   182,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,  1051,  1052,     6,  1054,   237,  1056,  1057,     6,  1059,
      97,  1061,  1062,  1063,  1064,  1065,  1066,  1067,  1068,  1069,
       7,     6,     6,     4,     4,     4,   245,   247,   243,   239,
     247,     6,     6,  1386,  1387,  1388,     6,  1485,   242,  1392,
     242,  1394,   242,  1396,     7,  1398,     6,  1400,  1401,  1402,
     240,     6,     6,  1683,     6,   242,     6,  1107,   247,   238,
     238,     6,     6,   244,  1417,   241,     6,     6,   242,   264,
     122,     6,   176,     6,   242,  1428,  1470,     6,   242,  1129,
       6,   242,   242,  1436,     6,     6,  1439,     6,     6,     6,
       6,  1141,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,  1523,     5,
     239,   247,   237,     6,  1426,   239,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   239,  1529,   238,     4,   237,  1492,
     239,     6,     4,  1591,   242,  1498,  1499,     6,   242,  1199,
       7,  1504,   242,     6,   242,   240,   242,     6,   242,   242,
     242,   242,  1212,  1213,  1214,   242,   242,     6,   242,     6,
    1523,     6,   172,     6,   247,   247,  1529,     6,   239,   244,
    1533,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   247,
       7,   242,     4,   237,     4,   247,   238,  1257,     6,     6,
       6,     6,     6,     6,    95,     7,   238,     6,  1612,     6,
       6,     6,     6,     5,   242,   239,   242,     6,     6,     6,
       6,  1543,     6,     6,     6,     6,   247,     6,     6,  1654,
       6,     6,  1657,   247,   239,   247,     6,     4,  1696,   242,
       6,     6,     6,   242,  1877,  1608,  1609,     7,  1652,   242,
       5,   243,     6,     6,   242,  1659,  1660,   243,  1318,   242,
       6,   242,  1616,  1617,     7,  1905,     6,   171,  1631,  1329,
       6,  1675,   239,     6,  1637,  1335,     7,   243,     6,     6,
     243,     6,   243,  1646,     6,   244,   242,     6,     6,     6,
       6,  1654,     6,     6,  1657,     6,   243,     6,   239,     6,
     242,    13,    14,   174,     6,   242,     6,     6,   243,  1672,
    1632,  1633,  1634,  1635,  1636,  1637,  1679,   522,   243,   238,
    1683,   242,  1685,   243,   242,   242,  1386,  1387,  1388,     6,
     128,   242,  1392,     6,  1394,     6,  1396,     6,  1398,  1972,
    1400,  1401,  1402,   242,   239,     6,     6,     6,     6,   243,
     243,     6,     6,     6,     6,     6,     6,  1417,   242,     6,
     242,     6,     6,   242,     6,     6,     6,     6,  1428,     6,
    1733,   576,   577,  2023,  1309,  1361,  1436,   426,  2011,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,  1537,  1838,  1597,   107,   108,   109,  1806,  1328,
     112,     3,     3,     3,  1808,     3,   118,   119,  1771,   565,
     122,   123,  1864,   125,   126,  1370,  1467,   622,   623,   624,
    1783,     3,  1679,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   144,  1796,    -1,    -1,    -1,    -1,  1842,  1802,
      -1,    -1,    -1,    -1,  1504,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   168,   169,   170,    -1,
      -1,    -1,   667,    -1,    -1,    -1,    -1,  1830,    -1,  1529,
      -1,    -1,    -1,    -1,    -1,    -1,  1839,    -1,    -1,    -1,
    1843,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   699,    -1,    -1,    -1,    -1,  1862,
      -1,    -1,  1865,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1876,  1868,    -1,   721,  1880,    -1,    -1,
      -1,    -1,   727,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   243,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1905,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1915,    -1,    -1,    -1,    -1,    -1,    -1,  1881,
    1882,  1883,  1884,  1885,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1631,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1945,  1987,    -1,    -1,  1646,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   801,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,
      -1,    -1,  1672,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1944,    -1,    -1,  1685,  1948,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,    -1,   848,    -1,    -1,   237,    -1,    -1,    -1,
    2013,  2014,  2015,  2016,  2017,    -1,   861,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1733,    -1,  1997,    -1,    -1,  2103,  2001,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   892,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2017,  2059,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2130,  2131,    -1,    -1,    -1,
      -1,  1771,    -1,    -1,    -1,  2078,    -1,    -1,    -1,    -1,
      -1,    -1,  2147,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2103,    -1,    -1,    -1,    -1,    -1,  2068,  2069,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   132,    -1,  2120,     6,   136,
      -1,    -1,    -1,   140,    -1,    -1,    -1,  2130,  2131,    -1,
    1830,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1839,
     157,   158,   159,   160,  2147,   162,   163,   164,   165,    -1,
     167,   168,   169,   170,   171,   172,   173,   174,    -1,   176,
     177,   178,  1862,    -1,    -1,   182,    -1,    -1,  1013,  1014,
    1015,  1016,    -1,    -1,    -1,    -1,  1876,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,    -1,    -1,    -1,    -1,   237,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1915,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1072,    -1,   246,
     247,   248,   249,   250,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1945,   263,   264,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   279,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   289,   290,    -1,    -1,    -1,    -1,   295,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1142,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   326,
      -1,    -1,    -1,   330,   331,   332,    -1,   334,    -1,    -1,
      -1,   338,   339,   340,    -1,    -1,   343,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,    -1,    -1,    -1,    -1,   237,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2059,
      -1,    -1,    -1,    -1,   381,    -1,    -1,    -1,   385,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1223,    -1,
      -1,    -1,    -1,    -1,   401,   402,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   415,    -1,
      -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   433,    -1,    -1,    -1,
    2120,    -1,   439,    -1,    -1,    -1,    -1,   444,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   458,    -1,    -1,    -1,    -1,    -1,   464,   465,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,   480,   481,   482,   483,   484,   485,   486,
     487,   488,    -1,   490,   491,   158,   493,    -1,    -1,    -1,
     163,    -1,   499,    -1,    -1,   168,   503,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,
     517,    -1,    -1,    -1,    -1,   522,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,    -1,   552,   553,    -1,    -1,    -1,
      -1,    -1,   559,   560,   561,    -1,    -1,    -1,    -1,   566,
     567,   568,   569,   570,    -1,   572,     6,   574,    -1,   576,
     577,    -1,    -1,    -1,   247,    -1,    -1,   250,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   595,   596,
     597,   264,    -1,    -1,   601,   602,   603,   604,   605,   606,
     607,   608,   609,    -1,  1439,    -1,    -1,   614,     6,   616,
      -1,   618,    -1,    -1,    -1,   622,   623,   624,    -1,    -1,
     627,   628,   629,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,    -1,    -1,    -1,    -1,   237,   653,    -1,    -1,    -1,
      -1,    -1,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     667,    -1,    -1,    -1,    -1,   672,    -1,   674,    -1,   676,
     677,    -1,    -1,    -1,    -1,    -1,   683,    -1,    -1,    -1,
      -1,    -1,   689,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   699,    -1,    -1,    -1,    -1,    -1,   705,   706,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       6,    -1,    -1,    -1,   721,    -1,   723,   724,    -1,    -1,
     727,   728,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   736,
      -1,    -1,    -1,   740,    -1,    -1,   743,    -1,   745,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,    -1,    -1,   766,
     433,   237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1608,  1609,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,   801,    -1,    -1,   237,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   480,    -1,    -1,
      -1,    -1,    -1,    -1,   487,   488,    -1,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,    -1,    -1,    -1,    -1,   237,
      -1,   848,    -1,    -1,   517,    -1,    -1,    -1,    -1,   522,
      -1,    -1,    -1,    -1,   861,    -1,    -1,    -1,    -1,    -1,
      -1,   868,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   545,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   892,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   900,   901,    -1,    -1,    -1,    -1,   906,
      -1,    -1,    -1,   576,   577,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   922,    -1,    -1,   925,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   944,    -1,   946,
     947,   237,    -1,     6,    -1,    -1,    -1,    -1,    -1,   622,
     623,   624,    -1,    -1,    -1,    -1,    -1,    -1,   965,    -1,
      -1,  1796,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   983,    -1,    -1,    -1,
      -1,    -1,    -1,   990,   991,   992,   993,    -1,    -1,    -1,
      -1,   998,    -1,    -1,   667,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1012,  1013,  1014,  1015,  1016,
    1017,    -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   699,    -1,    -1,    -1,
    1865,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1880,    -1,    -1,   721,    -1,
      -1,    -1,    -1,    -1,   727,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1072,    -1,    -1,    -1,    -1,
     743,    -1,   745,    -1,    -1,    -1,    -1,    -1,  1085,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1095,  1096,
    1097,    -1,    -1,    -1,    -1,  1102,  1103,    -1,  1105,    -1,
      -1,     6,    -1,    -1,    -1,    -1,  1113,    -1,  1115,  1116,
    1117,  1118,  1119,    -1,    -1,    -1,    -1,    -1,    -1,  1126,
      -1,    -1,    -1,    -1,    -1,  1132,  1133,    -1,   801,    -1,
      -1,    -1,  1139,    -1,    -1,  1142,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1152,    -1,  1154,    -1,  1156,
      -1,  1158,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
       7,     8,  1179,    -1,   237,   848,    -1,    -1,  2013,  2014,
    2015,  2016,  2017,    -1,    -1,    -1,    -1,    -1,   861,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1211,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1223,    -1,    -1,   892,
      -1,    -1,    -1,    -1,  1231,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,  2078,    -1,    -1,  1253,   237,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1267,     6,    -1,  1270,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,    -1,    -1,    -1,    -1,   237,    -1,     6,    -1,
    1297,    -1,    -1,    -1,    -1,    -1,    -1,  1304,  1305,  1306,
    1307,    -1,    -1,    -1,    -1,    -1,  1313,    -1,  1315,  1316,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1013,  1014,  1015,  1016,    -1,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,    -1,    -1,    -1,  1072,
     237,  1408,  1409,  1410,    -1,    -1,    -1,    -1,    -1,    -1,
    1417,    -1,  1419,    -1,    -1,    -1,    -1,    -1,    -1,  1426,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1439,    -1,    -1,    -1,    -1,  1444,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1452,  1453,  1454,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1462,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1471,    -1,    -1,    -1,    -1,  1142,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,  1496,
      -1,    -1,   237,    -1,    -1,  1502,  1503,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,    -1,    -1,    -1,    -1,   237,
      -1,    -1,   406,    -1,    -1,    -1,  1533,    -1,    -1,     6,
      -1,    -1,    -1,    -1,  1541,  1542,    -1,    -1,    -1,    -1,
      -1,  1548,  1549,    -1,    -1,    -1,    -1,    -1,  1555,    -1,
    1223,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1572,  1573,  1574,    -1,    -1,
      -1,    -1,    -1,  1580,  1581,  1582,  1583,    -1,    -1,    -1,
      -1,     6,    -1,  1590,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1599,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1608,  1609,  1610,    -1,  1612,    -1,    -1,    -1,    -1,
      -1,  1618,  1619,    -1,    -1,    -1,   500,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1637,    -1,    -1,    -1,  1641,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1652,    -1,    -1,  1655,    -1,
      -1,    -1,  1659,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1676,
      -1,    -1,   556,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1689,    -1,    -1,    -1,    -1,  1694,  1695,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1709,    -1,    -1,  1712,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,
      -1,    -1,    -1,    -1,   243,    -1,    -1,  1744,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,    -1,    -1,  1765,    -1,
     237,    -1,    -1,    -1,    -1,    -1,  1439,  1774,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1783,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1792,  1793,    -1,    -1,  1796,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1827,  1828,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1841,    -1,    -1,    -1,    -1,    -1,
      -1,  1848,    -1,    -1,    -1,    -1,    -1,  1854,  1855,  1856,
    1857,  1858,    -1,    -1,    -1,    -1,    -1,    -1,  1865,    -1,
    1533,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1880,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1888,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   773,
     774,   775,   776,   777,   778,   779,   780,   781,   782,   783,
      -1,   785,   786,   787,   788,  1912,   790,   791,   792,   793,
      -1,  1918,    -1,    -1,  1921,     6,    -1,    -1,    -1,    -1,
     804,    -1,   806,    -1,    -1,    -1,    -1,    -1,    -1,   813,
      -1,    -1,    -1,    -1,    -1,  1608,  1609,    -1,    -1,    -1,
     824,   825,    -1,    -1,    -1,    -1,  1953,    -1,    -1,   833,
      -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1637,    -1,    -1,    -1,    -1,    -1,
      -1,  1978,  1979,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1990,  1991,  1992,  1993,  1994,  1995,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2008,    -1,    -1,    -1,    -1,  2013,  2014,  2015,  2016,
    2017,    -1,    -1,    -1,    -1,    -1,  2023,    -1,    -1,    -1,
    2027,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2057,    -1,    -1,    -1,    -1,  2062,  2063,  2064,  2065,  2066,
    2067,    -1,    -1,    -1,    -1,    -1,    -1,   951,   952,   953,
      -1,  2078,    -1,   957,   958,    -1,    -1,   961,   962,   963,
     964,    -1,   966,    -1,    -1,    -1,    -1,   971,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2109,  2110,  2111,  2112,  2113,  2114,    -1,    -1,
    1783,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1796,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,    -1,    -1,    -1,    -1,   237,    -1,   132,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1045,  1046,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,    -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,
      -1,    -1,  1865,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     8,    -1,    -1,    -1,    -1,    -1,  1880,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,    -1,   222,   223,
      -1,    -1,    -1,    -1,   228,   229,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,   238,   239,    -1,    10,    11,    12,
      -1,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    67,    68,    69,    -1,    -1,    72,
      -1,    74,    75,    76,    77,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,    86,    -1,    88,    -1,    -1,    -1,    -1,
    2013,  2014,  2015,  2016,  2017,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   345,   346,   347,    -1,    -1,    -1,   351,   352,   353,
     354,   355,   356,   357,    -1,   359,    -1,    -1,    -1,   363,
     364,     8,    -1,   367,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1279,   380,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2078,    -1,    -1,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,    -1,    -1,    13,    14,
     237,    -1,    -1,  1317,    -1,    -1,    -1,    -1,   191,   192,
     193,   194,   195,    -1,    -1,    -1,    -1,   200,   201,   202,
     203,   204,   205,   206,   207,    -1,   209,   210,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1350,  1351,  1352,  1353,
    1354,    -1,    -1,   226,   227,  1359,  1360,    -1,  1362,    -1,
     233,    -1,    -1,    -1,  1368,   238,    -1,    -1,    -1,   242,
      -1,    -1,   245,    -1,    -1,    -1,    -1,    -1,    -1,  1383,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,    -1,
      -1,    -1,   107,   108,   109,    -1,    -1,   112,    -1,    -1,
      -1,    -1,    -1,   118,   119,    -1,    -1,   122,   123,    -1,
     125,   126,    -1,    -1,    -1,    -1,   530,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,   144,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1458,    -1,  1460,    -1,    -1,    -1,
    1464,    -1,  1466,   168,   169,   170,    -1,    -1,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,    -1,    -1,    -1,    -1,
     237,    -1,    -1,    -1,  1498,    -1,    -1,     3,     4,     5,
      -1,    -1,    -1,    -1,    10,    11,    12,    -1,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,   243,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    67,    68,    69,    -1,    -1,    72,    -1,    74,    75,
      76,    77,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,
      86,    -1,    88,    -1,    -1,    91,    -1,    -1,    94,    -1,
      -1,    97,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   118,    -1,   120,    -1,    -1,   123,    -1,   125,
      -1,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,
     136,    -1,    -1,   139,   140,   141,   142,   143,    -1,    -1,
      -1,   147,    -1,    -1,   150,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1687,  1688,   191,   192,   193,   194,   195,
     196,    -1,    -1,    -1,   200,   201,   202,   203,   204,   205,
     206,   207,     8,   209,   210,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     226,   227,    -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,
    1734,  1735,   238,    -1,    -1,    -1,   242,    -1,    -1,   245,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,    -1,
      -1,    -1,    10,    11,    12,    -1,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,  1800,  1801,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    67,
      68,    69,    -1,    -1,    72,    -1,    74,    75,    76,    77,
      -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,    -1,
      88,    -1,    -1,    91,    -1,    -1,    94,    -1,    -1,    97,
      -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     118,    -1,   120,    -1,    -1,   123,    -1,   125,     8,    -1,
      -1,    -1,    -1,    -1,   132,   133,   134,   135,   136,    -1,
      -1,   139,   140,   141,   142,   143,    -1,    -1,    -1,   147,
      -1,    -1,   150,    -1,    -1,    -1,    -1,     8,    -1,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,    -1,    -1,    -1,
      -1,   237,    -1,    -1,    -1,  1039,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   191,   192,   193,   194,   195,   196,    -1,
      -1,    -1,   200,   201,   202,   203,   204,   205,   206,   207,
      -1,   209,   210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,
      -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,    -1,    -1,
     238,     3,     4,     5,   242,     7,    -1,   245,    10,    11,
      12,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    67,    68,    69,    -1,    -1,
      72,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    83,    84,    85,    86,    -1,    88,    -1,    -1,    -1,
      -1,    -1,    -1,  2087,    -1,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,    -1,
      -1,    -1,    -1,   125,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,    -1,    -1,    -1,    -1,   237,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,    -1,    -1,    -1,    -1,   237,
      -1,   239,    -1,   241,    -1,    -1,    -1,    -1,    -1,   247,
      -1,    -1,   184,    -1,    -1,    -1,  1280,  1281,    -1,   191,
     192,   193,   194,   195,    -1,    -1,    -1,    -1,   200,   201,
     202,   203,   204,   205,   206,   207,    -1,   209,   210,   211,
     212,   213,   214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,   227,    -1,    -1,    -1,    -1,
      -1,   233,    -1,   235,   236,    -1,   238,    -1,   240,     3,
       4,     5,   244,   245,    -1,    -1,    10,    11,    12,    -1,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    58,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    -1,    -1,    13,    14,    -1,    83,
      84,    -1,    86,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      94,    -1,    -1,    97,    -1,    99,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,    -1,   120,    -1,    -1,   123,
      -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,   132,   133,
     134,   135,   136,    -1,    -1,   139,   140,   141,   142,   143,
      -1,    -1,    -1,   147,    -1,    -1,   150,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,    -1,    -1,    -1,
     107,   108,   109,    -1,    -1,   112,    -1,    -1,    -1,    -1,
      -1,   118,   119,    -1,    -1,   122,   123,   191,   125,   126,
      -1,   195,   196,    -1,    -1,    -1,   200,   201,   202,    -1,
     204,   205,   206,    -1,    -1,    -1,   210,   144,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   226,   227,    -1,    -1,    -1,    -1,    -1,   233,
      -1,   168,   169,   170,   238,     3,     4,     5,   242,    -1,
      -1,   245,    10,    11,    12,    -1,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      58,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   243,    75,    76,    77,
      -1,    -1,    13,    14,    -1,    83,    84,    -1,    86,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    94,    -1,    -1,    97,
      -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     118,    -1,   120,    -1,    -1,   123,    -1,   125,    -1,    -1,
      -1,    -1,    -1,    -1,   132,   133,   134,   135,   136,    -1,
      -1,   139,   140,   141,   142,   143,    -1,    -1,    -1,   147,
      -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,    -1,    -1,    -1,   107,   108,   109,    -1,
      -1,   112,    -1,    -1,    -1,    -1,    -1,   118,   119,    -1,
      -1,   122,   123,   191,   125,   126,    -1,   195,   196,    -1,
      -1,    -1,   200,   201,   202,    -1,   204,   205,   206,    -1,
      -1,    -1,   210,   144,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,
      -1,    -1,    -1,    -1,    -1,   233,    -1,   168,   169,   170,
     238,     3,     4,    -1,   242,    -1,    -1,   245,    10,    11,
      12,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   243,    75,    76,    77,    -1,    -1,    13,    14,
      -1,    83,    84,    -1,    86,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    94,    -1,    -1,    97,    -1,    99,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,   120,    -1,
      -1,   123,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,
     132,   133,   134,   135,   136,    -1,    -1,   139,   140,   141,
     142,   143,    -1,    -1,    -1,   147,    -1,    -1,   150,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,    -1,
      -1,    -1,   107,   108,   109,    -1,    -1,   112,    -1,    -1,
      -1,    -1,    -1,   118,   119,    -1,    -1,   122,   123,   191,
     125,   126,    -1,   195,   196,    -1,    -1,    -1,   200,   201,
     202,    -1,   204,   205,   206,    -1,    -1,    -1,   210,   144,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,   227,    -1,    -1,    -1,    -1,
      -1,   233,    -1,   168,   169,   170,   238,     3,     4,    -1,
     242,   243,    -1,   245,    10,    11,    12,    -1,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   243,    75,
      76,    77,    -1,    -1,    13,    14,    -1,    83,    84,    -1,
      86,    -1,    -1,    -1,    -1,    91,    -1,    -1,    94,    -1,
      -1,    97,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   118,    -1,   120,    -1,    -1,   123,    -1,   125,
      -1,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,
     136,    -1,    -1,   139,   140,   141,   142,   143,    -1,    -1,
      -1,   147,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,    -1,    -1,    -1,   107,   108,
     109,    -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,   118,
     119,    -1,    -1,   122,   123,   191,   125,   126,    -1,   195,
     196,    -1,    -1,    -1,   200,   201,   202,    -1,   204,   205,
     206,    -1,    -1,    -1,   210,   144,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     226,   227,    -1,    -1,    -1,    -1,    -1,   233,    -1,   168,
     169,   170,   238,     3,     4,    -1,   242,    -1,    -1,   245,
      10,    11,    12,    -1,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   243,    75,    76,    77,    -1,    -1,
      13,    14,    -1,    83,    84,    -1,    86,    -1,    -1,    -1,
      -1,    91,    -1,    -1,    94,    -1,    -1,    97,    -1,    99,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,
     120,    -1,    -1,   123,    -1,   125,    -1,    -1,    -1,    -1,
      -1,    -1,   132,   133,   134,   135,   136,    -1,    -1,   139,
     140,   141,   142,   143,    -1,    -1,    -1,   147,    -1,    -1,
     150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,    -1,    -1,    -1,   107,   108,   109,    -1,    -1,   112,
      -1,    -1,    -1,    -1,    -1,   118,   119,    -1,    -1,   122,
     123,   191,   125,   126,    -1,   195,   196,    -1,    -1,    -1,
     200,   201,   202,    -1,   204,   205,   206,    -1,    -1,    -1,
     210,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   226,   227,    -1,    -1,
      -1,    -1,    -1,   233,    -1,   168,   169,   170,   238,     3,
       4,    -1,   242,    -1,    -1,   245,    10,    11,    12,    -1,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    58,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     243,    75,    76,    77,    -1,    -1,    13,    14,    -1,    83,
      84,    -1,    86,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      94,    -1,    -1,    97,    -1,    99,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,    -1,   120,    -1,    -1,   123,
      -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,   132,   133,
     134,   135,   136,    -1,    -1,   139,   140,   141,   142,   143,
      -1,    -1,    -1,   147,    -1,    -1,   150,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,    -1,    -1,    -1,
     107,   108,   109,    -1,    -1,   112,    -1,    -1,    -1,    -1,
      -1,   118,   119,    -1,    -1,   122,   123,   191,   125,   126,
      -1,   195,   196,    -1,    -1,    -1,   200,   201,   202,    -1,
     204,   205,   206,    -1,    -1,    -1,   210,   144,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   226,   227,    -1,    -1,    -1,    -1,    -1,   233,
      -1,   168,   169,   170,   238,     3,     4,    -1,   242,    -1,
      -1,   245,    10,    11,    12,    -1,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      58,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   243,    75,    76,    77,
      -1,    -1,    13,    14,    -1,    83,    84,    -1,    86,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    94,    -1,    -1,    97,
      -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     118,    -1,   120,    -1,    -1,   123,    -1,   125,    -1,    -1,
      -1,    -1,    -1,    -1,   132,   133,   134,   135,   136,    -1,
      -1,   139,   140,   141,   142,   143,    -1,    -1,    -1,   147,
      -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,    -1,    -1,    -1,   107,   108,   109,    -1,
      -1,   112,    -1,    -1,    -1,    -1,    -1,   118,   119,    -1,
      -1,   122,   123,   191,   125,   126,    -1,   195,   196,    -1,
      -1,    -1,   200,   201,   202,    -1,   204,   205,   206,    -1,
      -1,    -1,   210,   144,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,
      -1,    -1,    -1,    -1,    -1,   233,    -1,   168,   169,   170,
     238,     3,     4,    -1,    -1,   243,    -1,   245,    10,    11,
      12,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   243,    75,    76,    77,    -1,    -1,    13,    14,
      -1,    83,    84,    -1,    86,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    94,    -1,    -1,    97,    -1,    99,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,   120,    -1,
      -1,   123,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,
     132,   133,   134,   135,   136,    -1,    -1,   139,   140,   141,
     142,   143,    -1,    -1,    -1,   147,    -1,    -1,   150,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,    -1,
      -1,    -1,   107,   108,   109,    -1,    -1,   112,    -1,    -1,
      -1,    -1,    -1,   118,   119,    -1,    -1,   122,   123,   191,
     125,   126,    -1,   195,   196,    -1,    -1,    -1,   200,   201,
     202,    -1,   204,   205,   206,    -1,    -1,    -1,   210,   144,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,   227,    -1,    -1,    -1,    -1,
      -1,   233,    -1,   168,   169,   170,   238,     3,     4,    -1,
     242,    -1,    -1,   245,    10,    11,    12,    -1,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   243,    75,
      76,    77,    -1,    -1,    13,    14,    -1,    83,    84,    -1,
      86,    -1,    -1,    -1,    -1,    91,    -1,    -1,    94,    -1,
      -1,    97,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   118,    -1,   120,    -1,    -1,   123,    -1,   125,
      -1,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,
     136,    -1,    -1,   139,   140,   141,   142,   143,    -1,    -1,
      -1,   147,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,    -1,    -1,    -1,   107,   108,
     109,    -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,   118,
     119,    -1,    -1,   122,   123,   191,   125,   126,    -1,   195,
     196,    -1,    -1,    -1,   200,   201,   202,    -1,   204,   205,
     206,    -1,    -1,    -1,   210,   144,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     226,   227,    -1,    -1,    -1,    -1,    -1,   233,    -1,   168,
     169,   170,   238,     3,     4,    -1,   242,    -1,    -1,   245,
      10,    11,    12,    -1,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   243,    75,    76,    77,    -1,    -1,
      13,    14,    -1,    83,    84,    -1,    86,    -1,    -1,    -1,
      -1,    91,    -1,    -1,    94,    -1,    -1,    97,    -1,    99,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,
     120,    -1,    -1,   123,    -1,   125,    -1,    -1,    -1,    -1,
      -1,    -1,   132,   133,   134,   135,   136,    -1,    -1,   139,
     140,   141,   142,   143,    -1,    -1,    -1,   147,    -1,    -1,
     150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,    -1,    -1,    -1,   107,   108,   109,    -1,    -1,   112,
      -1,    -1,    -1,    -1,    -1,   118,   119,    -1,    -1,   122,
     123,   191,   125,   126,    -1,   195,   196,    -1,    -1,    -1,
     200,   201,   202,    -1,   204,   205,   206,    -1,    -1,    -1,
     210,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   226,   227,    -1,    -1,
      -1,    -1,    -1,   233,    -1,   168,   169,   170,   238,     3,
       4,    -1,   242,    -1,    -1,   245,    10,    11,    12,    -1,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    58,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     243,    75,    76,    77,    -1,    -1,    13,    14,    -1,    83,
      84,    -1,    86,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      94,    -1,    -1,    97,    -1,    99,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,    -1,   120,    -1,    -1,   123,
      -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,   132,   133,
     134,   135,   136,    -1,    -1,   139,   140,   141,   142,   143,
      -1,    -1,    -1,   147,    -1,    -1,   150,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,    -1,    -1,    -1,
     107,   108,   109,    -1,    -1,   112,    -1,    -1,    -1,    -1,
      -1,   118,   119,    -1,    -1,   122,   123,   191,   125,   126,
      -1,   195,   196,    -1,    -1,    -1,   200,   201,   202,    -1,
     204,   205,   206,    -1,    -1,    -1,   210,   144,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   226,   227,    -1,    -1,    -1,    -1,    -1,   233,
      -1,   168,   169,   170,   238,     3,     4,    -1,   242,    -1,
      -1,   245,    10,    11,    12,    -1,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      58,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   243,    75,    76,    77,
      -1,    -1,    13,    14,    -1,    83,    84,    -1,    86,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    94,    -1,    -1,    97,
      -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     118,    -1,   120,    -1,    -1,   123,    -1,   125,    -1,    -1,
      -1,    -1,    -1,    -1,   132,   133,   134,   135,   136,    -1,
      -1,   139,   140,   141,   142,   143,    -1,    -1,    -1,   147,
      -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,    -1,    -1,    -1,   107,   108,   109,    -1,
      -1,   112,    -1,    -1,    -1,    -1,    -1,   118,   119,    -1,
      -1,   122,   123,   191,   125,   126,    -1,   195,   196,    -1,
     131,    -1,   200,   201,   202,    -1,   204,   205,   206,    -1,
      -1,    -1,   210,   144,    -1,    -1,    -1,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,
      -1,    -1,    -1,    -1,    -1,   233,    -1,   168,   169,   170,
     238,     3,     4,    -1,   242,    -1,    -1,   245,    10,    11,
      12,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    77,    -1,    -1,    13,    14,
      -1,    83,    84,    -1,    86,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    94,    -1,    -1,    97,    -1,    99,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,   120,    -1,
      -1,   123,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,
     132,   133,   134,   135,   136,    -1,    -1,   139,   140,   141,
     142,   143,    -1,    -1,    -1,   147,    -1,    -1,   150,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,    -1,
      -1,    -1,   107,   108,   109,    -1,    -1,   112,    -1,    -1,
      -1,    -1,    -1,   118,   119,    -1,    -1,   122,   123,   191,
     125,   126,    -1,   195,   196,    -1,    -1,    -1,   200,   201,
     202,    -1,   204,   205,   206,    -1,    -1,    -1,   210,   144,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,   227,    -1,    -1,    -1,    -1,
      -1,   233,    -1,   168,   169,   170,   238,     3,     4,     5,
     242,    -1,    -1,   245,    10,    11,    12,    -1,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    67,    68,    69,    -1,    -1,    72,    -1,    74,    75,
      76,    77,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,
      86,    -1,    88,     3,     4,     5,    -1,    -1,    -1,    -1,
      10,    11,    12,    -1,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    67,    68,    69,
      -1,    -1,    72,    -1,    74,    75,    76,    77,    -1,    -1,
      -1,    -1,    -1,    83,    84,    85,    86,    -1,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   191,   192,   193,   194,   195,
      -1,    -1,    -1,    -1,   200,   201,   202,   203,   204,   205,
     206,   207,    -1,   209,   210,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     226,   227,    -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,
      -1,    -1,   238,    -1,    -1,    -1,   242,    -1,    -1,   245,
      -1,    -1,    -1,    -1,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,    -1,
      -1,   191,   192,   193,   194,   195,   247,    -1,    -1,    -1,
     200,   201,   202,   203,   204,   205,   206,   207,    -1,   209,
     210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   226,   227,    -1,    -1,
      -1,    -1,    -1,   233,    -1,    -1,    -1,    -1,   238,     3,
       4,    -1,   242,    -1,    -1,   245,    10,    11,    12,    -1,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    58,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    -1,    -1,    -1,    -1,    -1,    83,
      84,    -1,    86,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      94,    -1,    -1,    97,    -1,    99,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,    -1,   120,    -1,    -1,   123,
      -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,   132,   133,
     134,   135,   136,    -1,    -1,   139,   140,   141,   142,   143,
      -1,    -1,    -1,   147,    -1,    -1,   150,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,    -1,    -1,    -1,    -1,   237,
      -1,    -1,    -1,    -1,    -1,   243,    -1,    -1,    -1,   247,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   191,    -1,    -1,
      -1,   195,   196,    -1,    -1,    -1,   200,   201,   202,    -1,
     204,   205,   206,    -1,    -1,    -1,   210,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   226,   227,    -1,    -1,    -1,    -1,    -1,   233,
      -1,    -1,    -1,    -1,   238,     3,     4,    -1,   242,    -1,
      -1,   245,    10,    11,    12,    -1,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      58,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,
      -1,    -1,    -1,    -1,    -1,    83,    84,    -1,    86,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    94,    -1,    -1,    97,
      -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     118,    -1,   120,    -1,    -1,   123,    -1,   125,    -1,    -1,
      -1,    -1,    -1,    -1,   132,   133,   134,   135,   136,    -1,
      -1,   139,   140,   141,   142,   143,    -1,    -1,    -1,   147,
      -1,    -1,   150,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,    -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,
      -1,   243,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   191,    -1,    -1,    -1,   195,   196,    -1,
      -1,    -1,   200,   201,   202,    -1,   204,   205,   206,    -1,
      -1,    -1,   210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,
      -1,    -1,    -1,    -1,    -1,   233,     3,     4,     5,    -1,
     238,    -1,    -1,    10,    11,    12,    -1,   245,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      67,    68,    69,    -1,    -1,    72,    -1,    74,    75,    76,
      77,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,
      -1,    88,     3,     4,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    -1,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    57,    58,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    -1,    -1,    -1,
      -1,    -1,    83,    84,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   191,   192,   193,   194,   195,    -1,
      -1,    -1,    -1,   200,   201,   202,   203,   204,   205,   206,
     207,    -1,   209,   210,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,
     227,    -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,    -1,
      -1,   238,    -1,    -1,    -1,    -1,    -1,    -1,   245,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,    -1,    -1,    -1,
      -1,   237,    -1,    -1,    -1,    -1,    -1,   243,    -1,    -1,
     191,   247,    -1,    -1,   195,    -1,    -1,    -1,    -1,   200,
     201,   202,    -1,   204,   205,   206,    -1,    -1,    -1,   210,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   226,   227,    -1,    -1,    -1,
      -1,    -1,   233,    -1,    -1,    -1,    -1,   238,     3,     4,
      -1,   242,    -1,    -1,   245,    10,    11,    12,    -1,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    58,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    76,    77,    -1,    -1,    -1,    -1,    -1,    83,    84,
      -1,    86,     3,     4,    -1,     6,    -1,    -1,    -1,    10,
      11,    12,    -1,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    57,    58,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    -1,    -1,    -1,
      -1,    -1,    83,    84,    -1,    86,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,    -1,    -1,   191,    -1,   237,    -1,
     195,    -1,    -1,    -1,    -1,   200,   201,   202,   247,   204,
     205,   206,    -1,    -1,    -1,   210,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   226,   227,    -1,    -1,    -1,    -1,    -1,   233,    -1,
      -1,    -1,    -1,   238,    -1,    -1,    -1,   242,    -1,    -1,
     245,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,    -1,
      -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,    -1,
     191,    -1,    -1,   247,   195,    -1,    -1,    -1,    -1,   200,
     201,   202,    -1,   204,   205,   206,    -1,    -1,    -1,   210,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   226,   227,    -1,    -1,    -1,
      -1,    -1,   233,     3,     4,    -1,     6,   238,    -1,    -1,
      10,    11,    12,    -1,   245,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    77,    -1,    -1,
      -1,    -1,    -1,    83,    84,    -1,    86,     3,     4,    -1,
       6,    -1,    -1,    -1,    10,    11,    12,    -1,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    77,    -1,    -1,    -1,    -1,    -1,    83,    84,    -1,
      86,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,    -1,
      -1,   191,    -1,   237,    -1,   195,    -1,    -1,    -1,    -1,
     200,   201,   202,   247,   204,   205,   206,    -1,    -1,    -1,
     210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   226,   227,    -1,    -1,
      -1,    -1,    -1,   233,    -1,    -1,    -1,    -1,   238,    -1,
      -1,    -1,    -1,    -1,    -1,   245,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,
      -1,    -1,    -1,    -1,    -1,   191,    -1,    -1,   247,   195,
      -1,    -1,    -1,    -1,   200,   201,   202,    -1,   204,   205,
     206,    -1,    -1,    -1,   210,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     226,   227,    -1,    -1,    -1,    -1,    -1,   233,     3,     4,
      -1,    -1,   238,    -1,    -1,    10,    11,    12,    -1,   245,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    58,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    76,    77,    -1,    -1,    -1,    -1,    -1,    83,    84,
      -1,    86,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
      -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   247,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     0,     1,    -1,    -1,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,   191,    -1,    -1,    -1,
     195,    -1,    -1,    -1,    -1,   200,   201,   202,    -1,   204,
     205,   206,    -1,    -1,    -1,   210,    -1,    -1,    -1,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   226,   227,    -1,    -1,    -1,    -1,    -1,   233,    64,
      65,    66,    -1,   238,    -1,    70,    71,    -1,    73,    -1,
     245,    -1,    -1,    78,    79,    -1,    81,    82,    -1,    84,
      -1,    -1,    -1,    -1,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,    -1,
      -1,   106,   107,   108,   109,   110,    -1,   112,    -1,   114,
     115,   116,   117,   118,   119,   120,    -1,   122,   123,   124,
     125,   126,   127,    -1,   129,   130,   131,   132,   133,   134,
     135,   136,   137,    -1,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,    -1,     4,
      -1,   156,   157,   158,    -1,    -1,    -1,   162,    13,    14,
      -1,    -1,   167,   168,   169,   170,    -1,    -1,   173,    -1,
     175,    -1,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,    -1,    -1,    -1,    44,
      45,    -1,   197,   198,   199,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   208,    -1,   210,    -1,    -1,    -1,    64,
      65,    66,    -1,    -1,    -1,    70,    71,    -1,    73,    -1,
      -1,    -1,    -1,    78,    79,    -1,    81,    82,    -1,    84,
      -1,    -1,    -1,    -1,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,    -1,
      -1,   106,   107,   108,   109,   110,    -1,   112,    -1,   114,
     115,   116,   117,   118,   119,   120,    -1,   122,   123,   124,
     125,   126,   127,    -1,   129,   130,   131,   132,   133,   134,
     135,   136,   137,    -1,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,    -1,    -1,
      -1,   156,   157,   158,    -1,    -1,    -1,   162,    -1,    -1,
      -1,    -1,   167,   168,   169,   170,     4,     5,   173,    -1,
     175,    -1,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,    -1,    -1,    -1,    -1,
      -1,    -1,   197,   198,   199,    -1,     4,     5,    -1,    -1,
      -1,    -1,    -1,   208,    -1,   210,    -1,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    -1,     4,     5,    -1,    67,
      68,    69,    -1,    -1,    72,    -1,    74,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    85,    -1,    -1,
      88,    59,    60,    61,    62,    -1,    -1,     5,    -1,    67,
      68,    69,    -1,    -1,    72,    -1,    74,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    85,    -1,    -1,
      88,    59,    60,    61,    62,    -1,    -1,   125,    -1,    67,
      68,    69,    -1,    -1,    72,    -1,    74,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    85,    -1,    -1,
      88,    59,    60,    61,    62,    -1,    -1,    -1,    -1,    67,
      68,    69,    -1,    -1,    72,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   192,   193,   194,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   203,    -1,    -1,    -1,   207,
      -1,   209,   210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   192,   193,   194,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   203,    -1,    -1,    -1,   207,
      -1,   209,   210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   192,   193,   194,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   203,    -1,    -1,    -1,   207,
      -1,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   192,   193,   194,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   203,    -1,    -1,    -1,   207,
      -1,   209,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
      -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   247,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,    -1,    -1,    -1,    -1,
     237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     247,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,    -1,
      -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,    -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   247,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,    -1,    -1,    -1,    -1,   237,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   247,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,    -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   247,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,    -1,    -1,    -1,
      -1,   237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   247,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
      -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   247,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,    -1,    -1,    -1,    -1,
     237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     247,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,    -1,
      -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,    -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   247,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,    -1,    -1,    -1,    -1,   237,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   247,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,    -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   247,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,    -1,    -1,    -1,
      -1,   237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   247,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
      -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   247,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,    -1,    -1,    -1,    -1,
     237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     247,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,    -1,
      -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,    -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   247,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,    -1,    -1,    -1,    -1,   237,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   247,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,    -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   247,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,    -1,    -1,    -1,
      -1,   237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   247,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
      -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   247,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,    -1,    -1,    -1,    -1,
     237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     247,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,    -1,
      -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,    -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   247,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,    -1,    -1,    -1,    -1,   237,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   247,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,    -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   247,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,    -1,    -1,    -1,
      -1,   237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   247,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
      -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   247,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,    -1,    -1,    -1,    -1,
     237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     247,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,    -1,
      -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,    -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   247,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,    -1,    -1,    -1,    -1,   237,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,   243,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,    -1,    -1,    -1,
      -1,   237,    -1,    -1,    -1,    -1,    -1,   243,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,    -1,    -1,    -1,    -1,
     237,    -1,    -1,    -1,    -1,    -1,   243,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,    -1,    -1,    -1,    -1,   237,
      -1,    -1,    -1,    -1,    -1,   243,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,
      -1,    -1,    -1,    -1,   243,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,    -1,
      -1,    -1,    -1,   243,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,    -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,
      -1,    -1,   243,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,    -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,
      -1,   243,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
      -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,
     243,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,    -1,
      -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,   243,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,   243,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,    -1,    -1,    -1,
      -1,   237,    -1,    -1,    -1,    -1,    -1,   243,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,    -1,    -1,    -1,    -1,
     237,    -1,    -1,    -1,    -1,    -1,   243,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,    -1,    -1,    -1,    -1,   237,
      -1,    -1,    -1,    -1,    -1,   243,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,
      -1,    -1,    -1,    -1,   243,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,    -1,
      -1,    -1,    -1,   243,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,    -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,
      -1,    -1,   243,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,    -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,
      -1,   243,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
      -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,
     243,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,    -1,
      -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,   243,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,   243,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,    -1,    -1,    -1,
      -1,   237,    -1,    -1,    -1,    -1,    -1,   243,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,    -1,    -1,    -1,    -1,
     237,    -1,    -1,    -1,    -1,    -1,   243,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,    -1,    -1,    -1,    -1,   237,
      -1,    -1,    -1,    -1,    -1,   243,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,
      -1,    -1,    -1,    -1,   243,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,    -1,
      -1,    -1,    -1,   243,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,    -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,
      -1,    -1,   243,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,    -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,
      -1,   243,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
      -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,
     243,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,    -1,
      -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,   243,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,   243,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,    -1,    -1,    -1,
      -1,   237,    -1,    -1,    -1,    -1,    -1,   243,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,    -1,    -1,    -1,    -1,
     237,    -1,    -1,    -1,    -1,   242,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,
      -1,    -1,    -1,   242,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,    -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,
      -1,   242,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
      -1,    -1,    -1,    -1,   237,    -1,   239,    -1,   241,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,    -1,    -1,    -1,
      -1,   237,    -1,    -1,    -1,   241,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,
      -1,    -1,   241,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,    -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,   241,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,    -1,    -1,   241,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,    -1,    -1,    -1,    -1,   237,
      -1,    -1,    -1,   241,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,    -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,
     241,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,    -1,
      -1,    -1,    -1,   237,    -1,    -1,    -1,   241,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,    -1,    -1,    -1,    -1,
     237,    -1,    -1,    -1,   241,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,    -1,
      -1,   241,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
      -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,   241,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,    -1,    -1,    -1,
      -1,   237,    -1,    -1,    -1,   241,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,
      -1,    -1,   241,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,    -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,   241,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,   239,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,   239,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,   239,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,   239,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,   239,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,   239,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,   239,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,   239,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,   239,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,   239,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,   239,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,   239,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,   239,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,   239,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,   239,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,   239,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,   239,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,   239,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,   239,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,   239,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,   239,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,   239,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,   239,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,   239,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,   239,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,   239,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,   239,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,   239,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,   239,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,   239,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,   239,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,   239,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,   237,    -1,   239,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,   249,   250,     6,     0,     4,    13,    14,    44,
      45,    64,    65,    66,    70,    71,    73,    78,    79,    81,
      82,    84,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   106,   107,   108,
     109,   110,   112,   114,   115,   116,   117,   118,   119,   120,
     122,   123,   124,   125,   126,   127,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   156,
     157,   158,   162,   167,   168,   169,   170,   173,   175,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   197,   198,   199,   208,   210,   251,   253,
     254,   274,   295,   296,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   314,   316,   317,   323,   324,   325,   326,
     332,   353,   354,   242,   246,    14,    97,   238,   238,     6,
     242,     6,     6,     6,     6,   238,     6,     6,   240,   240,
       4,   334,   354,   238,   240,   272,   272,   238,   242,   238,
     238,     4,   238,   242,   238,   238,     4,   238,   242,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   111,
      97,     6,   242,    91,    94,    97,   238,     3,    10,    11,
      12,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      55,    56,    57,    58,    63,    75,    76,    77,    83,    86,
      91,    94,    97,    99,   118,   123,   125,   191,   195,   196,
     200,   201,   202,   204,   205,   206,   226,   227,   233,   238,
     242,   245,   296,   307,   314,   316,   327,   328,   332,   334,
     341,   343,   354,   238,   242,    97,    97,   118,    94,    97,
      99,    91,    94,    97,    99,    94,    97,    99,    94,    97,
     238,    94,   148,   173,   189,   190,   242,   226,   227,   238,
     242,   338,   339,   338,   242,   242,   338,     4,    91,    95,
     101,   102,   104,   105,   122,   238,    97,    99,    97,    94,
       4,    84,   184,   242,   354,     4,     6,    91,    94,    97,
      94,    97,     4,     4,     4,     5,   238,   341,   342,     4,
     238,   238,   238,     4,   242,   345,   354,     4,   238,   238,
     238,     6,     6,   240,     5,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    59,    60,    61,    62,    67,    68,
      69,    72,    74,    85,    88,   192,   193,   194,   203,   207,
     209,   349,   354,   238,     4,   349,     5,   242,     5,   242,
      32,   227,   327,   354,   240,   238,   242,     6,   238,   242,
       6,   246,     7,   125,   184,   211,   212,   213,   214,   235,
     236,   238,   240,   244,   270,   271,   272,   327,   348,   349,
     354,     4,   296,   297,   298,   242,     6,   327,   348,   349,
     354,   348,   327,   348,   352,   276,   280,   238,   337,     9,
     349,   354,   327,   227,   327,   343,   344,   327,   327,   238,
     327,   344,   327,   327,   238,   327,   344,   327,   327,   327,
     327,   327,   327,   348,   327,   327,   327,   341,   238,   344,
     342,   342,   342,   348,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   238,   240,   272,
     272,   272,   272,   272,   272,   238,   272,   272,   238,   272,
     272,     5,   176,   242,     5,   176,     5,   176,     5,   176,
     118,    91,    94,    97,    99,   238,   272,   272,   238,   238,
     238,   327,   242,   327,   343,   327,   327,   243,   344,   334,
     354,     8,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     237,     9,   238,   240,   244,   271,   272,   327,   344,   238,
     238,   238,   341,   342,   342,   342,   238,   238,   238,   238,
     238,   341,   238,   341,   238,   341,   242,   242,   327,     4,
     341,   242,   345,   242,   242,   338,   338,   338,   327,   327,
     226,   227,   242,   242,   338,   226,   227,   238,   298,   338,
     242,   238,   242,   238,   238,   238,   238,   238,   238,   238,
     327,   342,   342,   342,   238,     4,   240,     6,   240,   298,
       6,     6,   242,   242,   242,   342,   342,   240,   240,   240,
     327,     6,     6,   327,   327,   327,   244,   327,   242,   176,
     327,   327,   327,   327,   272,   272,   272,   238,   238,   238,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     238,   238,   272,   238,   240,     6,     6,   242,     6,   298,
       6,   298,   272,   327,   228,   242,   238,   240,   348,   327,
     298,   341,   341,   242,   349,    91,    94,    97,    99,     7,
     327,   327,     4,   173,   174,   341,     6,   239,   241,   242,
     273,     6,   242,     6,     9,   238,   240,   244,   354,   243,
      91,    94,    97,    99,   118,   123,   126,   295,   327,     6,
     239,   247,     9,   238,   240,   244,   239,   247,   247,   239,
     247,   241,   247,   275,   241,   275,    87,   336,   333,   354,
     247,   247,   239,   228,   243,   247,   239,   239,   327,   239,
     243,   239,   239,   327,   239,   243,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,     7,   327,   243,     6,
       6,     6,   239,   327,   327,   327,   327,   327,   327,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     343,   327,   327,   327,   327,   327,   327,   327,   343,   343,
     354,   242,   327,   327,   348,   327,   348,   341,   348,   348,
     352,   327,   273,   354,    64,   327,    64,    64,    64,   342,
     342,   342,   342,   348,   348,   343,   334,   349,   334,   344,
     239,   243,   244,   272,   327,   327,   327,   327,   327,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   242,   327,
     343,   327,   327,   327,   327,   327,   354,   327,   327,     4,
     335,   242,   273,   239,   243,   327,   327,   327,     7,     7,
     320,   320,   289,   327,   349,   290,   327,   349,   291,   327,
     349,   292,   327,   349,   327,     6,   327,     6,   327,     6,
     344,   344,   242,   239,     6,   298,   242,   298,   298,   247,
     247,   247,   338,   338,   297,   297,   247,   327,   243,   311,
     247,   298,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   239,     7,   321,     6,     7,   327,     6,   327,   327,
     243,   344,   344,   344,     6,     6,   327,   327,   327,   239,
     239,   239,   239,   173,   247,   298,   242,     8,   239,   239,
     241,   352,   348,   352,   348,   348,   348,   348,   348,   348,
     327,   348,   348,   348,   348,   245,   351,   354,   349,   348,
     348,   348,   334,   354,   344,   243,   243,   327,   327,   298,
     241,   239,   131,   148,   315,   239,   243,   247,   327,     6,
     242,   242,   242,   242,   327,   239,   241,     7,   270,   271,
     244,     7,     6,   344,     7,   214,   270,   255,   354,   327,
     327,   335,   240,   242,   242,   242,   242,   238,   118,    94,
      97,    99,   243,     6,   221,   222,   252,   344,   354,   327,
     327,     4,   335,     6,   344,   327,     6,   348,     6,   354,
       6,   348,   327,   239,   240,   327,   349,     7,   176,   327,
     343,     7,     7,   239,     7,   176,     7,     7,   239,     7,
     176,     7,     7,     7,     7,     7,     7,     7,     7,     7,
     327,   239,   242,     6,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   247,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   247,   247,   247,   239,   241,
     241,   344,   247,   247,   273,   247,   273,   247,   247,   247,
     239,   329,   273,   242,   243,   242,   242,   242,   247,   247,
     273,   273,   239,   244,   239,   244,   247,   330,   243,     7,
     335,   273,     8,     8,   344,   244,   239,   241,   271,   238,
     344,     7,   242,   239,   239,   239,   327,   341,     4,   319,
       6,   239,   247,   239,   247,   239,   247,   239,   247,   239,
     239,   239,   243,   243,   344,   244,   243,   298,   243,   243,
     338,   327,   327,   243,   243,   327,   338,   128,   128,   145,
     153,   154,   155,   159,   160,   312,   313,   338,   243,   308,
     239,   243,   239,   239,   239,   239,   239,   239,   239,     7,
     327,     6,   327,   239,   241,   241,   243,   243,   243,   241,
     241,   247,     7,     7,     7,   244,   327,   243,   327,   327,
       7,   244,   273,   247,   273,   273,   239,   239,   247,   273,
     273,   247,   247,   273,   273,   273,   273,   327,   273,     9,
     350,   247,   239,   247,   273,   244,   247,   331,   241,   243,
     243,   246,     7,   148,     6,   327,   243,   242,     6,   341,
     243,   327,   327,   327,   327,     6,     7,   270,   271,   244,
     270,   271,   349,   327,     6,     4,   242,   346,   354,   243,
      46,    46,   341,     4,   163,   164,   165,   166,   243,   258,
     262,   265,   267,   268,   244,   239,   241,   238,   327,   344,
     344,   344,   344,   327,   238,   238,   238,   238,   348,   239,
     244,   239,   241,   238,   239,   247,     7,   272,     4,   283,
     284,   285,   273,   273,   338,    97,    99,   341,   341,     7,
     341,    97,    99,   341,   341,     7,   341,    99,   341,   341,
     341,   341,   341,   341,   341,   341,   341,     6,     7,   344,
     327,   327,   327,   327,   243,   327,   327,   327,   341,   348,
     348,   247,   282,   327,   327,   327,   327,   327,   327,   335,
     335,   327,   239,   341,   238,   327,   327,   243,   335,   271,
     244,   271,   327,   243,   341,   344,     7,     7,     7,   128,
     318,     6,   270,   327,   270,   327,   270,   327,   270,   327,
       7,     7,     7,     7,     7,   243,     4,   243,   247,   247,
     247,   243,   243,   109,     4,     6,   327,   242,     6,   238,
       6,   161,     6,   161,   243,   313,   247,   312,     7,     6,
       7,     7,     7,     7,     7,     7,     7,   341,     6,   242,
       6,     6,     6,    97,     7,     6,     6,   327,   341,   341,
     341,     4,   247,     8,     8,   239,     4,     4,   344,   348,
     327,   348,   245,   247,   286,   348,   348,   335,   348,   239,
     247,   242,   242,     6,   327,     6,   242,   341,   243,   243,
     243,   243,   243,   327,     6,     4,   173,   174,   327,     6,
       6,     6,     7,   345,   347,     6,   240,   273,   272,   272,
       6,   259,   238,   238,   242,   269,     6,   335,   244,   348,
     327,   241,   243,   243,   243,   243,   239,   327,   327,   327,
     327,     6,     6,   252,   335,   244,   327,     6,   327,   242,
     327,   349,   273,   242,   341,   349,   241,   247,     6,     6,
       6,   242,   242,   122,   294,   294,   341,     6,   242,   242,
       6,     6,   341,   176,   293,   242,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     5,   243,   273,   273,   273,
     273,   273,   247,   247,   247,   239,   273,   273,   284,   273,
     247,   247,   247,   247,   239,   273,   239,   330,     6,   239,
     238,     4,   239,   273,     6,   243,   341,   341,   341,     4,
       6,   341,   341,   341,   341,   341,   341,   341,   242,   242,
       7,     6,     7,   327,   327,   327,   242,   242,   242,   240,
       6,   327,   341,   327,     6,     6,   327,   338,   243,     5,
     341,   242,   242,   242,   242,   242,   242,   242,   341,     6,
     344,   242,   327,   241,     6,     6,   172,   327,   327,   327,
       6,     6,     7,   273,   247,   247,   273,   247,   327,     4,
     188,   287,   288,   273,   239,   273,   331,   349,   327,   298,
       6,   298,   247,     6,     6,     7,   270,   271,   244,     7,
       6,   345,   243,   247,   327,   270,   273,   352,   352,   238,
     327,   327,   340,   341,   242,   238,     4,     6,   239,     6,
       6,     6,     6,     6,   239,   239,   239,   239,   348,   238,
       4,   239,   247,   341,   349,     7,   281,   327,   343,   285,
     327,   327,   338,     6,     6,     6,   327,   327,     6,    95,
       6,   327,     5,   242,   327,   327,   327,   327,   327,   327,
     327,   239,   327,   271,   242,     6,   293,     6,   327,     6,
       6,     6,     6,     6,     4,     6,     6,   344,   344,   327,
     327,   349,   243,   239,   243,   247,   297,   297,   327,   327,
     243,   247,   239,   243,   247,     6,     6,   340,   338,   338,
     338,   338,   338,   227,   338,     6,   243,   327,     6,     6,
     341,   243,   247,     8,   243,   239,   242,   327,   349,   348,
     327,   348,   242,   327,   349,   349,   247,   239,   247,   243,
     315,   315,   341,   349,   327,     6,     4,   346,     6,   345,
     241,   341,     6,   273,   273,   256,   327,   247,   247,   243,
     247,   257,   327,   327,     6,   327,   327,   277,   279,   242,
     243,   247,     7,     7,   243,   243,   243,   243,   242,   243,
       5,   340,   273,   273,   247,   247,   247,   247,   247,   239,
     327,     6,   242,   243,   243,   242,     6,     6,   242,   327,
     243,   243,   243,   241,     6,   341,     7,   242,   327,   243,
     247,   247,   247,   247,   247,   247,     6,   243,   171,   327,
     327,   344,     6,     6,   239,   273,   273,   352,   288,   349,
     243,   243,   243,     6,     6,     7,     6,   244,     6,     6,
       6,   239,   247,   327,   327,   242,   341,   243,   247,   239,
     239,   247,   282,   286,   341,   327,   349,   354,     6,     6,
       6,     6,   327,     6,     6,   243,   327,   327,   327,   327,
     327,   243,   340,   132,   133,   138,   322,   132,   133,   322,
     344,   297,   243,   247,     6,   243,   341,   298,   243,     6,
     344,   338,   338,   338,   338,   338,   327,   243,   243,   243,
     243,   239,   242,     6,   345,   174,   260,   327,   247,   247,
     340,     6,   327,   327,   243,   243,   278,     7,   238,   243,
     242,   247,   247,   247,   247,   247,   243,   242,   338,   341,
       6,   242,   338,     6,   243,   243,   327,     6,   128,   243,
     309,   242,   243,   247,   247,   247,   247,   247,     6,     6,
       6,   298,     6,   242,   327,   327,   243,   247,   282,   349,
     239,   327,   327,   327,   327,   327,   327,     6,   338,     6,
     338,     6,     6,   243,   327,   312,   298,     6,   344,   344,
     344,   344,   338,   344,   315,   257,   239,   247,     6,   242,
     327,   243,   247,   247,   247,   247,   247,   247,   247,   247,
       6,   243,   243,   310,   243,   243,   243,   243,   247,   243,
     243,   243,   263,   327,   340,   243,   327,   327,   327,   327,
     327,   327,   338,   338,   312,     6,     6,     6,     6,   344,
       6,     6,     6,   242,   239,   243,     6,   243,   273,   247,
     247,   247,   247,   247,   247,   243,   243,   261,   348,   266,
     242,     6,   327,   327,   327,   327,   327,   327,     6,   243,
     247,   242,   340,   243,   243,   243,   243,   243,   243,     6,
     348,   264,   348,   243,     6,     6,   243,   247,     6,     6,
     348
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 260 "Gmsh.y"
    { yyerrok; return 1; ;}
    break;

  case 6:
#line 271 "Gmsh.y"
    { return 1; ;}
    break;

  case 7:
#line 272 "Gmsh.y"
    { return 1; ;}
    break;

  case 8:
#line 273 "Gmsh.y"
    { return 1; ;}
    break;

  case 9:
#line 275 "Gmsh.y"
    {
      factory = (yyvsp[(3) - (5)].c);
      if(factory == "OpenCASCADE"){
        if(!GModel::current()->getOCCInternals())
          GModel::current()->createOCCInternals();
        for(int dim = -2; dim <= 3; dim++)
          GModel::current()->getOCCInternals()->setMaxTag
            (dim, std::max(GModel::current()->getOCCInternals()->getMaxTag(dim),
                           GModel::current()->getGEOInternals()->getMaxTag(dim)));
      }
      else if(GModel::current()->getOCCInternals()){
        for(int dim = -2; dim <= 3; dim++)
          GModel::current()->getGEOInternals()->setMaxTag
            (dim, std::max(GModel::current()->getGEOInternals()->getMaxTag(dim),
                           GModel::current()->getOCCInternals()->getMaxTag(dim)));
      }
      Free((yyvsp[(3) - (5)].c));
    ;}
    break;

  case 10:
#line 293 "Gmsh.y"
    { return 1; ;}
    break;

  case 11:
#line 294 "Gmsh.y"
    { List_Delete((yyvsp[(1) - (1)].l)); return 1; ;}
    break;

  case 12:
#line 295 "Gmsh.y"
    { return 1; ;}
    break;

  case 13:
#line 296 "Gmsh.y"
    { return 1; ;}
    break;

  case 14:
#line 297 "Gmsh.y"
    { return 1; ;}
    break;

  case 15:
#line 298 "Gmsh.y"
    { return 1; ;}
    break;

  case 16:
#line 299 "Gmsh.y"
    { List_Delete((yyvsp[(1) - (1)].l)); return 1; ;}
    break;

  case 17:
#line 300 "Gmsh.y"
    { List_Delete((yyvsp[(1) - (1)].l)); return 1; ;}
    break;

  case 18:
#line 301 "Gmsh.y"
    { return 1; ;}
    break;

  case 19:
#line 302 "Gmsh.y"
    { return 1; ;}
    break;

  case 20:
#line 303 "Gmsh.y"
    { return 1; ;}
    break;

  case 21:
#line 304 "Gmsh.y"
    { return 1; ;}
    break;

  case 22:
#line 305 "Gmsh.y"
    { return 1; ;}
    break;

  case 23:
#line 306 "Gmsh.y"
    { return 1; ;}
    break;

  case 24:
#line 307 "Gmsh.y"
    { return 1; ;}
    break;

  case 25:
#line 308 "Gmsh.y"
    { return 1; ;}
    break;

  case 26:
#line 313 "Gmsh.y"
    {
      (yyval.c) = (char*)"w";
    ;}
    break;

  case 27:
#line 317 "Gmsh.y"
    {
      (yyval.c) = (char*)"a";
    ;}
    break;

  case 28:
#line 324 "Gmsh.y"
    {
      Msg::Direct((yyvsp[(3) - (5)].c));
      Free((yyvsp[(3) - (5)].c));
    ;}
    break;

  case 29:
#line 329 "Gmsh.y"
    {
      Msg::Error((yyvsp[(3) - (5)].c));
      Free((yyvsp[(3) - (5)].c));
    ;}
    break;

  case 30:
#line 334 "Gmsh.y"
    {
      std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(6) - (7)].c));
      FILE *fp = Fopen(tmp.c_str(), (yyvsp[(5) - (7)].c));
      if(!fp){
	yymsg(0, "Unable to open file '%s'", tmp.c_str());
      }
      else{
	fprintf(fp, "%s\n", (yyvsp[(3) - (7)].c));
	fclose(fp);
      }
      Free((yyvsp[(3) - (7)].c));
      Free((yyvsp[(6) - (7)].c));
    ;}
    break;

  case 31:
#line 348 "Gmsh.y"
    {
      char tmpstring[5000];
      int i = printListOfDouble((yyvsp[(3) - (7)].c), (yyvsp[(5) - (7)].l), tmpstring);
      if(i < 0)
	yymsg(0, "Too few arguments in Printf");
      else if(i > 0)
	yymsg(0, "%d extra argument%s in Printf", i, (i > 1) ? "s" : "");
      else
	Msg::Direct(tmpstring);
      Free((yyvsp[(3) - (7)].c));
      List_Delete((yyvsp[(5) - (7)].l));
    ;}
    break;

  case 32:
#line 361 "Gmsh.y"
    {
      char tmpstring[5000];
      int i = printListOfDouble((yyvsp[(3) - (7)].c), (yyvsp[(5) - (7)].l), tmpstring);
      if(i < 0)
	yymsg(0, "Too few arguments in Error");
      else if(i > 0)
	yymsg(0, "%d extra argument%s in Error", i, (i > 1) ? "s" : "");
      else
	Msg::Error(tmpstring);
      Free((yyvsp[(3) - (7)].c));
      List_Delete((yyvsp[(5) - (7)].l));
    ;}
    break;

  case 33:
#line 374 "Gmsh.y"
    {
      char tmpstring[5000];
      int i = printListOfDouble((yyvsp[(3) - (9)].c), (yyvsp[(5) - (9)].l), tmpstring);
      if(i < 0)
	yymsg(0, "Too few arguments in Printf");
      else if(i > 0)
	yymsg(0, "%d extra argument%s in Printf", i, (i > 1) ? "s" : "");
      else{
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(8) - (9)].c));
	FILE *fp = Fopen(tmp.c_str(), (yyvsp[(7) - (9)].c));
	if(!fp){
	  yymsg(0, "Unable to open file '%s'", tmp.c_str());
	}
	else{
	  fprintf(fp, "%s\n", tmpstring);
	  fclose(fp);
	}
      }
      Free((yyvsp[(3) - (9)].c));
      Free((yyvsp[(8) - (9)].c));
      List_Delete((yyvsp[(5) - (9)].l));
    ;}
    break;

  case 34:
#line 402 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(1) - (6)].c), "View") && ViewData->finalize()){
	ViewData->setName((yyvsp[(2) - (6)].c));
	ViewData->setFileName(gmsh_yyname);
	ViewData->setFileIndex(gmsh_yyviewindex++);
	new PView(ViewData);
      }
      else
	delete ViewData;
#endif
      Free((yyvsp[(1) - (6)].c)); Free((yyvsp[(2) - (6)].c));
    ;}
    break;

  case 35:
#line 416 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(2) - (6)].c), "View")){
	int index = (int)(yyvsp[(4) - (6)].d);
	if(index >= 0 && index < (int)PView::list.size())
	  new PView(PView::list[index], false);
        else
	  yymsg(0, "Unknown view %d", index);
      }
#endif
      Free((yyvsp[(2) - (6)].c));
    ;}
    break;

  case 36:
#line 429 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(2) - (6)].c), "View")){
	int index = (int)(yyvsp[(4) - (6)].d);
	if(index >= 0 && index < (int)PView::list.size())
	  new PView(PView::list[index], true);
        else
	  yymsg(0, "Unknown view %d", index);
      }
#endif
      Free((yyvsp[(2) - (6)].c));
    ;}
    break;

  case 37:
#line 442 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(2) - (8)].c), "View")){
	int index = (int)(yyvsp[(4) - (8)].d), index2 = (int)(yyvsp[(6) - (8)].d);
	if(index >= 0 && index < (int)PView::list.size() &&
           index2 >= 0 && index2 < (int)PView::list.size()){
          PView::list[index2]->setOptions(PView::list[index]->getOptions());
        }
        else
	  yymsg(0, "Unknown view %d or %d", index, index2);
      }
#endif
      Free((yyvsp[(2) - (8)].c));
    ;}
    break;

  case 38:
#line 460 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewData = new PViewDataList();
#endif
    ;}
    break;

  case 44:
#line 474 "Gmsh.y"
    { ViewCoord.push_back((yyvsp[(1) - (1)].d)); ;}
    break;

  case 45:
#line 476 "Gmsh.y"
    { ViewCoord.push_back((yyvsp[(3) - (3)].d)); ;}
    break;

  case 46:
#line 481 "Gmsh.y"
    { if(ViewValueList) ViewValueList->push_back((yyvsp[(1) - (1)].d)); ;}
    break;

  case 47:
#line 483 "Gmsh.y"
    { if(ViewValueList) ViewValueList->push_back((yyvsp[(3) - (3)].d)); ;}
    break;

  case 48:
#line 488 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strncmp((yyvsp[(1) - (1)].c), "SP", 2)){
	ViewValueList = &ViewData->SP; ViewNumList = &ViewData->NbSP;
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VP", 2)){
	ViewValueList = &ViewData->VP; ViewNumList = &ViewData->NbVP;
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TP", 2)){
	ViewValueList = &ViewData->TP; ViewNumList = &ViewData->NbTP;
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "SL", 2)){
	ViewValueList = &ViewData->SL; ViewNumList = &ViewData->NbSL;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_LIN);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VL", 2)){
	ViewValueList = &ViewData->VL; ViewNumList = &ViewData->NbVL;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_LIN);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TL", 2)){
	ViewValueList = &ViewData->TL; ViewNumList = &ViewData->NbTL;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_LIN);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "ST", 2)){
	ViewValueList = &ViewData->ST; ViewNumList = &ViewData->NbST;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_TRI);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VT", 2)){
	ViewValueList = &ViewData->VT; ViewNumList = &ViewData->NbVT;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_TRI);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TT", 2)){
	ViewValueList = &ViewData->TT; ViewNumList = &ViewData->NbTT;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_TRI);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "SQ", 2)){
	ViewValueList = &ViewData->SQ; ViewNumList = &ViewData->NbSQ;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_QUA);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VQ", 2)){
	ViewValueList = &ViewData->VQ; ViewNumList = &ViewData->NbVQ;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_QUA);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TQ", 2)){
	ViewValueList = &ViewData->TQ; ViewNumList = &ViewData->NbTQ;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_QUA);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "SS", 2)){
	ViewValueList = &ViewData->SS; ViewNumList = &ViewData->NbSS;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_TET);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VS", 2)){
	ViewValueList = &ViewData->VS; ViewNumList = &ViewData->NbVS;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_TET);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TS", 2)){
	ViewValueList = &ViewData->TS; ViewNumList = &ViewData->NbTS;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_TET);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "SH", 2)){
	ViewValueList = &ViewData->SH; ViewNumList = &ViewData->NbSH;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_HEX);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VH", 2)){
	ViewValueList = &ViewData->VH; ViewNumList = &ViewData->NbVH;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_HEX);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TH", 2)){
	ViewValueList = &ViewData->TH; ViewNumList = &ViewData->NbTH;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_HEX);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "SI", 2)){
	ViewValueList = &ViewData->SI; ViewNumList = &ViewData->NbSI;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_PRI);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VI", 2)){
	ViewValueList = &ViewData->VI; ViewNumList = &ViewData->NbVI;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_PRI);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TI", 2)){
	ViewValueList = &ViewData->TI; ViewNumList = &ViewData->NbTI;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_PRI);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "SY", 2)){
	ViewValueList = &ViewData->SY; ViewNumList = &ViewData->NbSY;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_PYR);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VY", 2)){
	ViewValueList = &ViewData->VY; ViewNumList = &ViewData->NbVY;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_PYR);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TY", 2)){
	ViewValueList = &ViewData->TY; ViewNumList = &ViewData->NbTY;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_PYR);
      }
      else{
	yymsg(0, "Unknown element type '%s'", (yyvsp[(1) - (1)].c));
	ViewValueList = 0; ViewNumList = 0;
      }
#endif
      ViewCoord.clear();
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 49:
#line 592 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(ViewValueList){
	for(int i = 0; i < 3; i++)
	  for(unsigned int j = 0; j < ViewCoord.size() / 3; j++)
	    ViewValueList->push_back(ViewCoord[3 * j + i]);
      }
#endif
    ;}
    break;

  case 50:
#line 602 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(ViewValueList) (*ViewNumList)++;
#endif
    ;}
    break;

  case 51:
#line 611 "Gmsh.y"
    {
#if defined(HAVE_POST)
      for(int i = 0; i < (int)strlen((yyvsp[(1) - (1)].c)) + 1; i++) ViewData->T2C.push_back((yyvsp[(1) - (1)].c)[i]);
#endif
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 52:
#line 618 "Gmsh.y"
    {
#if defined(HAVE_POST)
      for(int i = 0; i < (int)strlen((yyvsp[(3) - (3)].c)) + 1; i++) ViewData->T2C.push_back((yyvsp[(3) - (3)].c)[i]);
#endif
      Free((yyvsp[(3) - (3)].c));
    ;}
    break;

  case 53:
#line 628 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewData->T2D.push_back((yyvsp[(3) - (8)].d));
      ViewData->T2D.push_back((yyvsp[(5) - (8)].d));
      ViewData->T2D.push_back((yyvsp[(7) - (8)].d));
      ViewData->T2D.push_back(ViewData->T2C.size());
#endif
    ;}
    break;

  case 54:
#line 637 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewData->NbT2++;
#endif
    ;}
    break;

  case 55:
#line 646 "Gmsh.y"
    {
#if defined(HAVE_POST)
      for(int i = 0; i < (int)strlen((yyvsp[(1) - (1)].c)) + 1; i++) ViewData->T3C.push_back((yyvsp[(1) - (1)].c)[i]);
#endif
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 56:
#line 653 "Gmsh.y"
    {
#if defined(HAVE_POST)
      for(int i = 0; i < (int)strlen((yyvsp[(3) - (3)].c)) + 1; i++) ViewData->T3C.push_back((yyvsp[(3) - (3)].c)[i]);
#endif
      Free((yyvsp[(3) - (3)].c));
    ;}
    break;

  case 57:
#line 663 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewData->T3D.push_back((yyvsp[(3) - (10)].d)); ViewData->T3D.push_back((yyvsp[(5) - (10)].d));
      ViewData->T3D.push_back((yyvsp[(7) - (10)].d)); ViewData->T3D.push_back((yyvsp[(9) - (10)].d));
      ViewData->T3D.push_back(ViewData->T3C.size());
#endif
    ;}
    break;

  case 58:
#line 671 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewData->NbT3++;
#endif
    ;}
    break;

  case 59:
#line 681 "Gmsh.y"
    {
#if defined(HAVE_POST)
      int type =
	(ViewData->NbSL || ViewData->NbVL) ? TYPE_LIN :
	(ViewData->NbST || ViewData->NbVT) ? TYPE_TRI :
	(ViewData->NbSQ || ViewData->NbVQ) ? TYPE_QUA :
	(ViewData->NbSS || ViewData->NbVS) ? TYPE_TET :
	(ViewData->NbSY || ViewData->NbVY) ? TYPE_PYR :
	(ViewData->NbSI || ViewData->NbVI) ? TYPE_PRI :
      	(ViewData->NbSH || ViewData->NbVH) ? TYPE_HEX :
	0;
      ViewData->setInterpolationMatrices(type, ListOfListOfDouble2Matrix((yyvsp[(3) - (8)].l)),
                                         ListOfListOfDouble2Matrix((yyvsp[(6) - (8)].l)));
#endif
    ;}
    break;

  case 60:
#line 700 "Gmsh.y"
    {
#if defined(HAVE_POST)
      int type =
	(ViewData->NbSL || ViewData->NbVL) ? TYPE_LIN :
	(ViewData->NbST || ViewData->NbVT) ? TYPE_TRI :
	(ViewData->NbSQ || ViewData->NbVQ) ? TYPE_QUA :
	(ViewData->NbSS || ViewData->NbVS) ? TYPE_TET :
      	(ViewData->NbSH || ViewData->NbVH) ? TYPE_HEX :
	0;
      ViewData->setInterpolationMatrices(type, ListOfListOfDouble2Matrix((yyvsp[(3) - (14)].l)),
                                         ListOfListOfDouble2Matrix((yyvsp[(6) - (14)].l)),
                                         ListOfListOfDouble2Matrix((yyvsp[(9) - (14)].l)),
                                         ListOfListOfDouble2Matrix((yyvsp[(12) - (14)].l)));
#endif
    ;}
    break;

  case 61:
#line 719 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewValueList = &ViewData->Time;
#endif
    ;}
    break;

  case 62:
#line 725 "Gmsh.y"
    {
    ;}
    break;

  case 63:
#line 732 "Gmsh.y"
    { (yyval.i) = 0; ;}
    break;

  case 64:
#line 733 "Gmsh.y"
    { (yyval.i) = 1; ;}
    break;

  case 65:
#line 734 "Gmsh.y"
    { (yyval.i) = 2; ;}
    break;

  case 66:
#line 735 "Gmsh.y"
    { (yyval.i) = 3; ;}
    break;

  case 67:
#line 736 "Gmsh.y"
    { (yyval.i) = 4; ;}
    break;

  case 68:
#line 740 "Gmsh.y"
    { (yyval.i) = 1; ;}
    break;

  case 69:
#line 741 "Gmsh.y"
    { (yyval.i) = -1; ;}
    break;

  case 70:
#line 747 "Gmsh.y"
    { (yyval.c) = (char*)"("; ;}
    break;

  case 71:
#line 747 "Gmsh.y"
    { (yyval.c) = (char*)"["; ;}
    break;

  case 72:
#line 748 "Gmsh.y"
    { (yyval.c) = (char*)")"; ;}
    break;

  case 73:
#line 748 "Gmsh.y"
    { (yyval.c) = (char*)"]"; ;}
    break;

  case 77:
#line 758 "Gmsh.y"
    {
      Msg::SetOnelabNumber((yyvsp[(3) - (7)].c), (yyvsp[(5) - (7)].d));
      Free((yyvsp[(3) - (7)].c));
    ;}
    break;

  case 78:
#line 763 "Gmsh.y"
    {
      Msg::SetOnelabString((yyvsp[(3) - (7)].c), (yyvsp[(5) - (7)].c));
      Free((yyvsp[(3) - (7)].c));
      Free((yyvsp[(5) - (7)].c));
    ;}
    break;

  case 79:
#line 769 "Gmsh.y"
    {
      if(!gmsh_yysymbols.count((yyvsp[(1) - (4)].c)) && (yyvsp[(2) - (4)].i) && List_Nbr((yyvsp[(3) - (4)].l)) == 1){
        yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (4)].c));
      }
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (4)].c)]);
        if(!(yyvsp[(2) - (4)].i)) s.list = (List_Nbr((yyvsp[(3) - (4)].l)) != 1); // list if 0 or > 1 elements
        if(!s.list){ // single expression
          if(List_Nbr((yyvsp[(3) - (4)].l)) != 1){
            yymsg(0, "Cannot assign list to variable '%s'", (yyvsp[(1) - (4)].c));
          }
          else{
            double d;
            List_Read((yyvsp[(3) - (4)].l), 0, &d);
            if(s.value.empty()){
              if((yyvsp[(2) - (4)].i)) yymsg(1, "Uninitialized variable '%s'", (yyvsp[(1) - (4)].c));
              s.value.resize(1, 0.);
            }
            switch((yyvsp[(2) - (4)].i)){
            case 0 : s.value[0] = d; break;
            case 1 : s.value[0] += d; break;
            case 2 : s.value[0] -= d; break;
            case 3 : s.value[0] *= d; break;
            case 4 :
              if(d) s.value[0] /= d;
              else yymsg(0, "Division by zero in '%s /= %g'", (yyvsp[(1) - (4)].c), d);
              break;
            }
          }
        }
        else{
          // list of expressions; this is not recommended (should use [] or ()
          // notation instead)
          switch((yyvsp[(2) - (4)].i)){
          case 0: // affect
            s.value.clear(); // fall-through
          case 1: // append
            for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
              double d;
              List_Read((yyvsp[(3) - (4)].l), i, &d);
              s.value.push_back(d);
            }
            break;
          case 2: // remove
            for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
              double d;
              List_Read((yyvsp[(3) - (4)].l), i, &d);
              std::vector<double>::iterator it = std::find(s.value.begin(),
                                                           s.value.end(), d);
              if(it != s.value.end()) s.value.erase(it);
            }
            break;
          default:
            yymsg(0, "Operators *= and /= not available for lists");
            break;
          }
        }
      }
      Free((yyvsp[(1) - (4)].c));
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 80:
#line 831 "Gmsh.y"
    {
      if(!gmsh_yysymbols.count((yyvsp[(1) - (3)].c)))
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (3)].c));
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (3)].c)]);
        if(!s.list && s.value.empty())
          yymsg(0, "Uninitialized variable '%s'", (yyvsp[(1) - (3)].c));
        else if(!s.list)
          s.value[0] += (yyvsp[(2) - (3)].i);
        else
          yymsg(0, "Variable '%s' is a list", (yyvsp[(1) - (3)].c));
      }
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 81:
#line 846 "Gmsh.y"
    {
      gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (6)].c)]);
      s.list = true;
      double d;
      switch((yyvsp[(4) - (6)].i)){
      case 0: // affect
        s.value.clear(); // fall-through
      case 1: // append
        for(int i = 0; i < List_Nbr((yyvsp[(5) - (6)].l)); i++){
          List_Read((yyvsp[(5) - (6)].l), i, &d);
          s.value.push_back(d);
        }
        break;
      case 2: // remove
        for(int i = 0; i < List_Nbr((yyvsp[(5) - (6)].l)); i++){
          List_Read((yyvsp[(5) - (6)].l), i, &d);
          std::vector<double>::iterator it = std::find(s.value.begin(),
                                                       s.value.end(), d);
          if(it != s.value.end()) s.value.erase(it);
        }
        break;
      default:
        yymsg(0, "Operators *= and /= not available for lists");
        break;
      }
      Free((yyvsp[(1) - (6)].c));
      List_Delete((yyvsp[(5) - (6)].l));
    ;}
    break;

  case 82:
#line 875 "Gmsh.y"
    {
      assignVariables((yyvsp[(1) - (9)].c), (yyvsp[(4) - (9)].l), (yyvsp[(7) - (9)].i), (yyvsp[(8) - (9)].l));
      Free((yyvsp[(1) - (9)].c));
      List_Delete((yyvsp[(4) - (9)].l));
      List_Delete((yyvsp[(8) - (9)].l));
    ;}
    break;

  case 83:
#line 885 "Gmsh.y"
    {
      assignVariable((yyvsp[(1) - (7)].c), (int)(yyvsp[(3) - (7)].d), (yyvsp[(5) - (7)].i), (yyvsp[(6) - (7)].d));
      Free((yyvsp[(1) - (7)].c));
    ;}
    break;

  case 84:
#line 890 "Gmsh.y"
    {
      incrementVariable((yyvsp[(1) - (6)].c), (yyvsp[(3) - (6)].d), (yyvsp[(5) - (6)].i));
      Free((yyvsp[(1) - (6)].c));
    ;}
    break;

  case 85:
#line 898 "Gmsh.y"
    {
      assignVariable((yyvsp[(1) - (7)].c), (int)(yyvsp[(3) - (7)].d), (yyvsp[(5) - (7)].i), (yyvsp[(6) - (7)].d));
      Free((yyvsp[(1) - (7)].c));
    ;}
    break;

  case 86:
#line 903 "Gmsh.y"
    {
      incrementVariable((yyvsp[(1) - (6)].c), (yyvsp[(3) - (6)].d), (yyvsp[(5) - (6)].i));
      Free((yyvsp[(1) - (6)].c));
    ;}
    break;

  case 87:
#line 911 "Gmsh.y"
    {
      gmsh_yystringsymbols[(yyvsp[(1) - (4)].c)] = std::vector<std::string>(1, (yyvsp[(3) - (4)].c));
      Free((yyvsp[(1) - (4)].c));
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 88:
#line 920 "Gmsh.y"
    {
      gmsh_yystringsymbols[(yyvsp[(1) - (8)].c)] = std::vector<std::string>();
      Free((yyvsp[(1) - (8)].c));
    ;}
    break;

  case 89:
#line 925 "Gmsh.y"
    {
      std::vector<std::string> s;
      for(int i = 0; i < List_Nbr((yyvsp[(7) - (9)].l)); i++){
        char **c = (char**)List_Pointer((yyvsp[(7) - (9)].l), i);
        s.push_back(*c);
        Free(*c);
      }
      gmsh_yystringsymbols[(yyvsp[(1) - (9)].c)] = s;
      Free((yyvsp[(1) - (9)].c));
      List_Delete((yyvsp[(7) - (9)].l));
    ;}
    break;

  case 90:
#line 937 "Gmsh.y"
    {
      if(gmsh_yystringsymbols.count((yyvsp[(1) - (9)].c))){
        for(int i = 0; i < List_Nbr((yyvsp[(7) - (9)].l)); i++){
          char **c = (char**)List_Pointer((yyvsp[(7) - (9)].l), i);
          gmsh_yystringsymbols[(yyvsp[(1) - (9)].c)].push_back(*c);
          Free(*c);
        }
      }
      else
        yymsg(0, "Uninitialized variable '%s'", (yyvsp[(1) - (9)].c));
      Free((yyvsp[(1) - (9)].c));
      List_Delete((yyvsp[(7) - (9)].l));
    ;}
    break;

  case 91:
#line 954 "Gmsh.y"
    {
      std::string tmp((yyvsp[(5) - (6)].c));
      StringOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (6)].c), 0, (yyvsp[(3) - (6)].c), tmp);
      Free((yyvsp[(1) - (6)].c)); Free((yyvsp[(3) - (6)].c)); Free((yyvsp[(5) - (6)].c));
    ;}
    break;

  case 92:
#line 960 "Gmsh.y"
    {
      std::string tmp((yyvsp[(8) - (9)].c));
      StringOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (9)].c), (int)(yyvsp[(3) - (9)].d), (yyvsp[(6) - (9)].c), tmp);
      Free((yyvsp[(1) - (9)].c)); Free((yyvsp[(6) - (9)].c)); Free((yyvsp[(8) - (9)].c));
    ;}
    break;

  case 93:
#line 969 "Gmsh.y"
    {
      double d = 0.;
      if(NumberOption(GMSH_GET, (yyvsp[(1) - (6)].c), 0, (yyvsp[(3) - (6)].c), d)){
	switch((yyvsp[(4) - (6)].i)){
	case 0 : d = (yyvsp[(5) - (6)].d); break;
	case 1 : d += (yyvsp[(5) - (6)].d); break;
	case 2 : d -= (yyvsp[(5) - (6)].d); break;
	case 3 : d *= (yyvsp[(5) - (6)].d); break;
	case 4 :
	  if((yyvsp[(5) - (6)].d)) d /= (yyvsp[(5) - (6)].d);
	  else yymsg(0, "Division by zero in '%s.%s /= %g'", (yyvsp[(1) - (6)].c), (yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].d));
	  break;
	}
	NumberOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (6)].c), 0, (yyvsp[(3) - (6)].c), d);
      }
      Free((yyvsp[(1) - (6)].c)); Free((yyvsp[(3) - (6)].c));
    ;}
    break;

  case 94:
#line 987 "Gmsh.y"
    {
      double d = 0.;
      if(NumberOption(GMSH_GET, (yyvsp[(1) - (9)].c), (int)(yyvsp[(3) - (9)].d), (yyvsp[(6) - (9)].c), d)){
	switch((yyvsp[(7) - (9)].i)){
	case 0 : d = (yyvsp[(8) - (9)].d); break;
	case 1 : d += (yyvsp[(8) - (9)].d); break;
	case 2 : d -= (yyvsp[(8) - (9)].d); break;
	case 3 : d *= (yyvsp[(8) - (9)].d); break;
	case 4 :
	  if((yyvsp[(8) - (9)].d)) d /= (yyvsp[(8) - (9)].d);
	  else yymsg(0, "Division by zero in '%s[%d].%s /= %g'", (yyvsp[(1) - (9)].c), (int)(yyvsp[(3) - (9)].d), (yyvsp[(6) - (9)].c), (yyvsp[(8) - (9)].d));
	  break;
	}
	NumberOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (9)].c), (int)(yyvsp[(3) - (9)].d), (yyvsp[(6) - (9)].c), d);
      }
      Free((yyvsp[(1) - (9)].c)); Free((yyvsp[(6) - (9)].c));
    ;}
    break;

  case 95:
#line 1005 "Gmsh.y"
    {
      double d = 0.;
      if(NumberOption(GMSH_GET, (yyvsp[(1) - (5)].c), 0, (yyvsp[(3) - (5)].c), d)){
	d += (yyvsp[(4) - (5)].i);
	NumberOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (5)].c), 0, (yyvsp[(3) - (5)].c), d);
      }
      Free((yyvsp[(1) - (5)].c)); Free((yyvsp[(3) - (5)].c));
    ;}
    break;

  case 96:
#line 1014 "Gmsh.y"
    {
      double d = 0.;
      if(NumberOption(GMSH_GET, (yyvsp[(1) - (8)].c), (int)(yyvsp[(3) - (8)].d), (yyvsp[(6) - (8)].c), d)){
	d += (yyvsp[(7) - (8)].i);
	NumberOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (8)].c), (int)(yyvsp[(3) - (8)].d), (yyvsp[(6) - (8)].c), d);
      }
      Free((yyvsp[(1) - (8)].c)); Free((yyvsp[(6) - (8)].c));
    ;}
    break;

  case 97:
#line 1026 "Gmsh.y"
    {
      ColorOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (8)].c), 0, (yyvsp[(5) - (8)].c), (yyvsp[(7) - (8)].u));
      Free((yyvsp[(1) - (8)].c)); Free((yyvsp[(5) - (8)].c));
    ;}
    break;

  case 98:
#line 1031 "Gmsh.y"
    {
      ColorOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (11)].c), (int)(yyvsp[(3) - (11)].d), (yyvsp[(8) - (11)].c), (yyvsp[(10) - (11)].u));
      Free((yyvsp[(1) - (11)].c)); Free((yyvsp[(8) - (11)].c));
    ;}
    break;

  case 99:
#line 1039 "Gmsh.y"
    {
      GmshColorTable *ct = GetColorTable(0);
      if(!ct)
	yymsg(0, "View[%d] does not exist", 0);
      else{
	ct->size = List_Nbr((yyvsp[(5) - (6)].l));
	if(ct->size > COLORTABLE_NBMAX_COLOR)
	  yymsg(0, "Too many (%d>%d) colors in View[%d].ColorTable",
		ct->size, COLORTABLE_NBMAX_COLOR, 0);
	else
	  for(int i = 0; i < ct->size; i++) List_Read((yyvsp[(5) - (6)].l), i, &ct->table[i]);
	if(ct->size == 1){
	  ct->size = 2;
	  ct->table[1] = ct->table[0];
	}
      }
      Free((yyvsp[(1) - (6)].c));
      List_Delete((yyvsp[(5) - (6)].l));
    ;}
    break;

  case 100:
#line 1059 "Gmsh.y"
    {
      GmshColorTable *ct = GetColorTable((int)(yyvsp[(3) - (9)].d));
      if(!ct)
	yymsg(0, "View[%d] does not exist", (int)(yyvsp[(3) - (9)].d));
      else{
	ct->size = List_Nbr((yyvsp[(8) - (9)].l));
	if(ct->size > COLORTABLE_NBMAX_COLOR)
	  yymsg(0, "Too many (%d>%d) colors in View[%d].ColorTable",
		   ct->size, COLORTABLE_NBMAX_COLOR, (int)(yyvsp[(3) - (9)].d));
	else
	  for(int i = 0; i < ct->size; i++) List_Read((yyvsp[(8) - (9)].l), i, &ct->table[i]);
	if(ct->size == 1){
	  ct->size = 2;
	  ct->table[1] = ct->table[0];
	}
      }
      Free((yyvsp[(1) - (9)].c));
      List_Delete((yyvsp[(8) - (9)].l));
    ;}
    break;

  case 101:
#line 1082 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      if(!strcmp((yyvsp[(1) - (5)].c),"Background"))
	GModel::current()->getFields()->setBackgroundFieldId((int)(yyvsp[(4) - (5)].d));
      else if(!strcmp((yyvsp[(1) - (5)].c),"BoundaryLayer"))
	GModel::current()->getFields()->setBoundaryLayerFieldId((int)(yyvsp[(4) - (5)].d));
      else
	yymsg(0, "Unknown command '%s Field'", (yyvsp[(1) - (5)].c));
#endif
    ;}
    break;

  case 102:
#line 1093 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      if(!GModel::current()->getFields()->newField((int)(yyvsp[(3) - (7)].d), (yyvsp[(6) - (7)].c)))
	yymsg(0, "Cannot create field %i of type '%s'", (int)(yyvsp[(3) - (7)].d), (yyvsp[(6) - (7)].c));
#endif
      Free((yyvsp[(6) - (7)].c));
    ;}
    break;

  case 103:
#line 1101 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      Field *field = GModel::current()->getFields()->get((int)(yyvsp[(3) - (9)].d));
      if(field){
	FieldOption *option = field->options[(yyvsp[(6) - (9)].c)];
	if(option){
	  try { option->numericalValue((yyvsp[(8) - (9)].d)); }
	  catch(...){
	    yymsg(0, "Cannot assign a numerical value to option '%s' "
		  "in field %i of type '%s'", (yyvsp[(6) - (9)].c), (int)(yyvsp[(3) - (9)].d), field->getName());
	  }
	}
	else
	  yymsg(0, "Unknown option '%s' in field %i of type '%s'",
		(yyvsp[(6) - (9)].c), (int)(yyvsp[(3) - (9)].d), field->getName());
      }
      else
	yymsg(0, "No field with id %i", (int)(yyvsp[(3) - (9)].d));
#endif
      Free((yyvsp[(6) - (9)].c));
    ;}
    break;

  case 104:
#line 1123 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      Field *field = GModel::current()->getFields()->get((int)(yyvsp[(3) - (9)].d));
      if(field){
	FieldOption *option = field->options[(yyvsp[(6) - (9)].c)];
	if(option){
	  try { option->string((yyvsp[(8) - (9)].c)); }
	  catch (...){
	    yymsg(0, "Cannot assign a string value to  option '%s' "
		  "in field %i of type '%s'", (yyvsp[(6) - (9)].c), (int)(yyvsp[(3) - (9)].d), field->getName());
	  }
	}
	else
	  yymsg(0, "Unknown option '%s' in field %i of type '%s'",
		(yyvsp[(6) - (9)].c), (int)(yyvsp[(3) - (9)].d), field->getName());
      }
      else
	yymsg(0, "No field with id %i", (int)(yyvsp[(3) - (9)].d));
#endif
      Free((yyvsp[(6) - (9)].c));
      Free((yyvsp[(8) - (9)].c));
    ;}
    break;

  case 105:
#line 1146 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      Field *field = GModel::current()->getFields()->get((int)(yyvsp[(3) - (11)].d));
      if(field){
	FieldOption *option = field->options[(yyvsp[(6) - (11)].c)];
	if(option){
	  if (option->getType() == FIELD_OPTION_LIST) {
	    std::list<int> vl = option->list();
	    vl.clear();
	    for(int i = 0; i < List_Nbr((yyvsp[(9) - (11)].l)); i++){
	      double id;
	      List_Read((yyvsp[(9) - (11)].l), i, &id);
	      vl.push_back((int)id);
	    }
	    option->list(vl);
	  }
	  else {
	    std::list<double> vl = option->listdouble();
	    vl.clear();
	    for(int i = 0; i < List_Nbr((yyvsp[(9) - (11)].l)); i++){
	      double id;
	      List_Read((yyvsp[(9) - (11)].l), i, &id);
	      vl.push_back(id);
	    }
	    option->listdouble(vl);
	  }
	}
	else
	  yymsg(0, "Unknown option '%s' in field %i of type '%s'",
		(yyvsp[(6) - (11)].c), (int)(yyvsp[(3) - (11)].d), field->getName());
      }
      else
	yymsg(0, "No field with id %i", (int)(yyvsp[(3) - (11)].d));
#endif
      Free((yyvsp[(6) - (11)].c));
      List_Delete((yyvsp[(9) - (11)].l));
    ;}
    break;

  case 106:
#line 1184 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      Field *field = GModel::current()->getFields()->get((int)(yyvsp[(3) - (7)].d));
      if(field){
        FieldCallback *callback = field->callbacks[(yyvsp[(6) - (7)].c)];
        if(callback) {
          callback->run();
        }
        else
          yymsg(0, "Unknown callback '%s' in field %i of type '%s'",
              (yyvsp[(6) - (7)].c), (int)(yyvsp[(3) - (7)].d), field->getName());
      }
      else
	yymsg(0, "No field with id %i", (int)(yyvsp[(3) - (7)].d));
#endif
      Free((yyvsp[(6) - (7)].c));
    ;}
    break;

  case 107:
#line 1205 "Gmsh.y"
    {
#if defined(HAVE_PLUGINS)
      try {
	PluginManager::instance()->setPluginOption((yyvsp[(3) - (9)].c), (yyvsp[(6) - (9)].c), (yyvsp[(8) - (9)].d));
      }
      catch (...) {
	yymsg(0, "Unknown option '%s' or plugin '%s'", (yyvsp[(6) - (9)].c), (yyvsp[(3) - (9)].c));
      }
#endif
      Free((yyvsp[(3) - (9)].c)); Free((yyvsp[(6) - (9)].c));
    ;}
    break;

  case 108:
#line 1217 "Gmsh.y"
    {
#if defined(HAVE_PLUGINS)
      try {
	PluginManager::instance()->setPluginOption((yyvsp[(3) - (9)].c), (yyvsp[(6) - (9)].c), (yyvsp[(8) - (9)].c));
      }
      catch (...) {
	yymsg(0, "Unknown option '%s' or plugin '%s'", (yyvsp[(6) - (9)].c), (yyvsp[(3) - (9)].c));
      }
#endif
      Free((yyvsp[(3) - (9)].c)); Free((yyvsp[(6) - (9)].c)); Free((yyvsp[(8) - (9)].c));
    ;}
    break;

  case 112:
#line 1235 "Gmsh.y"
    {
      std::string key((yyvsp[(3) - (3)].c));
      std::vector<double> val(1, 0.);
      if(!gmsh_yysymbols.count(key)){
        gmsh_yysymbols[key].value = val;
      }
      Free((yyvsp[(3) - (3)].c));
    ;}
    break;

  case 113:
#line 1244 "Gmsh.y"
    {
      std::string key((yyvsp[(3) - (5)].c));
      std::vector<double> val(1, (yyvsp[(5) - (5)].d));
      if(!gmsh_yysymbols.count(key)){
        gmsh_yysymbols[key].value = val;
      }
      Free((yyvsp[(3) - (5)].c));
    ;}
    break;

  case 114:
#line 1253 "Gmsh.y"
    { init_options(); ;}
    break;

  case 115:
#line 1255 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(6) - (9)].l)) != 1)
	yymsg(1, "List notation should be used to define list '%s[]'", (yyvsp[(3) - (9)].c));
      std::string key((yyvsp[(3) - (9)].c));
      std::vector<double> val;
      for(int i = 0; i < List_Nbr((yyvsp[(6) - (9)].l)); i++){
        double d;
        List_Read((yyvsp[(6) - (9)].l), i, &d);
        val.push_back(d);
      }
      if(!gmsh_yysymbols.count(key)){
        Msg::ExchangeOnelabParameter(key, val, floatOptions, charOptions);
        gmsh_yysymbols[key].value = val;
      }
      Free((yyvsp[(3) - (9)].c));
      Free((yyvsp[(6) - (9)].l));
    ;}
    break;

  case 116:
#line 1273 "Gmsh.y"
    { init_options(); ;}
    break;

  case 117:
#line 1275 "Gmsh.y"
    {
      std::string key((yyvsp[(3) - (11)].c));
      std::vector<double> val;
      for(int i = 0; i < List_Nbr((yyvsp[(8) - (11)].l)); i++){
        double d;
        List_Read((yyvsp[(8) - (11)].l), i, &d);
        val.push_back(d);
      }
      if(!gmsh_yysymbols.count(key)){
        Msg::ExchangeOnelabParameter(key, val, floatOptions, charOptions);
        gmsh_yysymbols[key].value = val;
      }
      Free((yyvsp[(3) - (11)].c));
      Free((yyvsp[(8) - (11)].l));
    ;}
    break;

  case 118:
#line 1291 "Gmsh.y"
    {
      std::string key((yyvsp[(3) - (5)].c)), val((yyvsp[(5) - (5)].c));
      if(!gmsh_yystringsymbols.count(key)){
        gmsh_yystringsymbols[key] = std::vector<std::string>(1, val);
      }
      Free((yyvsp[(3) - (5)].c));
      Free((yyvsp[(5) - (5)].c));
    ;}
    break;

  case 119:
#line 1300 "Gmsh.y"
    { init_options(); ;}
    break;

  case 120:
#line 1302 "Gmsh.y"
    {
      std::string key((yyvsp[(3) - (9)].c)), val((yyvsp[(6) - (9)].c));
      if(!gmsh_yysymbols.count(key)){
        Msg::ExchangeOnelabParameter(key, val, floatOptions, charOptions);
        gmsh_yystringsymbols[key] = std::vector<std::string>(1, val);
      }
      Free((yyvsp[(3) - (9)].c));
      Free((yyvsp[(6) - (9)].c));
    ;}
    break;

  case 122:
#line 1316 "Gmsh.y"
    {
      std::string name((yyvsp[(3) - (3)].c));
      Msg::UndefineOnelabParameter(name);
      Free((yyvsp[(3) - (3)].c));
    ;}
    break;

  case 123:
#line 1324 "Gmsh.y"
    {
      (yyval.l) = List_Create(20,20,sizeof(doubleXstring));
      doubleXstring v = {(yyvsp[(1) - (3)].d), (yyvsp[(3) - (3)].c)};
      List_Add((yyval.l), &v);
    ;}
    break;

  case 124:
#line 1330 "Gmsh.y"
    {
      doubleXstring v = {(yyvsp[(3) - (5)].d), (yyvsp[(5) - (5)].c)};
      List_Add((yyval.l), &v);
    ;}
    break;

  case 125:
#line 1335 "Gmsh.y"
    {
      (yyval.l) = List_Create(20,20,sizeof(doubleXstring));
      int n = List_Nbr((yyvsp[(1) - (5)].l));
      if(!gmsh_yystringsymbols.count((yyvsp[(3) - (5)].c))){
	yymsg(0, "Unknown string variable '%s'", (yyvsp[(3) - (5)].c));
      }
      else{
        std::vector<std::string> &s(gmsh_yystringsymbols[(yyvsp[(3) - (5)].c)]);
        int m = s.size();
        if(n == m){
          for(int i = 0; i < n; i++){
            double d;
            List_Read((yyvsp[(1) - (5)].l), i, &d);
            doubleXstring v = {d, strsave((char*)s[i].c_str())};
            List_Add((yyval.l), &v);
          }
        }
        else{
          yymsg(0, "Size mismatch in enumeration: %d != %d", n, m);
        }
      }
      List_Delete((yyvsp[(1) - (5)].l));
    ;}
    break;

  case 132:
#line 1377 "Gmsh.y"
    {
      std::string key((yyvsp[(1) - (2)].c));
      for(int i = 0; i < List_Nbr((yyvsp[(2) - (2)].l)); i++){
        double v;
        List_Read((yyvsp[(2) - (2)].l), i, &v);
        floatOptions[key].push_back(v);
        if (flag_Enum && !i) { member_ValMax = (int)v; }
      }
      Free((yyvsp[(1) - (2)].c));
      List_Delete((yyvsp[(2) - (2)].l));
    ;}
    break;

  case 133:
#line 1389 "Gmsh.y"
    {
      std::string key((yyvsp[(1) - (1)].c));
      double v;
      if (!flag_Enum) {
        v = 1.;
        if (key == "Enum") flag_Enum = 1;
      }
      else
        v = (double)++member_ValMax;
      floatOptions[key].push_back(v);
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 134:
#line 1402 "Gmsh.y"
    {
      std::string key((yyvsp[(1) - (4)].c));
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
        doubleXstring v;
        List_Read((yyvsp[(3) - (4)].l), i, &v);
        floatOptions[key].push_back(v.d);
        charOptions[key].push_back(v.s);
      }
      Free((yyvsp[(1) - (4)].c));
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++)
        Free(((doubleXstring*)List_Pointer((yyvsp[(3) - (4)].l), i))->s);
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 135:
#line 1417 "Gmsh.y"
    {
      std::string key((yyvsp[(1) - (2)].c));
      std::string val((yyvsp[(2) - (2)].c));
      charOptions[key].push_back(val);
      Free((yyvsp[(1) - (2)].c));
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 140:
#line 1439 "Gmsh.y"
    {
      std::string key((yyvsp[(1) - (2)].c));
      double val = (yyvsp[(2) - (2)].d);
      floatOptions[key].push_back(val);
      Free((yyvsp[(1) - (2)].c));
    ;}
    break;

  case 141:
#line 1447 "Gmsh.y"
    {
      std::string key((yyvsp[(1) - (2)].c));
      std::string val((yyvsp[(2) - (2)].c));
      charOptions[key].push_back(val);
      Free((yyvsp[(1) - (2)].c));
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 142:
#line 1456 "Gmsh.y"
    {
      std::string key("Macro");
      std::string val((yyvsp[(2) - (2)].c));
      charOptions[key].push_back(val);
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 143:
#line 1464 "Gmsh.y"
    {
      std::string key((yyvsp[(1) - (4)].c));
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
        char *s;
        List_Read((yyvsp[(3) - (4)].l), i, &s);
        std::string val(s);
        Free(s);
        charOptions[key].push_back(val);
      }
      Free((yyvsp[(1) - (4)].c));
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 144:
#line 1482 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(1) - (1)].d);
    ;}
    break;

  case 145:
#line 1486 "Gmsh.y"
    {
      int t = GModel::current()->getGEOInternals()->getMaxPhysicalTag();
      GModel::current()->getGEOInternals()->setMaxPhysicalTag(t + 1);
      (yyval.i) = GModel::current()->setPhysicalName(std::string((yyvsp[(1) - (1)].c)), 0, t + 1);
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 146:
#line 1493 "Gmsh.y"
    {
      (yyval.i) = GModel::current()->setPhysicalName(std::string((yyvsp[(1) - (3)].c)), 0, (yyvsp[(3) - (3)].d));
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 147:
#line 1501 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(1) - (1)].d);
    ;}
    break;

  case 148:
#line 1505 "Gmsh.y"
    {
      int t = GModel::current()->getGEOInternals()->getMaxPhysicalTag();
      GModel::current()->getGEOInternals()->setMaxPhysicalTag(t + 1);
      (yyval.i) = GModel::current()->setPhysicalName(std::string((yyvsp[(1) - (1)].c)), 1, t + 1);
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 149:
#line 1512 "Gmsh.y"
    {
      (yyval.i) = GModel::current()->setPhysicalName(std::string((yyvsp[(1) - (3)].c)), 1, (yyvsp[(3) - (3)].d));
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 150:
#line 1520 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(1) - (1)].d);
    ;}
    break;

  case 151:
#line 1524 "Gmsh.y"
    {
      int t = GModel::current()->getGEOInternals()->getMaxPhysicalTag();
      GModel::current()->getGEOInternals()->setMaxPhysicalTag(t + 1);
      (yyval.i) = GModel::current()->setPhysicalName(std::string((yyvsp[(1) - (1)].c)), 2, t + 1);
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 152:
#line 1531 "Gmsh.y"
    {
      (yyval.i) = GModel::current()->setPhysicalName(std::string((yyvsp[(1) - (3)].c)), 2, (yyvsp[(3) - (3)].d));
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 153:
#line 1539 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(1) - (1)].d);
    ;}
    break;

  case 154:
#line 1543 "Gmsh.y"
    {
      int t = GModel::current()->getGEOInternals()->getMaxPhysicalTag();
      GModel::current()->getGEOInternals()->setMaxPhysicalTag(t + 1);
      (yyval.i) = GModel::current()->setPhysicalName(std::string((yyvsp[(1) - (1)].c)), 3, t + 1);
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 155:
#line 1550 "Gmsh.y"
    {
      (yyval.i) = GModel::current()->setPhysicalName(std::string((yyvsp[(1) - (3)].c)), 3, (yyvsp[(3) - (3)].d));
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 156:
#line 1558 "Gmsh.y"
    {
      (yyval.i) = -1;
    ;}
    break;

  case 157:
#line 1562 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(4) - (5)].d);
    ;}
    break;

  case 158:
#line 1568 "Gmsh.y"
    {
      for(int i = 0; i < 4; i++) (yyval.v)[i] = 0.;
    ;}
    break;

  case 159:
#line 1572 "Gmsh.y"
    {
      for(int i = 0; i < 4; i++) (yyval.v)[i] = (yyvsp[(2) - (2)].v)[i];
    ;}
    break;

  case 160:
#line 1579 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      double x = CTX::instance()->geom.scalingFactor * (yyvsp[(6) - (7)].v)[0];
      double y = CTX::instance()->geom.scalingFactor * (yyvsp[(6) - (7)].v)[1];
      double z = CTX::instance()->geom.scalingFactor * (yyvsp[(6) - (7)].v)[2];
      double lc = CTX::instance()->geom.scalingFactor * (yyvsp[(6) - (7)].v)[3];
      if(lc == 0.) lc = MAX_LC; // no mesh size given at the point
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->addVertex(num, x, y, z, lc);
      }
      else{
        if(!myGmshSurface)
          r = GModel::current()->getGEOInternals()->addVertex(num, x, y, z, lc);
        else
          r = GModel::current()->getGEOInternals()->addVertex(num, x, y,
                                                              myGmshSurface, lc);
      }
      if(!r) yymsg(0, "Could not add point");
      AddToTemporaryBoundingBox(x, y, z);
      (yyval.s).Type = MSH_POINT;
      (yyval.s).Num = num;
    ;}
    break;

  case 161:
#line 1603 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->addLine(num, tags);
      }
      else{
        r = GModel::current()->getGEOInternals()->addLine(num, tags);
      }
      if(!r) yymsg(0, "Could not add line");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SEGM_LINE;
      (yyval.s).Num = num;
    ;}
    break;

  case 162:
#line 1619 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        yymsg(0, "Spline not available with OpenCASCADE factory");
      }
      else{
        r = GModel::current()->getGEOInternals()->addSpline(num, tags);
      }
      if(!r) yymsg(0, "Could not add spline");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SEGM_SPLN;
      (yyval.s).Num = num;
    ;}
    break;

  case 163:
#line 1635 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (8)].l), tags);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (8)].l), param);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(tags.size() == 3){
          r = GModel::current()->getOCCInternals()->addCircleArc
            (num, tags[0], tags[1], tags[2]);
        }
        else if(param.size() >= 4 && param.size() <= 6){
          double r = param[3];
          double a1 = (param.size() == 6) ? param[4] : 0.;
          double a2 = (param.size() == 6) ? param[5] :
            (param.size() == 5) ? param[4] : 2.*M_PI;
          r = GModel::current()->getOCCInternals()->addCircle
            (num, param[0], param[1], param[2], r, a1, a2);
        }
        else{
          yymsg(0, "Circle requires 3 points or 4 to 6 parameters");
        }
      }
      else{
        if(tags.size() == 3){
          r = GModel::current()->getGEOInternals()->addCircleArc
            (num, tags[0], tags[1], tags[2], (yyvsp[(7) - (8)].v)[0], (yyvsp[(7) - (8)].v)[1], (yyvsp[(7) - (8)].v)[2]);
        }
        else{
          yymsg(0, "Circle requires 3 points");
        }
      }
      if(!r) yymsg(0, "Could not add circle");
      List_Delete((yyvsp[(6) - (8)].l));
      (yyval.s).Type = MSH_SEGM_CIRC;
      (yyval.s).Num = num;
    ;}
    break;

  case 164:
#line 1672 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (8)].l), tags);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (8)].l), param);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(tags.size() == 3){
          r = GModel::current()->getOCCInternals()->addEllipseArc
            (num, tags[0], tags[1], tags[2]);
        }
        else if(tags.size() == 4){
          r = GModel::current()->getOCCInternals()->addEllipseArc
            (num, tags[0], tags[1], tags[3]);
        }
        else if(param.size() >= 5 && param.size() <= 7){
          double a1 = (param.size() == 7) ? param[5] : 0.;
          double a2 = (param.size() == 7) ? param[6] :
            (param.size() == 6) ? param[5] : 2.*M_PI;
          r = GModel::current()->getOCCInternals()->addEllipse
            (num, param[0], param[1], param[2], param[3], param[4], a1, a2);
        }
        else{
          yymsg(0, "Ellipse requires 3 or 4 points, or 5 to 7 parameters");
        }
      }
      else{
        if(tags.size() == 4){
          r = GModel::current()->getGEOInternals()->addEllipseArc
            (num, tags[0], tags[1], tags[2], tags[3], (yyvsp[(7) - (8)].v)[0], (yyvsp[(7) - (8)].v)[1], (yyvsp[(7) - (8)].v)[2]);
        }
        else{
          yymsg(0, "Ellipse requires 4 points");
        }
      }
      if(!r) yymsg(0, "Could not add ellipse");
      List_Delete((yyvsp[(6) - (8)].l));
      (yyval.s).Type = MSH_SEGM_ELLI;
      (yyval.s).Num = num;
    ;}
    break;

  case 165:
#line 1712 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->addBSpline(num, tags);
      }
      else{
        r = GModel::current()->getGEOInternals()->addBSpline(num, tags);
      }
      if(!r) yymsg(0, "Could not add BSpline");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SEGM_BSPLN;
      (yyval.s).Num = num;
    ;}
    break;

  case 166:
#line 1728 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->addBezier(num, tags);
      }
      else{
        r = GModel::current()->getGEOInternals()->addBezier(num, tags);
      }
      if(!r) yymsg(0, "Could not add Bezier");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SEGM_BEZIER;
      (yyval.s).Num = num;
    ;}
    break;

  case 167:
#line 1745 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (11)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (11)].l), tags);
      std::vector<double> knots; ListOfDouble2Vector((yyvsp[(8) - (11)].l), knots);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        yymsg(0, "Nurbs not available yet with OpenCASCADE factory");
      }
      else{
        int order = knots.size() - tags.size() - 1;
        if(order != (int)(yyvsp[(10) - (11)].d))
          yymsg(1, "Incompatible Nurbs order: using %d", order);
        r = GModel::current()->getGEOInternals()->addNurbs(num, tags, knots);
      }
      if(!r) yymsg(0, "Could not add nurbs");
      List_Delete((yyvsp[(6) - (11)].l));
      List_Delete((yyvsp[(8) - (11)].l));
      (yyval.s).Type = MSH_SEGM_NURBS;
      (yyval.s).Num = num;
    ;}
    break;

  case 168:
#line 1766 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      bool r = GModel::current()->getGEOInternals()->addCompoundLine(num, tags);
      if(!r) yymsg(0, "Could not add compound line");
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_SEGM_COMPOUND;
      (yyval.s).Num = num;
    ;}
    break;

  case 169:
#line 1776 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->addWire(num, tags, false);
      }
      else{
        yymsg(0, "Wire only available using OpenCASCADE factory");
      }
      if(!r) yymsg(0, "Could not add wire");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SEGM_LOOP;
      (yyval.s).Num = num;
    ;}
    break;

  case 170:
#line 1792 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->addLineLoop(num, tags);
      }
      else{
        r = GModel::current()->getGEOInternals()->addLineLoop(num, tags);
      }
      if(!r) yymsg(0, "Could not add line loop");
      List_Delete((yyvsp[(7) - (8)].l));
      Free((yyvsp[(2) - (8)].c));
      (yyval.s).Type = MSH_SEGM_LOOP;
      (yyval.s).Num = num;
    ;}
    break;

  case 171:
#line 1809 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->addPlaneSurface(num, tags);
      }
      else{
        r = GModel::current()->getGEOInternals()->addPlaneSurface(num, tags);
      }
      if(!r) yymsg(0, "Could not add plane surface");
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_SURF_PLAN;
      (yyval.s).Num = num;
    ;}
    break;

  case 172:
#line 1825 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (8)].d);
      std::vector<int> wires; ListOfDouble2Vector((yyvsp[(6) - (8)].l), wires);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(wires.size() != 1){
          yymsg(0, "OpenCASCADE face filling requires a single line loop");
        }
        else{
          r = GModel::current()->getOCCInternals()->addSurfaceFilling(num, wires[0]);
        }
      }
      else{
        r = GModel::current()->getGEOInternals()->addSurfaceFilling(num, wires, (yyvsp[(7) - (8)].i));
      }
      if(!r) yymsg(0, "Could not add surface");
      List_Delete((yyvsp[(6) - (8)].l));
      (yyval.s).Type = MSH_SURF_REGL;
      (yyval.s).Num = num;
    ;}
    break;

  case 173:
#line 1846 "Gmsh.y"
    {
      yymsg(2, "'Ruled Surface' command is deprecated: use 'Surface' instead");
      int num = (int)(yyvsp[(4) - (9)].d);
      std::vector<int> wires; ListOfDouble2Vector((yyvsp[(7) - (9)].l), wires);
      bool r = GModel::current()->getGEOInternals()->addSurfaceFilling(num, wires, (yyvsp[(8) - (9)].i));
      if(!r) yymsg(0, "Could not add surface");
      List_Delete((yyvsp[(7) - (9)].l));
      (yyval.s).Type =  MSH_SURF_REGL;
      (yyval.s).Num = num;
    ;}
    break;

  case 174:
#line 1857 "Gmsh.y"
    {
      myGmshSurface = 0;
      (yyval.s).Type = 0;
      (yyval.s).Num = 0;
    ;}
    break;

  case 175:
#line 1863 "Gmsh.y"
    {
      myGmshSurface = gmshSurface::getSurface((int)(yyvsp[(3) - (4)].d));
      (yyval.s).Type = 0;
      (yyval.s).Num = 0;
    ;}
    break;

  case 176:
#line 1869 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (10)].d);
      myGmshSurface = gmshParametricSurface::NewParametricSurface(num, (yyvsp[(7) - (10)].c), (yyvsp[(8) - (10)].c), (yyvsp[(9) - (10)].c));
      (yyval.s).Type = 0;
      (yyval.s).Num = num;
    ;}
    break;

  case 177:
#line 1876 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      (yyval.s).Type = 0;
      bool r = true;
      if(param.size() >= 4 && param.size() <= 7){
        if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
          double a1 = (param.size() >= 5) ? param[4] : -M_PI/2;
          double a2 = (param.size() >= 6) ? param[5] : M_PI/2;
          double a3 = (param.size() >= 7) ? param[6] : 2.*M_PI;
          r = GModel::current()->getOCCInternals()->addSphere
            (num, param[0], param[1], param[2], param[3], a1, a2, a3);
        }
        else{
          yymsg(0, "Sphere only available with OpenCASCADE factory");
        }
        (yyval.s).Type = MSH_VOLUME;
      }
      else if(tags.size() == 2){
        myGmshSurface = GModel::current()->getGEOInternals()->newGeometrySphere
          (num, tags[0], tags[1]);
      }
      else{
        yymsg(0, "Sphere requires 2 points or from 4 to 7 parameters");
      }
      if(!r) yymsg(0, "Could not add sphere");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Num = num;
    ;}
    break;

  case 178:
#line 1907 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      if(tags.size() == 2){
        myGmshSurface = GModel::current()->getGEOInternals()->newGeometryPolarSphere
          (num, tags[0], tags[1]);
      }
      else{
        yymsg(0, "PolarSphere requires 2 points");
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = 0;
      (yyval.s).Num = num;
    ;}
    break;

  case 179:
#line 1922 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 6){
          r = GModel::current()->getOCCInternals()->addBlock
            (num, param[0], param[1], param[2], param[3], param[4], param[5]);
        }
        else{
          yymsg(0, "Block requires 6 parameters");
        }
      }
      else{
        yymsg(0, "Block only available with OpenCASCADE factory");
      }
      if(!r) yymsg(0, "Could not add block");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 180:
#line 1944 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 5 || param.size() == 6){
          double alpha = (param.size() == 6) ? param[5] : 2*M_PI;
          r = GModel::current()->getOCCInternals()->addTorus
            (num, param[0], param[1], param[2], param[3], param[4], alpha);
        }
        else{
          yymsg(0, "Torus requires 5 ou 6 parameters");
        }
      }
      else{
        yymsg(0, "Torus only available with OpenCASCADE factory");
      }
      if(!r) yymsg(0, "Could not add torus");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 181:
#line 1967 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 6 || param.size() == 7){
          double r = (param.size() == 7) ? param[6] : 0.;
          r = GModel::current()->getOCCInternals()->addRectangle
            (num, param[0], param[1], param[2], param[3], param[4], param[5], r);
        }
        else{
          yymsg(0, "Rectangle requires 6 ou 7 parameters");
        }
      }
      else{
        yymsg(0, "Rectangle only available with OpenCASCADE factory");
      }
      if(!r) yymsg(0, "Could not add rectangle");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SURF_PLAN;
      (yyval.s).Num = num;
    ;}
    break;

  case 182:
#line 1990 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 4 || param.size() == 5){
          double ry = (param.size() == 5) ? param[4] : param[3];
          r = GModel::current()->getOCCInternals()->addDisk
            (num, param[0], param[1], param[2], param[3], ry);
        }
        else{
          yymsg(0, "Disk requires 4 or 5 parameters");
        }
      }
      else{
        yymsg(0, "Disk only available with OpenCASCADE factory");
      }
      if(!r) yymsg(0, "Could not add disk");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SURF_PLAN;
      (yyval.s).Num = num;
    ;}
    break;

  case 183:
#line 2013 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 7 || param.size() == 8){
          double angle = (param.size() == 8) ? param[7] : 2*M_PI;
          r = GModel::current()->getOCCInternals()->addCylinder
            (num, param[0], param[1], param[2], param[3], param[4], param[5],
             param[6], angle);
        }
        else{
          yymsg(0, "Cylinder requires 7 or 8 parameters");
        }
      }
      else{
        yymsg(0, "Cylinder only available with OpenCASCADE factory");
      }
      if(!r) yymsg(0, "Could not add cylinder");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 184:
#line 2037 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 8 || param.size() == 9){
          double alpha = (param.size() == 9) ? param[8] : 2*M_PI;
          r = GModel::current()->getOCCInternals()->addCone
            (num, param[0], param[1], param[2], param[3], param[4], param[5],
             param[6], param[7], alpha);
        }
        else{
          yymsg(0, "Cone requires 8 or 9 parameters");
        }
      }
      else{
        yymsg(0, "Cone only available with OpenCASCADE factory");
      }
      if(!r) yymsg(0, "Could not add cone");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 185:
#line 2061 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 7){
          r = GModel::current()->getOCCInternals()->addWedge
            (num, param[0], param[1], param[2], param[3], param[4], param[5],
             param[6]);
        }
        else{
          yymsg(0, "Wedge requires 7 parameters");
        }
      }
      else{
        yymsg(0, "Wedge only available with OpenCASCADE factory");
      }
      if(!r) yymsg(0, "Could not add wedge");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 186:
#line 2084 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() >= 2){
          int in = (int)param[0];
          double offset = param[1];
          std::vector<int> exclude;
          for(unsigned int i = 2; i < param.size(); i++)
            exclude.push_back(param[i]);
          r = GModel::current()->getOCCInternals()->addThickSolid
            (num, in, exclude, offset);
        }
        else{
          yymsg(0, "ThickSolid requires at least 2 parameters");
        }
      }
      else{
        yymsg(0, "ThickSolid only available with OpenCASCADE factory");
      }
      if(!r) yymsg(0, "Could not add thick solid");
      List_Delete((yyvsp[(6) - (7)].l));
    ;}
    break;

  case 187:
#line 2109 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      bool r = GModel::current()->getGEOInternals()->addCompoundSurface(num, tags);
      if(!r) yymsg(0, "Could not add compound surface");
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_SURF_COMPOUND;
      (yyval.s).Num = num;
    ;}
    break;

  case 188:
#line 2120 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (12)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (12)].l), tags);
      std::vector<int> bndTags[4];
      for(int i = 0; i < List_Nbr((yyvsp[(10) - (12)].l)); i++){
        if(i < 4)
          ListOfDouble2Vector(*(List_T**)List_Pointer((yyvsp[(10) - (12)].l), i), bndTags[i]);
        else
          break;
      }
      bool r = GModel::current()->getGEOInternals()->addCompoundSurface
        (num, tags, bndTags);
      if(!r) yymsg(0, "Could not add compound surface");
      List_Delete((yyvsp[(7) - (12)].l));
      Free((yyvsp[(8) - (12)].c));
      for (int i = 0; i < List_Nbr((yyvsp[(10) - (12)].l)); i++)
        List_Delete(*(List_T**)List_Pointer((yyvsp[(10) - (12)].l), i));
      List_Delete((yyvsp[(10) - (12)].l));
      (yyval.s).Type = MSH_SURF_COMPOUND;
      (yyval.s).Num = num;
    ;}
    break;

  case 189:
#line 2142 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->addSurfaceLoop(num, tags);
      }
      else{
        r = GModel::current()->getGEOInternals()->addSurfaceLoop(num, tags);
      }
      if(!r) yymsg(0, "Could not add surface loop");
      List_Delete((yyvsp[(7) - (8)].l));
      Free((yyvsp[(2) - (8)].c));
      (yyval.s).Type = MSH_SURF_LOOP;
      (yyval.s).Num = num;
    ;}
    break;

  case 190:
#line 2159 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->addVolume(num, tags);
      }
      else{
        r = GModel::current()->getGEOInternals()->addVolume(num, tags);
      }
      if(!r) yymsg(0, "Could not add volume");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 191:
#line 2175 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> wires; ListOfDouble2Vector((yyvsp[(6) - (7)].l), wires);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<std::pair<int, int> > outDimTags;
        r = GModel::current()->getOCCInternals()->addThruSections
          (num, wires, outDimTags, true, false);
      }
      else{
        yymsg(0, "ThruSections only available with OpenCASCADE factory");
      }
      if(!r) yymsg(0, "Could not add thrusections");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 192:
#line 2193 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> wires; ListOfDouble2Vector((yyvsp[(7) - (8)].l), wires);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<std::pair<int, int> > outDimTags;
        r = GModel::current()->getOCCInternals()->addThruSections
          (num, wires, outDimTags, true, true);
      }
      else{
        yymsg(0, "ThruSections only available with OpenCASCADE factory");
      }
      if(!r) yymsg(0, "Could not add ruled thrusections");
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 193:
#line 2211 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      bool r = GModel::current()->getGEOInternals()->addCompoundVolume(num, tags);
      if(!r) yymsg(0, "Could not add compound volume");
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_VOLUME_COMPOUND;
      (yyval.s).Num = num;
    ;}
    break;

  case 194:
#line 2221 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].i);
      int op = (yyvsp[(6) - (8)].i);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      bool r = GModel::current()->getGEOInternals()->modifyPhysicalGroup
        (0, num, op, tags);
      if(!r) yymsg(0, "Could not modify physical point");
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_PHYSICAL_POINT;
      (yyval.s).Num = num;
    ;}
    break;

  case 195:
#line 2233 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].i);
      int op = (yyvsp[(6) - (8)].i);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      bool r = GModel::current()->getGEOInternals()->modifyPhysicalGroup
        (1, num, op, tags);
      if(!r) yymsg(0, "Could not modify physical line");
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_PHYSICAL_LINE;
      (yyval.s).Num = num;
    ;}
    break;

  case 196:
#line 2245 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].i);
      int op = (yyvsp[(6) - (8)].i);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      bool r = GModel::current()->getGEOInternals()->modifyPhysicalGroup
        (2, num, op, tags);
      if(!r) yymsg(0, "Could not modify physical surface");
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_PHYSICAL_SURFACE;
      (yyval.s).Num = num;
    ;}
    break;

  case 197:
#line 2257 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].i);
      int op = (yyvsp[(6) - (8)].i);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      bool r = GModel::current()->getGEOInternals()->modifyPhysicalGroup
        (3, num, op, tags);
      if(!r) yymsg(0, "Could not modify physical volume");
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_PHYSICAL_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 198:
#line 2274 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (5)].l), dimTags);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->translate
          (dimTags, (yyvsp[(2) - (5)].v)[0], (yyvsp[(2) - (5)].v)[1], (yyvsp[(2) - (5)].v)[2]);
      }
      else{
        r = GModel::current()->getGEOInternals()->translate
          (dimTags, (yyvsp[(2) - (5)].v)[0], (yyvsp[(2) - (5)].v)[1], (yyvsp[(2) - (5)].v)[2]);
      }
      if(!r) yymsg(0, "Could not translate shapes");
      (yyval.l) = (yyvsp[(4) - (5)].l);
    ;}
    break;

  case 199:
#line 2290 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(10) - (11)].l), dimTags);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->rotate
          (dimTags, (yyvsp[(5) - (11)].v)[0], (yyvsp[(5) - (11)].v)[1], (yyvsp[(5) - (11)].v)[2], (yyvsp[(3) - (11)].v)[0], (yyvsp[(3) - (11)].v)[1], (yyvsp[(3) - (11)].v)[2], (yyvsp[(7) - (11)].d));
      }
      else{
        r = GModel::current()->getGEOInternals()->rotate
          (dimTags, (yyvsp[(5) - (11)].v)[0], (yyvsp[(5) - (11)].v)[1], (yyvsp[(5) - (11)].v)[2], (yyvsp[(3) - (11)].v)[0], (yyvsp[(3) - (11)].v)[1], (yyvsp[(3) - (11)].v)[2], (yyvsp[(7) - (11)].d));
      }
      if(!r) yymsg(0, "Could not rotate shapes");
      (yyval.l) = (yyvsp[(10) - (11)].l);
    ;}
    break;

  case 200:
#line 2306 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (5)].l), dimTags);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        Msg::Error("Symmetry not implemented yet with OpenCASCADE factory");
      }
      else{
        r = GModel::current()->getGEOInternals()->symmetry
          (dimTags, (yyvsp[(2) - (5)].v)[0], (yyvsp[(2) - (5)].v)[1], (yyvsp[(2) - (5)].v)[2], (yyvsp[(2) - (5)].v)[3]);
      }
      if(!r) yymsg(0, "Could not apply symmetry transform");
      (yyval.l) = (yyvsp[(4) - (5)].l);
    ;}
    break;

  case 201:
#line 2321 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(8) - (9)].l), dimTags);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        yymsg(1, "Warning Dilate OCC: Dilatation (second argument) + Translation (first argument) ");
        r = GModel::current()->getOCCInternals()->dilate
          (dimTags, (yyvsp[(3) - (9)].v)[0], (yyvsp[(3) - (9)].v)[1], (yyvsp[(3) - (9)].v)[2], (yyvsp[(5) - (9)].d), (yyvsp[(5) - (9)].d), (yyvsp[(5) - (9)].d));
      }
      else{
        r = GModel::current()->getGEOInternals()->dilate
          (dimTags, (yyvsp[(3) - (9)].v)[0], (yyvsp[(3) - (9)].v)[1], (yyvsp[(3) - (9)].v)[2], (yyvsp[(5) - (9)].d), (yyvsp[(5) - (9)].d), (yyvsp[(5) - (9)].d));
      }
      if(!r) yymsg(0, "Could not dilate shapes");
      (yyval.l) = (yyvsp[(8) - (9)].l);
    ;}
    break;

  case 202:
#line 2338 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(8) - (9)].l), dimTags);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        yymsg(1, "Warning Dilate OCC: Dilatation (second argument) + Translation (first argument) ");
        r = GModel::current()->getOCCInternals()->dilate
          (dimTags, (yyvsp[(3) - (9)].v)[0], (yyvsp[(3) - (9)].v)[1], (yyvsp[(3) - (9)].v)[2], (yyvsp[(5) - (9)].v)[0], (yyvsp[(5) - (9)].v)[1], (yyvsp[(5) - (9)].v)[2]);
      }
      else{
        r = GModel::current()->getGEOInternals()->dilate
          (dimTags, (yyvsp[(3) - (9)].v)[0], (yyvsp[(3) - (9)].v)[1], (yyvsp[(3) - (9)].v)[2], (yyvsp[(5) - (9)].v)[0], (yyvsp[(5) - (9)].v)[1], (yyvsp[(5) - (9)].v)[2]);
      }
      if(!r) yymsg(0, "Could not dilate shapes");
      (yyval.l) = (yyvsp[(8) - (9)].l);
    ;}
    break;

  case 203:
#line 2355 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(3) - (4)].l), inDimTags);
      (yyval.l) = (yyvsp[(3) - (4)].l);
      List_Reset((yyval.l));
      std::string action((yyvsp[(1) - (4)].c));
      bool r = true;
      if(action == "Duplicata"){
        if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
          r = GModel::current()->getOCCInternals()->copy(inDimTags, outDimTags);
        }
        else{
          r = GModel::current()->getGEOInternals()->copy(inDimTags, outDimTags);
        }
      }
      else if(action == "Boundary" || action == "CombinedBoundary"){
        // boundary operations are performed directly on GModel, which enables
        // to compute the boundary of hybrid CAD models; this also automatically
        // binds all boundary entities for OCC models
        if(GModel::current()->getOCCInternals() &&
           GModel::current()->getOCCInternals()->getChanged())
          GModel::current()->getOCCInternals()->synchronize(GModel::current());
        if(GModel::current()->getGEOInternals()->getChanged())
          GModel::current()->getGEOInternals()->synchronize(GModel::current());
        r = GModel::current()->getBoundaryTags
          (inDimTags, outDimTags, action == "CombinedBoundary");
      }
      else{
        yymsg(0, "Unknown action on multiple shapes '%s'", (yyvsp[(1) - (4)].c));
      }
      if(!r) yymsg(0, "Could not apply operation on shapes");
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
      Free((yyvsp[(1) - (4)].c));
    ;}
    break;

  case 204:
#line 2390 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        yymsg(0, "Intersect line not available with OpenCASCADE");
      }
      else{
        std::vector<int> in, out; ListOfDouble2Vector((yyvsp[(4) - (9)].l), in);
        r = GModel::current()->getGEOInternals()->intersectCurvesWithSurface
          (in, (int)(yyvsp[(8) - (9)].d), out);
        for(unsigned int i = 0; i < out.size(); i++){
          Shape s;
          s.Type = MSH_POINT;
          s.Num = out[i];
          List_Add((yyval.l), &s);
        }
      }
      if(!r) yymsg(0, "Could not intersect line");
      List_Delete((yyvsp[(4) - (9)].l));
    ;}
    break;

  case 205:
#line 2412 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        yymsg(0, "Split Line not available with OpenCASCADE");
      }
      else{
        std::vector<int> vertices, curves; ListOfDouble2Vector((yyvsp[(7) - (9)].l), vertices);
        r = GModel::current()->getGEOInternals()->splitCurve
          ((int)(yyvsp[(4) - (9)].d), vertices, curves);
        for(unsigned int i = 0; i < curves.size(); i++){
          Shape s;
          s.Type = MSH_SEGM_LINE;
          s.Num = curves[i];
          List_Add((yyval.l), &s);
        }
      }
      if(!r) yymsg(0, "Could not split line");
      List_Delete((yyvsp[(7) - (9)].l));
    ;}
    break;

  case 206:
#line 2435 "Gmsh.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 207:
#line 2436 "Gmsh.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 208:
#line 2441 "Gmsh.y"
    {
      (yyval.l) = List_Create(3, 3, sizeof(Shape));
    ;}
    break;

  case 209:
#line 2445 "Gmsh.y"
    {
      List_Add((yyval.l), &(yyvsp[(2) - (2)].s));
    ;}
    break;

  case 210:
#line 2449 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (6)].l)); i++){
	double d;
	List_Read((yyvsp[(4) - (6)].l), i, &d);
	Shape s;
	s.Num = (int)d;
        s.Type = MSH_POINT;
        List_Add((yyval.l), &s);
      }
    ;}
    break;

  case 211:
#line 2460 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (6)].l)); i++){
	double d;
	List_Read((yyvsp[(4) - (6)].l), i, &d);
	Shape s;
	s.Num = (int)d;
        s.Type = MSH_SEGM_LINE;
        List_Add((yyval.l), &s);
      }
    ;}
    break;

  case 212:
#line 2471 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (6)].l)); i++){
	double d;
	List_Read((yyvsp[(4) - (6)].l), i, &d);
	Shape s;
	s.Num = (int)d;
        s.Type = MSH_SURF_PLAN; // we don't care about the actual type
        List_Add((yyval.l), &s);
      }
    ;}
    break;

  case 213:
#line 2482 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (6)].l)); i++){
	double d;
	List_Read((yyvsp[(4) - (6)].l), i, &d);
	Shape s;
	s.Num = (int)d;
        s.Type = MSH_VOLUME;
        List_Add((yyval.l), &s);
      }
    ;}
    break;

  case 214:
#line 2498 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(7) - (8)].l)) == 4){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d[4];
          for(int i = 0; i < 4; i++)
            List_Read((yyvsp[(7) - (8)].l), i, &d[i]);
          gLevelset *ls = new gLevelsetPlane(d[0], d[1], d[2], d[3], t);
          gLevelset::add(ls);
        }
      }
      else
        yymsg(0, "Wrong number of arguments for levelset definition");
      List_Delete((yyvsp[(7) - (8)].l));
    ;}
    break;

  case 215:
#line 2517 "Gmsh.y"
    {
      int t = (int)(yyvsp[(4) - (10)].d);
      if(gLevelset::find(t)){
	yymsg(0, "Levelset %d already exists", t);
      }
      else {
	fullMatrix<double> centers(List_Nbr((yyvsp[(8) - (10)].l)),3);
	for (int i = 0; i < List_Nbr((yyvsp[(8) - (10)].l)); i++){
	  List_T *l = *(List_T**)List_Pointer((yyvsp[(8) - (10)].l), i);
	  for (int j = 0; j < List_Nbr(l); j++){
	    centers(i,j) = (double)(*(double*)List_Pointer(l, j));
	  }
	}
        gLevelset *ls = new gLevelsetPoints(centers, t);
        gLevelset::add(ls);
      }
      for(int i = 0; i < List_Nbr((yyvsp[(8) - (10)].l)); i++)
        List_Delete(*(List_T**)List_Pointer((yyvsp[(8) - (10)].l), i));
      List_Delete((yyvsp[(8) - (10)].l));
    ;}
    break;

  case 216:
#line 2539 "Gmsh.y"
    {
      int t = (int)(yyvsp[(4) - (14)].d);
      if(gLevelset::find(t)){
        yymsg(0, "Levelset %d already exists", t);
      }
      else {
        double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
        double n[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
        gLevelset *ls = new gLevelsetPlane(pt, n, t);
        gLevelset::add(ls);
      }
      List_Delete((yyvsp[(12) - (14)].l));
    ;}
    break;

  case 217:
#line 2554 "Gmsh.y"
    {
      int t = (int)(yyvsp[(4) - (16)].d);
      if(gLevelset::find(t)){
        yymsg(0, "Levelset %d already exists", t);
      }
      else {
        double pt1[3] = {(yyvsp[(8) - (16)].v)[0], (yyvsp[(8) - (16)].v)[1], (yyvsp[(8) - (16)].v)[2]};
        double pt2[3] = {(yyvsp[(10) - (16)].v)[0], (yyvsp[(10) - (16)].v)[1], (yyvsp[(10) - (16)].v)[2]};
        double pt3[3] = {(yyvsp[(12) - (16)].v)[0], (yyvsp[(12) - (16)].v)[1], (yyvsp[(12) - (16)].v)[2]};
        gLevelset *ls = new gLevelsetPlane(pt1, pt2, pt3, t);
        gLevelset::add(ls);
      }
      List_Delete((yyvsp[(14) - (16)].l));
    ;}
    break;

  case 218:
#line 2569 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(10) - (12)].l)) == 1){
        int t = (int)(yyvsp[(4) - (12)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d;
          List_Read((yyvsp[(10) - (12)].l), 0, &d);
          gLevelset *ls = new gLevelsetSphere((yyvsp[(8) - (12)].v)[0], (yyvsp[(8) - (12)].v)[1], (yyvsp[(8) - (12)].v)[2], d, t);
          gLevelset::add(ls);
        }
      }
      else
        yymsg(0, "Wrong number of arguments for levelset definition");
      List_Delete((yyvsp[(10) - (12)].l));
    ;}
    break;

  case 219:
#line 2588 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(12) - (14)].l)) == 1){
        int t = (int)(yyvsp[(4) - (14)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d;
          List_Read((yyvsp[(12) - (14)].l), 0, &d);
          double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
          double dir[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
          gLevelset *ls = new gLevelsetGenCylinder(pt, dir, d, t);
          gLevelset::add(ls);
        }
      }
      else if(List_Nbr((yyvsp[(12) - (14)].l)) == 2){
        int t = (int)(yyvsp[(4) - (14)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d[2];
          for(int i = 0; i < 2; i++)
            List_Read((yyvsp[(12) - (14)].l), i, &d[i]);
          double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
          double dir[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
          gLevelset *ls = new gLevelsetCylinder(pt, dir, d[0], d[1], t);
          gLevelset::add(ls);
        }
      }
      else if(List_Nbr((yyvsp[(12) - (14)].l)) == 3){
        int t = (int)(yyvsp[(4) - (14)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d[3];
          for(int i = 0; i < 3; i++)
            List_Read((yyvsp[(12) - (14)].l), i, &d[i]);
          double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
          double dir[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
          gLevelset *ls = new gLevelsetCylinder(pt, dir, d[0], d[1], d[2], t);
          gLevelset::add(ls);
        }
      }
      else
        yymsg(0, "Wrong number of arguments for levelset definition");
      List_Delete((yyvsp[(12) - (14)].l));
    ;}
    break;

  case 220:
#line 2639 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(12) - (14)].l)) == 1){
        int t = (int)(yyvsp[(4) - (14)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d;
          List_Read((yyvsp[(12) - (14)].l), 0, &d);
          double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
          double dir[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
          gLevelset *ls = new gLevelsetCone(pt, dir, d, t);
          gLevelset::add(ls);
        }
      }
      else
        yymsg(0, "Wrong number of arguments for levelset definition");
      List_Delete((yyvsp[(12) - (14)].l));
    ;}
    break;

  case 221:
#line 2660 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(12) - (14)].l)) == 3){
        int t = (int)(yyvsp[(4) - (14)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d[3];
          for(int i = 0; i < 3; i++)
            List_Read((yyvsp[(12) - (14)].l), i, &d[i]);
          double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
          double dir[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
          gLevelset *ls = new gLevelsetEllipsoid(pt, dir, d[0], d[1], d[2], t);
          gLevelset::add(ls);
        }
      }
      else
        yymsg(0, "Wrong number of arguments for levelset definition");
      List_Delete((yyvsp[(12) - (14)].l));
    ;}
    break;

  case 222:
#line 2682 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(12) - (14)].l)) == 5){
        int t = (int)(yyvsp[(4) - (14)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d[5];
          for(int i = 0; i < 5; i++)
            List_Read((yyvsp[(12) - (14)].l), i, &d[i]);
          double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
          double dir[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
          gLevelset *ls = new gLevelsetGeneralQuadric(pt, dir, d[0], d[1],
                                                      d[2], d[3], d[4], t);
          gLevelset::add(ls);
        }
      }
      else
        yymsg(0, "Wrong number of arguments for levelset definition");
      List_Delete((yyvsp[(12) - (14)].l));
    ;}
    break;

  case 223:
#line 2704 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(2) - (8)].c), "Union")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          std::vector<gLevelset *> vl;
          for(int i = 0; i < List_Nbr((yyvsp[(7) - (8)].l)); i++) {
            double d; List_Read((yyvsp[(7) - (8)].l), i, &d);
            gLevelset *pl = gLevelset::find((int)d);
	    if(!pl) yymsg(0, "Unknown levelset %d", (int)d);
            else vl.push_back(pl);
          }
          gLevelset *ls = new gLevelsetUnion(vl, true, t);
          gLevelset::add(ls);
        }
      }
      else if(!strcmp((yyvsp[(2) - (8)].c), "Intersection")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          std::vector<gLevelset *> vl;
          for(int i = 0; i < List_Nbr((yyvsp[(7) - (8)].l)); i++) {
            double d; List_Read((yyvsp[(7) - (8)].l), i, &d);
            gLevelset *pl = gLevelset::find((int)d);
	    if(!pl) yymsg(0, "Unknown levelset %d", (int)d);
            else vl.push_back(pl);
          }
          gLevelset *ls = new gLevelsetIntersection(vl, true, t);
          gLevelset::add(ls);
        }
      }
      else if(!strcmp((yyvsp[(2) - (8)].c), "Cut")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          std::vector<gLevelset *> vl;
          for(int i = 0; i < List_Nbr((yyvsp[(7) - (8)].l)); i++) {
            double d; List_Read((yyvsp[(7) - (8)].l), i, &d);
            gLevelset *pl = gLevelset::find((int)d);
	    if(!pl) yymsg(0, "Unknown levelset %d", (int)d);
            else vl.push_back(pl);
          }
          gLevelset *ls = new gLevelsetCut(vl, true, t);
          gLevelset::add(ls);
        }
      }
      else if(!strcmp((yyvsp[(2) - (8)].c), "Crack")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          std::vector<gLevelset *> vl;
          for(int i = 0; i < List_Nbr((yyvsp[(7) - (8)].l)); i++) {
            double d; List_Read((yyvsp[(7) - (8)].l), i, &d);
            gLevelset *pl = gLevelset::find((int)d);
	    if(!pl) yymsg(0, "Unknown levelset %d", (int)d);
            else vl.push_back(pl);
          }
          gLevelset *ls = new gLevelsetCrack(vl, false, t);
          gLevelset::add(ls);
        }
      }
      else if(!strcmp((yyvsp[(2) - (8)].c), "Reverse")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d;
          List_Read((yyvsp[(7) - (8)].l), 0, &d);
          gLevelset *pl = gLevelset::find((int)d);
          gLevelset *ls = NULL;
          if(!pl) yymsg(0, "Unknown levelset %d", (int)d);
          else ls = new gLevelsetReverse(pl, t);
          if(ls) gLevelset::add(ls);
        }
      }
#if defined(HAVE_POST)
      else if(!strcmp((yyvsp[(2) - (8)].c), "PostView")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          if(List_Nbr((yyvsp[(7) - (8)].l)) > 0){
            double d; List_Read((yyvsp[(7) - (8)].l), 0, &d);
            gLevelset *ls = new gLevelsetPostView((int)d, t);
            gLevelset::add(ls);
          }
        }
      }
#endif
      else
        yymsg(0, "Wrong number of arguments for levelset definition");
      Free((yyvsp[(2) - (8)].c));
      List_Delete((yyvsp[(7) - (8)].l));
    ;}
    break;

  case 224:
#line 2809 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(2) - (8)].c), "MathEval")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          gLevelset *ls = new gLevelsetMathEval((yyvsp[(7) - (8)].c), t);
          gLevelset::add(ls);
        }
      }
      else
        yymsg(0, "Unknown levelset '%s'", (yyvsp[(2) - (8)].c));
      Free((yyvsp[(2) - (8)].c)); Free((yyvsp[(7) - (8)].c));
    ;}
    break;

  case 225:
#line 2825 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(2) - (6)].c), "CutMesh")){
        int t = (int)(yyvsp[(4) - (6)].d);
        if(gLevelset::find(t)){
          GModel::current()->buildCutGModel(gLevelset::find(t), true, false);
        }
        else
          yymsg(0, "Unknown levelset %d", t);
      }
      else if(!strcmp((yyvsp[(2) - (6)].c), "CutMeshTri")){
        int t = (int)(yyvsp[(4) - (6)].d);
        if(gLevelset::find(t)){
          GModel::current()->buildCutGModel(gLevelset::find(t), true, true);
        }
        else
          yymsg(0, "Unknown levelset %d", t);
      }
      else if(!strcmp((yyvsp[(2) - (6)].c), "SplitMesh")){
        int t = (int)(yyvsp[(4) - (6)].d);
        if(gLevelset::find(t)){
          GModel::current()->buildCutGModel(gLevelset::find(t), false, true);
        }
        else
          yymsg(0, "Unknown levelset %d", t);
      }
      else
        yymsg(0, "Unknown levelset '%s'", (yyvsp[(2) - (6)].c));
      Free((yyvsp[(2) - (6)].c));
    ;}
    break;

  case 226:
#line 2860 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(3) - (4)].l), dimTags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->remove(dimTags);
      }
      GModel::current()->getGEOInternals()->remove(dimTags);
      GModel::current()->remove(dimTags);
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 227:
#line 2871 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (5)].l), dimTags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->remove(dimTags, true);
      }
      GModel::current()->getGEOInternals()->remove(dimTags, true);
      GModel::current()->remove(dimTags, true);
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 228:
#line 2882 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      GModel::current()->getFields()->deleteField((int)(yyvsp[(4) - (6)].d));
#endif
    ;}
    break;

  case 229:
#line 2888 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(2) - (6)].c), "View")){
	int index = (int)(yyvsp[(4) - (6)].d);
	if(index >= 0 && index < (int)PView::list.size())
	  delete PView::list[index];
	else
	  yymsg(0, "Unknown view %d", index);
      }
      else
	yymsg(0, "Unknown command 'Delete %s'", (yyvsp[(2) - (6)].c));
#endif
      Free((yyvsp[(2) - (6)].c));
    ;}
    break;

  case 230:
#line 2903 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(2) - (3)].c), "Meshes") || !strcmp((yyvsp[(2) - (3)].c), "All")){
        ClearProject();
      }
      else if(!strcmp((yyvsp[(2) - (3)].c), "Model")){
	GModel::current()->destroy(true); // destroy, but keep name/filename
	GModel::current()->getGEOInternals()->destroy();
      }
      else if(!strcmp((yyvsp[(2) - (3)].c), "Physicals")){
	GModel::current()->getGEOInternals()->resetPhysicalGroups();
	GModel::current()->deletePhysicalGroups();
      }
      else if(!strcmp((yyvsp[(2) - (3)].c), "Variables")){
	gmsh_yysymbols.clear();
      }
      else if(!strcmp((yyvsp[(2) - (3)].c), "Options")){
        ReInitOptions(0);
        InitOptionsGUI(0);
      }
      else{
	if(gmsh_yysymbols.count((yyvsp[(2) - (3)].c)))
	  gmsh_yysymbols.erase((yyvsp[(2) - (3)].c));
	else
	  yymsg(0, "Unknown object or expression to delete '%s'", (yyvsp[(2) - (3)].c));
      }
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 231:
#line 2931 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(2) - (4)].c), "Empty") && !strcmp((yyvsp[(3) - (4)].c), "Views")){
	for(int i = PView::list.size() - 1; i >= 0; i--)
	  if(PView::list[i]->getData()->empty()) delete PView::list[i];
      }
      else
	yymsg(0, "Unknown command 'Delete %s %s'", (yyvsp[(2) - (4)].c), (yyvsp[(3) - (4)].c));
#endif
      Free((yyvsp[(2) - (4)].c)); Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 232:
#line 2943 "Gmsh.y"
    {
      nameSpaces.clear();
    ;}
    break;

  case 233:
#line 2952 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (5)].l), dimTags);
      setColor(dimTags, (yyvsp[(2) - (5)].u), false);
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 234:
#line 2959 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(5) - (6)].l), dimTags);
      setColor(dimTags, (yyvsp[(3) - (6)].u), true);
      List_Delete((yyvsp[(5) - (6)].l));
    ;}
    break;

  case 235:
#line 2971 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (5)].l), dimTags);
      for(unsigned int i = 0; i < dimTags.size(); i++){
        GEntity *ge = GModel::current()->getEntityByTag
          (dimTags[i].first, dimTags[i].second);
        if(ge){
          for(unsigned int j = 0; j < ge->getNumMeshElements(); j++)
            ge->getMeshElement(j)->setPartition((int)(yyvsp[(2) - (5)].d));
        }
      }
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 236:
#line 2990 "Gmsh.y"
    {
      std::string what = (yyvsp[(2) - (3)].c);
      setVisibility(-1, 1, false);
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 237:
#line 2996 "Gmsh.y"
    {
      std::string what = (yyvsp[(2) - (3)].c);
      setVisibility(-1, 0, false);
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 238:
#line 3002 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(3) - (4)].l), dimTags);
      setVisibility(dimTags, 1, false);
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 239:
#line 3009 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (5)].l), dimTags);
      setVisibility(dimTags, 1, true);
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 240:
#line 3016 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(3) - (4)].l), dimTags);
      setVisibility(dimTags, 0, false);
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 241:
#line 3023 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (5)].l), dimTags);
      setVisibility(dimTags, 0, true);
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 242:
#line 3035 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(1) - (3)].c), "Include")){
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(2) - (3)].c));
	Msg::StatusBar(true, "Reading '%s'...", tmp.c_str());
	// Warning: we explicitly ask ParseFile not to fclose() the included
        // file, in order to allow user functions definitions in these files.
        // The files will be closed in the next time OpenFile terminates. If
        // you need to include many many files and don't have functions in
        // the files, use "Merge" instead of "Include", as some OSes limit
        // the number of files a process can open simultaneously. (A better
        // solution would be to modify FunctionManager to reopen the files
        // instead of using the FILE pointer...)
	ParseFile(tmp, false, true);
	SetBoundingBox();
	Msg::StatusBar(true, "Done reading '%s'", tmp.c_str());
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "Print")){
	// make sure we have the latest data from CAD internals in GModel (fixes
	// bug where we would have no geometry in the picture if the print
	// command is in the same file as the geometry)
        if(GModel::current()->getOCCInternals() &&
           GModel::current()->getOCCInternals()->getChanged())
          GModel::current()->getOCCInternals()->synchronize(GModel::current());
        if(GModel::current()->getGEOInternals()->getChanged())
          GModel::current()->getGEOInternals()->synchronize(GModel::current());
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(2) - (3)].c));
	CreateOutputFile(tmp, CTX::instance()->print.fileFormat);
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "Save")){
        if(GModel::current()->getOCCInternals() &&
           GModel::current()->getOCCInternals()->getChanged())
          GModel::current()->getOCCInternals()->synchronize(GModel::current());
        if(GModel::current()->getGEOInternals()->getChanged())
          GModel::current()->getGEOInternals()->synchronize(GModel::current());
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(2) - (3)].c));
	CreateOutputFile(tmp, CTX::instance()->mesh.fileFormat);
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "Merge") || !strcmp((yyvsp[(1) - (3)].c), "MergeWithBoundingBox")){
	// sync CAD internals here, so that if we e.g. import a STEP file, we
        // have the correct entity tags and the numberings don't clash
        if(GModel::current()->getOCCInternals() &&
           GModel::current()->getOCCInternals()->getChanged())
          GModel::current()->getOCCInternals()->synchronize(GModel::current());
        if(GModel::current()->getGEOInternals()->getChanged())
          GModel::current()->getGEOInternals()->synchronize(GModel::current());
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(2) - (3)].c));
	MergeFile(tmp, true);
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "NonBlockingSystemCall")){
	SystemCall((yyvsp[(2) - (3)].c));
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "System") || !strcmp((yyvsp[(1) - (3)].c), "SystemCall")){
	SystemCall((yyvsp[(2) - (3)].c), true);
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "SetName")){
	GModel::current()->setName((yyvsp[(2) - (3)].c));
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "CreateDir")){
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(2) - (3)].c));
	CreateSingleDir(tmp);
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "OnelabRun")){
        Msg::RunOnelabClient((yyvsp[(2) - (3)].c));
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "OptimizeMesh")){
        GModel::current()->optimizeMesh((yyvsp[(2) - (3)].c));
      }
      else{
	yymsg(0, "Unknown command '%s'", (yyvsp[(1) - (3)].c));
      }
      Free((yyvsp[(1) - (3)].c)); Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 243:
#line 3108 "Gmsh.y"
    {
      int n = List_Nbr((yyvsp[(3) - (5)].l));
      if(n == 1){
        char *s; List_Read((yyvsp[(3) - (5)].l), 0, &s);
        Msg::RunOnelabClient(s);
        Free(s);
      }
      else if(n == 2){
        char *s, *t; List_Read((yyvsp[(3) - (5)].l), 0, &s); List_Read((yyvsp[(3) - (5)].l), 1, &t);
        Msg::RunOnelabClient(s, t);
        Free(s); Free(t);
      }
      else{
        yymsg(0, "OnelabRun takes one or two arguments");
      }
      List_Delete((yyvsp[(3) - (5)].l));
    ;}
    break;

  case 244:
#line 3126 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(1) - (7)].c), "Save") && !strcmp((yyvsp[(2) - (7)].c), "View")){
	int index = (int)(yyvsp[(4) - (7)].d);
	if(index >= 0 && index < (int)PView::list.size()){
          std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(6) - (7)].c));
	  PView::list[index]->write(tmp, CTX::instance()->post.fileFormat);
	}
	else
	  yymsg(0, "Unknown view %d", index);
      }
      else
	yymsg(0, "Unknown command '%s'", (yyvsp[(1) - (7)].c));
#endif
      Free((yyvsp[(1) - (7)].c)); Free((yyvsp[(2) - (7)].c)); Free((yyvsp[(6) - (7)].c));
    ;}
    break;

  case 245:
#line 3143 "Gmsh.y"
    {
#if defined(HAVE_POST) && defined(HAVE_MESH)
      if(!strcmp((yyvsp[(1) - (7)].c), "Background") && !strcmp((yyvsp[(2) - (7)].c), "Mesh")  && !strcmp((yyvsp[(3) - (7)].c), "View")){
	int index = (int)(yyvsp[(5) - (7)].d);
	if(index >= 0 && index < (int)PView::list.size())
	  GModel::current()->getFields()->setBackgroundMesh(index);
	else
	  yymsg(0, "Unknown view %d", index);
      }
      else
	yymsg(0, "Unknown command '%s'", (yyvsp[(1) - (7)].c));
#endif
      Free((yyvsp[(1) - (7)].c)); Free((yyvsp[(2) - (7)].c)); Free((yyvsp[(3) - (7)].c));
    ;}
    break;

  case 246:
#line 3158 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(1) - (3)].c), "Sleep")){
	SleepInSeconds((yyvsp[(2) - (3)].d));
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "Remesh")){
	yymsg(0, "Surface remeshing must be reinterfaced");
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "Mesh")){
	int lock = CTX::instance()->lock;
	CTX::instance()->lock = 0;
        if(GModel::current()->getOCCInternals() &&
           GModel::current()->getOCCInternals()->getChanged())
          GModel::current()->getOCCInternals()->synchronize(GModel::current());
        if(GModel::current()->getGEOInternals()->getChanged())
          GModel::current()->getGEOInternals()->synchronize(GModel::current());
	GModel::current()->mesh((int)(yyvsp[(2) - (3)].d));
	CTX::instance()->lock = lock;
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "SetOrder")){
#if defined(HAVE_MESH)
        SetOrderN(GModel::current(), (yyvsp[(2) - (3)].d), CTX::instance()->mesh.secondOrderLinear,
                  CTX::instance()->mesh.secondOrderIncomplete,
                  CTX::instance()->mesh.meshOnlyVisible);
#endif
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "PartitionMesh")){
        GModel::current()->partitionMesh((yyvsp[(2) - (3)].d));
      }
      else
	yymsg(0, "Unknown command '%s'", (yyvsp[(1) - (3)].c));
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 247:
#line 3191 "Gmsh.y"
    {
#if defined(HAVE_PLUGINS)
       try {
	 PluginManager::instance()->action((yyvsp[(3) - (7)].c), (yyvsp[(6) - (7)].c), 0);
       }
       catch(...) {
	 yymsg(0, "Unknown action '%s' or plugin '%s'", (yyvsp[(6) - (7)].c), (yyvsp[(3) - (7)].c));
       }
#endif
       Free((yyvsp[(3) - (7)].c)); Free((yyvsp[(6) - (7)].c));
     ;}
    break;

  case 248:
#line 3203 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(2) - (3)].c), "ElementsFromAllViews"))
	PView::combine(false, 1, CTX::instance()->post.combineRemoveOrig);
      else if(!strcmp((yyvsp[(2) - (3)].c), "ElementsFromVisibleViews"))
	PView::combine(false, 0, CTX::instance()->post.combineRemoveOrig);
      else if(!strcmp((yyvsp[(2) - (3)].c), "ElementsByViewName"))
	PView::combine(false, 2, CTX::instance()->post.combineRemoveOrig);
      else if(!strcmp((yyvsp[(2) - (3)].c), "TimeStepsFromAllViews"))
	PView::combine(true, 1, CTX::instance()->post.combineRemoveOrig);
      else if(!strcmp((yyvsp[(2) - (3)].c), "TimeStepsFromVisibleViews"))
	PView::combine(true, 0, CTX::instance()->post.combineRemoveOrig);
      else if(!strcmp((yyvsp[(2) - (3)].c), "TimeStepsByViewName"))
	PView::combine(true, 2, CTX::instance()->post.combineRemoveOrig);
      else if(!strcmp((yyvsp[(2) - (3)].c), "Views"))
	PView::combine(false, 1, CTX::instance()->post.combineRemoveOrig);
      else if(!strcmp((yyvsp[(2) - (3)].c), "TimeSteps"))
	PView::combine(true, 2, CTX::instance()->post.combineRemoveOrig);
      else
	yymsg(0, "Unknown 'Combine' command");
#endif
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 249:
#line 3227 "Gmsh.y"
    {
      Msg::Exit(0);
    ;}
    break;

  case 250:
#line 3231 "Gmsh.y"
    {
      gmsh_yyerrorstate = 999; // this will be checked when yyparse returns
      YYABORT;
    ;}
    break;

  case 251:
#line 3236 "Gmsh.y"
    {
      // force sync
      if(GModel::current()->getOCCInternals())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      GModel::current()->getGEOInternals()->synchronize(GModel::current());
    ;}
    break;

  case 252:
#line 3243 "Gmsh.y"
    {
      new GModel();
      GModel::current(GModel::list.size() - 1);
    ;}
    break;

  case 253:
#line 3248 "Gmsh.y"
    {
      CTX::instance()->forcedBBox = 0;
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(GModel::current()->getGEOInternals()->getChanged())
        GModel::current()->getGEOInternals()->synchronize(GModel::current());
      SetBoundingBox();
    ;}
    break;

  case 254:
#line 3258 "Gmsh.y"
    {
      CTX::instance()->forcedBBox = 1;
      SetBoundingBox((yyvsp[(3) - (15)].d), (yyvsp[(5) - (15)].d), (yyvsp[(7) - (15)].d), (yyvsp[(9) - (15)].d), (yyvsp[(11) - (15)].d), (yyvsp[(13) - (15)].d));
    ;}
    break;

  case 255:
#line 3263 "Gmsh.y"
    {
#if defined(HAVE_OPENGL)
      drawContext::global()->draw();
#endif
    ;}
    break;

  case 256:
#line 3269 "Gmsh.y"
    {
#if defined(HAVE_OPENGL)
     CTX::instance()->mesh.changed = ENT_ALL;
     for(unsigned int index = 0; index < PView::list.size(); index++)
       PView::list[index]->setChanged(true);
#endif
    ;}
    break;

  case 257:
#line 3277 "Gmsh.y"
    {
      GModel::current()->createTopologyFromMesh();
    ;}
    break;

  case 258:
#line 3281 "Gmsh.y"
    {
      GModel::current()->createTopologyFromMesh(1);
    ;}
    break;

  case 259:
#line 3285 "Gmsh.y"
    {
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(GModel::current()->getGEOInternals()->getChanged())
        GModel::current()->getGEOInternals()->synchronize(GModel::current());
      GModel::current()->refineMesh(CTX::instance()->mesh.secondOrderLinear);
    ;}
    break;

  case 260:
#line 3295 "Gmsh.y"
    {
      int lock = CTX::instance()->lock;
      CTX::instance()->lock = 0;
      std::vector<int> technique;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (16)].l)); i++){
        double d;
        List_Read((yyvsp[(3) - (16)].l), i, &d);
        technique.push_back((int)d);
      }
      if(technique.empty()){
        yymsg(0, "Need at least one adaptation technique");
      }
      else{
        std::vector<simpleFunction<double>*> f;
        for(int i = 0; i < List_Nbr((yyvsp[(6) - (16)].l)); i++){
          double d;
          List_Read((yyvsp[(6) - (16)].l), i, &d);
          gLevelset *l = gLevelset::find((int)d);
          if(l) f.push_back(l);
          else yymsg(0, "Unknown levelset %d", (int)d);
        }
        if(technique.size() != f.size()){
          yymsg(0, "Number of techniques != number of levelsets");
        }
        else{
          if(List_Nbr((yyvsp[(9) - (16)].l)) != (int)f.size()){
            yymsg(0, "Number of parameters != number of levelsets");
          }
          else{
            std::vector<std::vector<double> > parameters;
            parameters.resize(List_Nbr((yyvsp[(9) - (16)].l)));
            for(int i = 0; i < List_Nbr((yyvsp[(9) - (16)].l)); i++){
              List_T *l = *(List_T**)List_Pointer((yyvsp[(9) - (16)].l), i);
              for(int j = 0; j < List_Nbr(l); j++){
                double d;
                List_Read(l, j, &d);
                parameters[i].push_back(d);
              }
            }
            int niter = (int)(yyvsp[(12) - (16)].d);
            bool meshAll = ((yyvsp[(14) - (16)].d) == 0) ? false : true;
            if(GModel::current()->getOCCInternals() &&
               GModel::current()->getOCCInternals()->getChanged())
              GModel::current()->getOCCInternals()->synchronize(GModel::current());
            if(GModel::current()->getGEOInternals()->getChanged())
              GModel::current()->getGEOInternals()->synchronize(GModel::current());
            GModel::current()->adaptMesh(technique, f, parameters, niter, meshAll);
          }
        }
      }
      List_Delete((yyvsp[(3) - (16)].l));
      List_Delete((yyvsp[(6) - (16)].l));
      for(int i = 0; i < List_Nbr((yyvsp[(9) - (16)].l)); i++)
        List_Delete(*(List_T**)List_Pointer((yyvsp[(9) - (16)].l), i));
      List_Delete((yyvsp[(9) - (16)].l));
      CTX::instance()->lock = lock;
    ;}
    break;

  case 261:
#line 3358 "Gmsh.y"
    {
#if defined(HAVE_POPPLER)
       std::vector<int> is;
       for(int i = 0; i < List_Nbr((yyvsp[(4) - (11)].l)); i++){
	 double d;
	 List_Read((yyvsp[(4) - (11)].l), i, &d);
	 is.push_back ((int) d);
       }
       gmshPopplerWrapper::instance()->setMacroForPages(is, (yyvsp[(7) - (11)].c), (yyvsp[(9) - (11)].c) );
#endif
     ;}
    break;

  case 262:
#line 3374 "Gmsh.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = (yyvsp[(3) - (6)].d);
      LoopControlVariablesTab[ImbricatedLoop][1] = (yyvsp[(5) - (6)].d);
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0;
      LoopControlVariablesNameTab[ImbricatedLoop] = "";
      gmshgetpos(gmsh_yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = gmsh_yylineno;
      if((yyvsp[(3) - (6)].d) > (yyvsp[(5) - (6)].d))
	skip("For", "EndFor");
      else
	ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS - 1){
	yymsg(0, "Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS - 1;
      }
    ;}
    break;

  case 263:
#line 3391 "Gmsh.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = (yyvsp[(3) - (8)].d);
      LoopControlVariablesTab[ImbricatedLoop][1] = (yyvsp[(5) - (8)].d);
      LoopControlVariablesTab[ImbricatedLoop][2] = (yyvsp[(7) - (8)].d);
      LoopControlVariablesNameTab[ImbricatedLoop] = "";
      gmshgetpos(gmsh_yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = gmsh_yylineno;
      if(((yyvsp[(7) - (8)].d) > 0. && (yyvsp[(3) - (8)].d) > (yyvsp[(5) - (8)].d)) || ((yyvsp[(7) - (8)].d) < 0. && (yyvsp[(3) - (8)].d) < (yyvsp[(5) - (8)].d)))
	skip("For", "EndFor");
      else
	ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS - 1){
	yymsg(0, "Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS - 1;
      }
    ;}
    break;

  case 264:
#line 3408 "Gmsh.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = (yyvsp[(5) - (8)].d);
      LoopControlVariablesTab[ImbricatedLoop][1] = (yyvsp[(7) - (8)].d);
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0;
      LoopControlVariablesNameTab[ImbricatedLoop] = (yyvsp[(2) - (8)].c);
      gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(2) - (8)].c)]);
      s.list = false;
      s.value.resize(1);
      s.value[0] = (yyvsp[(5) - (8)].d);
      gmshgetpos(gmsh_yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = gmsh_yylineno;
      if((yyvsp[(5) - (8)].d) > (yyvsp[(7) - (8)].d))
	skip("For", "EndFor");
      else
	ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS - 1){
	yymsg(0, "Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS - 1;
      }
      Free((yyvsp[(2) - (8)].c));
    ;}
    break;

  case 265:
#line 3430 "Gmsh.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = (yyvsp[(5) - (10)].d);
      LoopControlVariablesTab[ImbricatedLoop][1] = (yyvsp[(7) - (10)].d);
      LoopControlVariablesTab[ImbricatedLoop][2] = (yyvsp[(9) - (10)].d);
      LoopControlVariablesNameTab[ImbricatedLoop] = (yyvsp[(2) - (10)].c);
      gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(2) - (10)].c)]);
      s.list = false;
      s.value.resize(1);
      s.value[0] = (yyvsp[(5) - (10)].d);
      gmshgetpos(gmsh_yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = gmsh_yylineno;
      if(((yyvsp[(9) - (10)].d) > 0. && (yyvsp[(5) - (10)].d) > (yyvsp[(7) - (10)].d)) || ((yyvsp[(9) - (10)].d) < 0. && (yyvsp[(5) - (10)].d) < (yyvsp[(7) - (10)].d)))
	skip("For", "EndFor");
      else
	ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS - 1){
	yymsg(0, "Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS - 1;
      }
      Free((yyvsp[(2) - (10)].c));
    ;}
    break;

  case 266:
#line 3452 "Gmsh.y"
    {
      if(ImbricatedLoop <= 0){
	yymsg(0, "Invalid For/EndFor loop");
	ImbricatedLoop = 0;
      }
      else{
	double step = LoopControlVariablesTab[ImbricatedLoop - 1][2];
        std::string name = LoopControlVariablesNameTab[ImbricatedLoop - 1];
        if(name.size()){
          if(!gmsh_yysymbols.count(name))
            yymsg(0, "Unknown loop variable '%s'", name.c_str());
          else{
            gmsh_yysymbol &s(gmsh_yysymbols[name]);
            if(!s.list && s.value.size()){
              s.value[0] += step;
              LoopControlVariablesTab[ImbricatedLoop - 1][0] = s.value[0];
            }
            else
              yymsg(0, "Bad loop variable %s", name.c_str());
          }
        }
        else{
          LoopControlVariablesTab[ImbricatedLoop - 1][0] += step;
        }
	double x0 = LoopControlVariablesTab[ImbricatedLoop - 1][0];
	double x1 = LoopControlVariablesTab[ImbricatedLoop - 1][1];
        if((step > 0. && x0 <= x1) || (step < 0. && x0 >= x1)){
	  gmshsetpos(gmsh_yyin, &yyposImbricatedLoopsTab[ImbricatedLoop - 1]);
	  gmsh_yylineno = yylinenoImbricatedLoopsTab[ImbricatedLoop - 1];
	}
	else
	  ImbricatedLoop--;
      }
    ;}
    break;

  case 267:
#line 3487 "Gmsh.y"
    {
      if(!FunctionManager::Instance()->createFunction
         (std::string((yyvsp[(2) - (2)].c)), gmsh_yyin, gmsh_yyname, gmsh_yylineno))
	yymsg(0, "Redefinition of function %s", (yyvsp[(2) - (2)].c));
      skip(NULL, "Return");
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 268:
#line 3495 "Gmsh.y"
    {
      if(!FunctionManager::Instance()->createFunction
         (std::string((yyvsp[(2) - (2)].c)), gmsh_yyin, gmsh_yyname, gmsh_yylineno))
	yymsg(0, "Redefinition of function %s", (yyvsp[(2) - (2)].c));
      skip(NULL, "Return");
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 269:
#line 3503 "Gmsh.y"
    {
      if(!FunctionManager::Instance()->leaveFunction
         (&gmsh_yyin, gmsh_yyname, gmsh_yylineno))
	yymsg(0, "Error while exiting function");
    ;}
    break;

  case 270:
#line 3509 "Gmsh.y"
    {
      if(!FunctionManager::Instance()->enterFunction
         (std::string((yyvsp[(2) - (3)].c)), &gmsh_yyin, gmsh_yyname, gmsh_yylineno))
	yymsg(0, "Unknown function '%s'", (yyvsp[(2) - (3)].c));
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 271:
#line 3516 "Gmsh.y"
    {
      if(!FunctionManager::Instance()->enterFunction
         (std::string((yyvsp[(2) - (3)].c)), &gmsh_yyin, gmsh_yyname, gmsh_yylineno))
	yymsg(0, "Unknown function '%s'", (yyvsp[(2) - (3)].c));
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 272:
#line 3523 "Gmsh.y"
    {
      ImbricatedTest++;
      if(ImbricatedTest > MAX_RECUR_TESTS-1){
	yymsg(0, "Reached maximum number of imbricated tests");
        ImbricatedTest = MAX_RECUR_TESTS-1;
      }

      if((yyvsp[(3) - (4)].d)){
        // Current test is true
        statusImbricatedTests[ImbricatedTest] = 1;
      }
      else{
        statusImbricatedTests[ImbricatedTest] = 0;
        // Go after the next ElseIf or Else or EndIf
        int type_until2 = 0;
        skipTest("If", "EndIf", "ElseIf", 4, &type_until2);
        if(!type_until2) ImbricatedTest--; // EndIf reached
      }
    ;}
    break;

  case 273:
#line 3543 "Gmsh.y"
    {
      if(ImbricatedTest > 0){
        if (statusImbricatedTests[ImbricatedTest]){
          // Last test (If or ElseIf) was true, thus go after EndIf (out of If EndIf)
          skip("If", "EndIf");
          ImbricatedTest--;
        }
        else{
          // Previous test(s) (If and ElseIf) not yet true
          if((yyvsp[(3) - (4)].d)){
            statusImbricatedTests[ImbricatedTest] = 1;
          }
          else{
            // Current test still not true: statusImbricatedTests[ImbricatedTest] = 0;
            // Go after the next ElseIf or Else or EndIf
            int type_until2 = 0;
            skipTest("If", "EndIf", "ElseIf", 4, &type_until2);
            if(!type_until2) ImbricatedTest--;
          }
        }
      }
      else{
	yymsg(0, "Orphan ElseIf");
      }
    ;}
    break;

  case 274:
#line 3569 "Gmsh.y"
    {
      if(ImbricatedTest > 0){
        if(statusImbricatedTests[ImbricatedTest]){
          skip("If", "EndIf");
          ImbricatedTest--;
        }
      }
      else{
	yymsg(0, "Orphan Else");
      }
    ;}
    break;

  case 275:
#line 3581 "Gmsh.y"
    {
      ImbricatedTest--;
      if(ImbricatedTest < 0)
        yymsg(1, "Orphan EndIf");
    ;}
    break;

  case 276:
#line 3593 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (5)].l), inDimTags);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->extrude
          (inDimTags, (yyvsp[(2) - (5)].v)[0], (yyvsp[(2) - (5)].v)[1], (yyvsp[(2) - (5)].v)[2], outDimTags);
      }
      else{
        r = GModel::current()->getGEOInternals()->extrude
          (inDimTags, (yyvsp[(2) - (5)].v)[0], (yyvsp[(2) - (5)].v)[1], (yyvsp[(2) - (5)].v)[2], outDimTags);
      }
      if(!r) yymsg(0, "Could not extrude shapes");
      (yyval.l) = (yyvsp[(4) - (5)].l);
      List_Reset((yyval.l));
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
    ;}
    break;

  case 277:
#line 3611 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(10) - (11)].l), inDimTags);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->revolve
          (inDimTags, (yyvsp[(5) - (11)].v)[0], (yyvsp[(5) - (11)].v)[1], (yyvsp[(5) - (11)].v)[2], (yyvsp[(3) - (11)].v)[0], (yyvsp[(3) - (11)].v)[1], (yyvsp[(3) - (11)].v)[2], (yyvsp[(7) - (11)].d), outDimTags);
      }
      else{
        r = GModel::current()->getGEOInternals()->revolve
          (inDimTags, (yyvsp[(5) - (11)].v)[0], (yyvsp[(5) - (11)].v)[1], (yyvsp[(5) - (11)].v)[2], (yyvsp[(3) - (11)].v)[0], (yyvsp[(3) - (11)].v)[1], (yyvsp[(3) - (11)].v)[2], (yyvsp[(7) - (11)].d), outDimTags);
      }
      if(!r) yymsg(0, "Could not extrude shapes");
      (yyval.l) = (yyvsp[(10) - (11)].l);
      List_Reset((yyval.l));
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
    ;}
    break;

  case 278:
#line 3629 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(12) - (13)].l), inDimTags);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        yymsg(0, "Twisting extrude not available with OpenCASCADE factory");
      }
      else{
        r = GModel::current()->getGEOInternals()->twist
          (inDimTags, (yyvsp[(7) - (13)].v)[0], (yyvsp[(7) - (13)].v)[1], (yyvsp[(7) - (13)].v)[2], (yyvsp[(3) - (13)].v)[0], (yyvsp[(3) - (13)].v)[1], (yyvsp[(3) - (13)].v)[2], (yyvsp[(5) - (13)].v)[0], (yyvsp[(5) - (13)].v)[1], (yyvsp[(5) - (13)].v)[2],
           (yyvsp[(9) - (13)].d), outDimTags);
      }
      if(!r) yymsg(0, "Could not extrude shapes");
      (yyval.l) = (yyvsp[(12) - (13)].l);
      List_Reset((yyval.l));
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
    ;}
    break;

  case 279:
#line 3647 "Gmsh.y"
    {
      extr.mesh.ExtrudeMesh = extr.mesh.Recombine = false;
      extr.mesh.QuadToTri = NO_QUADTRI;
      extr.mesh.ScaleLast = false;
    ;}
    break;

  case 280:
#line 3653 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (7)].l), inDimTags);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->extrude
          (inDimTags, (yyvsp[(2) - (7)].v)[0], (yyvsp[(2) - (7)].v)[1], (yyvsp[(2) - (7)].v)[2], outDimTags, &extr);
      }
      else{
        r = GModel::current()->getGEOInternals()->extrude
          (inDimTags, (yyvsp[(2) - (7)].v)[0], (yyvsp[(2) - (7)].v)[1], (yyvsp[(2) - (7)].v)[2], outDimTags, &extr);
      }
      if(!r) yymsg(0, "Could not extrude shapes");
      (yyval.l) = (yyvsp[(4) - (7)].l);
      List_Reset((yyval.l));
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
    ;}
    break;

  case 281:
#line 3671 "Gmsh.y"
    {
      extr.mesh.ExtrudeMesh = extr.mesh.Recombine = false;
      extr.mesh.QuadToTri = NO_QUADTRI;
      extr.mesh.ScaleLast = false;
    ;}
    break;

  case 282:
#line 3677 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(10) - (13)].l), inDimTags);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->revolve
          (inDimTags, (yyvsp[(5) - (13)].v)[0], (yyvsp[(5) - (13)].v)[1], (yyvsp[(5) - (13)].v)[2], (yyvsp[(3) - (13)].v)[0], (yyvsp[(3) - (13)].v)[1], (yyvsp[(3) - (13)].v)[2], (yyvsp[(7) - (13)].d), outDimTags,
           &extr);
      }
      else{
        r = GModel::current()->getGEOInternals()->revolve
          (inDimTags, (yyvsp[(5) - (13)].v)[0], (yyvsp[(5) - (13)].v)[1], (yyvsp[(5) - (13)].v)[2], (yyvsp[(3) - (13)].v)[0], (yyvsp[(3) - (13)].v)[1], (yyvsp[(3) - (13)].v)[2], (yyvsp[(7) - (13)].d), outDimTags,
           &extr);
      }
      if(!r) yymsg(0, "Could not extrude shapes");
      (yyval.l) = (yyvsp[(10) - (13)].l);
      List_Reset((yyval.l));
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
    ;}
    break;

  case 283:
#line 3697 "Gmsh.y"
    {
      extr.mesh.ExtrudeMesh = extr.mesh.Recombine = false;
      extr.mesh.QuadToTri = NO_QUADTRI;
      extr.mesh.ScaleLast = false;
    ;}
    break;

  case 284:
#line 3703 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(12) - (15)].l), inDimTags);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        yymsg(0, "Twisting extrude not available with OpenCASCADE factory");
      }
      else{
        r = GModel::current()->getGEOInternals()->twist
          (inDimTags, (yyvsp[(7) - (15)].v)[0], (yyvsp[(7) - (15)].v)[1], (yyvsp[(7) - (15)].v)[2], (yyvsp[(3) - (15)].v)[0], (yyvsp[(3) - (15)].v)[1], (yyvsp[(3) - (15)].v)[2], (yyvsp[(5) - (15)].v)[0], (yyvsp[(5) - (15)].v)[1], (yyvsp[(5) - (15)].v)[2],
           (yyvsp[(9) - (15)].d),  outDimTags, &extr);
      }
      if(!r) yymsg(0, "Could not extrude shapes");
      (yyval.l) = (yyvsp[(12) - (15)].l);
      List_Reset((yyval.l));
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
    ;}
    break;

  case 285:
#line 3721 "Gmsh.y"
    {
      extr.mesh.ExtrudeMesh = extr.mesh.Recombine = false;
      extr.mesh.QuadToTri = NO_QUADTRI;
      extr.mesh.ScaleLast = false;
    ;}
    break;

  case 286:
#line 3727 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(3) - (6)].l), inDimTags);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        yymsg(0, "Boundary layer extrusion not available with OpenCASCADE factory");
      }
      else{
        r = GModel::current()->getGEOInternals()->boundaryLayer
          (inDimTags, outDimTags, &extr);
      }
      if(!r) yymsg(0, "Could not extrude shapes");
      (yyval.l) = (yyvsp[(3) - (6)].l);
      List_Reset((yyval.l));
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
    ;}
    break;

  case 287:
#line 3744 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(3) - (9)].l), inDimTags);
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->addPipe(inDimTags, (int)(yyvsp[(8) - (9)].d), outDimTags);
      }
      else{
        yymsg(0, "Pipe only available with OpenCASCADE factory");
      }
      if(!r) yymsg(0, "Could not extrude shapes");
      (yyval.l) = (yyvsp[(3) - (9)].l);
      List_Reset((yyval.l));
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
    ;}
    break;

  case 288:
#line 3760 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<int> wires; ListOfDouble2Vector((yyvsp[(2) - (2)].l), wires);
        std::vector<std::pair<int, int> > outDimTags;
        r = GModel::current()->getOCCInternals()->addThruSections
          (-1, wires, outDimTags, false, false);
        VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
      }
      else{
        yymsg(0, "ThruSections only available with OpenCASCADE factory");
      }
      if(!r) yymsg(0, "Could not add thrusections");
      List_Delete((yyvsp[(2) - (2)].l));
    ;}
    break;

  case 289:
#line 3777 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<int> wires; ListOfDouble2Vector((yyvsp[(3) - (3)].l), wires);
        std::vector<std::pair<int, int> > outDimTags;
        r = GModel::current()->getOCCInternals()->addThruSections
          (-1, wires, outDimTags, false, true);
        VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
      }
      else{
        yymsg(0, "ThruSections only available with OpenCASCADE factory");
      }
      if(!r) yymsg(0, "Could not add ruled thrusections");
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 290:
#line 3794 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        double radius = (yyvsp[(9) - (10)].d);
        std::vector<int> regions, edges;
        ListOfDouble2Vector((yyvsp[(3) - (10)].l), regions); ListOfDouble2Vector((yyvsp[(6) - (10)].l), edges);
        std::vector<std::pair<int, int> > outDimTags;
        r = GModel::current()->getOCCInternals()->fillet
          (regions, edges, radius, outDimTags);
        VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
      }
      else{
        yymsg(0, "Fillet only available with OpenCASCADE factory");
      }
      if(!r) yymsg(0, "Could not fillet shapes");
      List_Delete((yyvsp[(3) - (10)].l));
      List_Delete((yyvsp[(6) - (10)].l));
    ;}
    break;

  case 291:
#line 3817 "Gmsh.y"
    {
    ;}
    break;

  case 292:
#line 3820 "Gmsh.y"
    {
    ;}
    break;

  case 293:
#line 3826 "Gmsh.y"
    {
      int n = (int)fabs((yyvsp[(3) - (5)].d));
      if(n){ // we accept n==0 to easily disable layers
        extr.mesh.ExtrudeMesh = true;
        extr.mesh.NbLayer = 1;
        extr.mesh.NbElmLayer.clear();
        extr.mesh.hLayer.clear();
        extr.mesh.NbElmLayer.push_back((int)fabs((yyvsp[(3) - (5)].d)));
        extr.mesh.hLayer.push_back(1.);
      }
    ;}
    break;

  case 294:
#line 3838 "Gmsh.y"
    {
      extr.mesh.ExtrudeMesh = true;
      extr.mesh.NbLayer = List_Nbr((yyvsp[(3) - (7)].l));
      if(List_Nbr((yyvsp[(3) - (7)].l)) == List_Nbr((yyvsp[(5) - (7)].l))){
	extr.mesh.NbElmLayer.clear();
	extr.mesh.hLayer.clear();
	for(int i = 0; i < List_Nbr((yyvsp[(3) - (7)].l)); i++){
	  double d;
	  List_Read((yyvsp[(3) - (7)].l), i, &d);
	  extr.mesh.NbElmLayer.push_back((d > 0) ? (int)d : 1);
	  List_Read((yyvsp[(5) - (7)].l), i, &d);
	  extr.mesh.hLayer.push_back(d);
	}
      }
      else
	yymsg(0, "Wrong layer definition {%d, %d}", List_Nbr((yyvsp[(3) - (7)].l)), List_Nbr((yyvsp[(5) - (7)].l)));
      List_Delete((yyvsp[(3) - (7)].l));
      List_Delete((yyvsp[(5) - (7)].l));
    ;}
    break;

  case 295:
#line 3858 "Gmsh.y"
    {
      extr.mesh.ScaleLast = true;
    ;}
    break;

  case 296:
#line 3862 "Gmsh.y"
    {
      extr.mesh.Recombine = true;
    ;}
    break;

  case 297:
#line 3866 "Gmsh.y"
    {
      extr.mesh.Recombine = (yyvsp[(2) - (3)].d) ? true : false;
    ;}
    break;

  case 298:
#line 3870 "Gmsh.y"
    {
      extr.mesh.QuadToTri = QUADTRI_ADDVERTS_1;
    ;}
    break;

  case 299:
#line 3874 "Gmsh.y"
    {
      extr.mesh.QuadToTri = QUADTRI_ADDVERTS_1_RECOMB;
    ;}
    break;

  case 300:
#line 3878 "Gmsh.y"
    {
      extr.mesh.QuadToTri = QUADTRI_NOVERTS_1;
    ;}
    break;

  case 301:
#line 3882 "Gmsh.y"
    {
      extr.mesh.QuadToTri = QUADTRI_NOVERTS_1_RECOMB;
    ;}
    break;

  case 302:
#line 3886 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (9)].l), tags);
      int num = (int)(yyvsp[(3) - (9)].d);
      GModel::current()->getGEOInternals()->addDiscreteSurface(num);
      extr.mesh.Holes[num].first = (yyvsp[(8) - (9)].d);
      extr.mesh.Holes[num].second = tags;
      List_Delete((yyvsp[(6) - (9)].l));
    ;}
    break;

  case 303:
#line 3895 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(2) - (6)].c), "Index"))
        extr.mesh.BoundaryLayerIndex = (yyvsp[(4) - (6)].d);
      else if(!strcmp((yyvsp[(2) - (6)].c), "View"))
        extr.mesh.ViewIndex = (yyvsp[(4) - (6)].d);
      Free((yyvsp[(2) - (6)].c));
    ;}
    break;

  case 304:
#line 3907 "Gmsh.y"
    { (yyval.i) = OCC_Internals::Union; ;}
    break;

  case 305:
#line 3908 "Gmsh.y"
    { (yyval.i) = OCC_Internals::Intersection; ;}
    break;

  case 306:
#line 3909 "Gmsh.y"
    { (yyval.i) = OCC_Internals::Difference; ;}
    break;

  case 307:
#line 3910 "Gmsh.y"
    { (yyval.i) = OCC_Internals::Section; ;}
    break;

  case 308:
#line 3911 "Gmsh.y"
    { (yyval.i) = OCC_Internals::Fragments; ;}
    break;

  case 309:
#line 3915 "Gmsh.y"
    { (yyval.i) = 0; ;}
    break;

  case 310:
#line 3916 "Gmsh.y"
    { (yyval.i) = 1; ;}
    break;

  case 311:
#line 3917 "Gmsh.y"
    { (yyval.i) = 2; ;}
    break;

  case 312:
#line 3918 "Gmsh.y"
    { (yyval.i) = (yyvsp[(2) - (3)].d) ? 1 : 0; ;}
    break;

  case 313:
#line 3919 "Gmsh.y"
    { (yyval.i) = (yyvsp[(3) - (4)].d) ? 2 : 0; ;}
    break;

  case 314:
#line 3924 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<std::pair<int, int > > object, tool, out;
        ListOfShapes2VectorOfPairs((yyvsp[(3) - (9)].l), object);
        ListOfShapes2VectorOfPairs((yyvsp[(7) - (9)].l), tool);
        // currently we don't distinguish between Delete and Recursive Delete:
        // we always delete recursively. Let us know if you have examples where
        // having the choice would be interesting
        r = GModel::current()->getOCCInternals()->applyBooleanOperator
          (-1, (OCC_Internals::BooleanOperator)(yyvsp[(1) - (9)].i), object, tool, out, (yyvsp[(4) - (9)].i), (yyvsp[(8) - (9)].i));
        VectorOfPairs2ListOfShapes(out, (yyval.l));
      }
      else{
        yymsg(0, "Boolean operators only available with OpenCASCADE factory");
      }
      if(!r) yymsg(0, "Could not apply boolean operator");
      List_Delete((yyvsp[(3) - (9)].l));
      List_Delete((yyvsp[(7) - (9)].l));
    ;}
    break;

  case 315:
#line 3946 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<std::pair<int, int> > out;
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(3) - (4)].c));
        GModel::current()->getOCCInternals()->importShapes(tmp, true, out);
        VectorOfPairs2ListOfShapes(out, (yyval.l));
      }
      else{
        yymsg(0, "ShapeFromFile only available with OpenCASCADE factory");
      }
      if(!r) yymsg(0, "Could import shape");
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 316:
#line 3966 "Gmsh.y"
    {
      bool r = true;
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<std::pair<int, int> > object, tool, out;
        ListOfShapes2VectorOfPairs((yyvsp[(7) - (14)].l), object);
        ListOfShapes2VectorOfPairs((yyvsp[(11) - (14)].l), tool);
        // currently we don't distinguish between Delete and Recursive Delete:
        // we always delete recursively. Let us know if you have examples where
        // having the choice would be interesting
        r = GModel::current()->getOCCInternals()->applyBooleanOperator
          ((int)(yyvsp[(3) - (14)].d), (OCC_Internals::BooleanOperator)(yyvsp[(1) - (14)].i), object, tool, out, (yyvsp[(8) - (14)].i), (yyvsp[(12) - (14)].i));
      }
      if(!r) yymsg(0, "Could not apply boolean operator");
      List_Delete((yyvsp[(7) - (14)].l));
      List_Delete((yyvsp[(11) - (14)].l));
    ;}
    break;

  case 317:
#line 3986 "Gmsh.y"
    {
      (yyval.v)[0] = (yyval.v)[1] = 1.;
    ;}
    break;

  case 318:
#line 3990 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(2) - (3)].c), "Progression") || !strcmp((yyvsp[(2) - (3)].c), "Power"))
        (yyval.v)[0] = 1.;
      else if(!strcmp((yyvsp[(2) - (3)].c), "Bump"))
        (yyval.v)[0] = 2.;
      else{
        yymsg(0, "Unknown transfinite mesh type");
        (yyval.v)[0] = 1.;
      }
      (yyval.v)[1] = (yyvsp[(3) - (3)].d);
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 319:
#line 4005 "Gmsh.y"
    {
      (yyval.i) = -1; // left
    ;}
    break;

  case 320:
#line 4009 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(1) - (1)].c), "Right"))
        (yyval.i) = 1;
      else if(!strcmp((yyvsp[(1) - (1)].c), "Left"))
	(yyval.i) = -1;
      else if(!strcmp((yyvsp[(1) - (1)].c), "AlternateRight"))
	(yyval.i) = 2;
      else if(!strcmp((yyvsp[(1) - (1)].c), "AlternateLeft"))
	(yyval.i) = -2;
      else // "Alternate" -> "Alternate Right"
	(yyval.i) = 2;
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 321:
#line 4025 "Gmsh.y"
    {
     (yyval.l) = List_Create(1, 1, sizeof(double));
   ;}
    break;

  case 322:
#line 4029 "Gmsh.y"
    {
     (yyval.l) = (yyvsp[(2) - (2)].l);
   ;}
    break;

  case 323:
#line 4034 "Gmsh.y"
    {
      (yyval.i) = 45;
    ;}
    break;

  case 324:
#line 4038 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(2) - (2)].d);
    ;}
    break;

  case 325:
#line 4044 "Gmsh.y"
    {
      (yyval.l) = List_Create(1, 1, sizeof(double));
    ;}
    break;

  case 326:
#line 4048 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(2) - (2)].l);
    ;}
    break;

  case 327:
#line 4055 "Gmsh.y"
    {
      // mesh sizes at vertices are stored in internal CAD data, as they can be
      // specified during vertex creation and copied around during CAD
      // operations
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (6)].l)); i++){
	double d;
	List_Read((yyvsp[(3) - (6)].l), i, &d);
        int tag = (int)d;
        if(GModel::current()->getOCCInternals())
          GModel::current()->getOCCInternals()->setMeshSize(0, tag, (yyvsp[(5) - (6)].d));
        GModel::current()->getGEOInternals()->setMeshSize(0, tag, (yyvsp[(5) - (6)].d));
        GVertex *gv = GModel::current()->getVertexByTag(tag);
        if(gv) gv->setPrescribedMeshSizeAtVertex((yyvsp[(5) - (6)].d));
      }
      List_Delete((yyvsp[(3) - (6)].l));
    ;}
    break;

  case 328:
#line 4072 "Gmsh.y"
    {
      // transfinite constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      int type = (int)(yyvsp[(6) - (7)].v)[0];
      double coef = fabs((yyvsp[(6) - (7)].v)[1]);
      int npoints = ((int)(yyvsp[(5) - (7)].d) < 2) ? 2 : (int)(yyvsp[(5) - (7)].d);
      if(!(yyvsp[(3) - (7)].l)){
        GModel::current()->getGEOInternals()->setTransfiniteLine
          (0, npoints, type, coef);
        for(GModel::eiter it = GModel::current()->firstEdge();
            it != GModel::current()->lastEdge(); it++){
          (*it)->meshAttributes.method = MESH_TRANSFINITE;
          (*it)->meshAttributes.nbPointsTransfinite = npoints;
          (*it)->meshAttributes.typeTransfinite = type;
          (*it)->meshAttributes.coeffTransfinite = coef;
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (7)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (7)].l), i, &d);
          int j = (int)fabs(d);
          for(int sig = -1; sig <= 1; sig += 2){
            GModel::current()->getGEOInternals()->setTransfiniteLine
              (sig * j, npoints, type * gmsh_sign(d), coef);
            GEdge *ge = GModel::current()->getEdgeByTag(sig * j);
            if(ge){
              ge->meshAttributes.method = MESH_TRANSFINITE;
              ge->meshAttributes.nbPointsTransfinite = npoints;
              ge->meshAttributes.typeTransfinite = type * gmsh_sign(d);
              ge->meshAttributes.coeffTransfinite = coef;
            }
          }
        }
        List_Delete((yyvsp[(3) - (7)].l));
      }
    ;}
    break;

  case 329:
#line 4113 "Gmsh.y"
    {
      // transfinite constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      std::vector<int> corners; ListOfDouble2Vector((yyvsp[(4) - (6)].l), corners);
      if(!(yyvsp[(3) - (6)].l)){
        GModel::current()->getGEOInternals()->setTransfiniteSurface(0, (yyvsp[(5) - (6)].i), corners);
        for(GModel::fiter it = GModel::current()->firstFace();
            it != GModel::current()->lastFace(); it++){
          (*it)->meshAttributes.method = MESH_TRANSFINITE;
          (*it)->meshAttributes.transfiniteArrangement = (yyvsp[(5) - (6)].i);
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (6)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (6)].l), i, &d);
          int tag = (int)d;
          GModel::current()->getGEOInternals()->setTransfiniteSurface(tag, (yyvsp[(5) - (6)].i), corners);
          GFace *gf = GModel::current()->getFaceByTag(tag);
          if(gf){
            gf->meshAttributes.method = MESH_TRANSFINITE;
            gf->meshAttributes.transfiniteArrangement = (yyvsp[(5) - (6)].i);
            if(corners.empty() || corners.size() == 3 || corners.size() == 4){
              for(unsigned int j = 0; j < corners.size(); j++){
                GVertex *gv = GModel::current()->getVertexByTag(corners[j]);
                if(gv)
                  gf->meshAttributes.corners.push_back(gv);
                else
                  yymsg(0, "Unknown model vertex with tag %d", corners[j]);
              }
            }
            else{
              yymsg(0, "Transfinite surface requires 3 or 4 corners vertices");
            }
          }
        }
        List_Delete((yyvsp[(3) - (6)].l));
      }
      List_Delete((yyvsp[(4) - (6)].l));
    ;}
    break;

  case 330:
#line 4157 "Gmsh.y"
    {
      // transfinite constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      std::vector<int> corners; ListOfDouble2Vector((yyvsp[(4) - (5)].l), corners);
      if(!(yyvsp[(3) - (5)].l)){
        GModel::current()->getGEOInternals()->setTransfiniteVolume(0, corners);
        for(GModel::riter it = GModel::current()->firstRegion();
            it != GModel::current()->lastRegion(); it++){
          (*it)->meshAttributes.method = MESH_TRANSFINITE;
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (5)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (5)].l), i, &d);
          int tag = (int)d;
          GModel::current()->getGEOInternals()->setTransfiniteVolume(tag, corners);
          GRegion *gr = GModel::current()->getRegionByTag(tag);
          if(gr){
            gr->meshAttributes.method = MESH_TRANSFINITE;
            if(corners.empty() || corners.size() == 6 || corners.size() == 8){
              for(unsigned int i = 0; i < corners.size(); i++){
                GVertex *gv = GModel::current()->getVertexByTag(corners[i]);
                if(gv)
                  gr->meshAttributes.corners.push_back(gv);
                else
                  yymsg(0, "Unknown model vertex with tag %d", corners[i]);
              }
            }
          }
        }
        List_Delete((yyvsp[(3) - (5)].l));
      }
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 331:
#line 4196 "Gmsh.y"
    {
      // transfinite constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(!(yyvsp[(2) - (3)].l)){
        GModel::current()->getGEOInternals()->setTransfiniteVolumeQuadTri(0);
        for(GModel::riter it = GModel::current()->firstRegion();
            it != GModel::current()->lastRegion(); it++)
          (*it)->meshAttributes.QuadTri = TRANSFINITE_QUADTRI_1;
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(2) - (3)].l)); i++){
          double d;
          List_Read((yyvsp[(2) - (3)].l), i, &d);
          int tag = (int)d;
          GModel::current()->getGEOInternals()->setTransfiniteVolumeQuadTri(tag);
          GRegion *gr = GModel::current()->getRegionByTag(tag);
          if(gr) gr->meshAttributes.QuadTri = TRANSFINITE_QUADTRI_1;
        }
        List_Delete((yyvsp[(2) - (3)].l));
      }
    ;}
    break;

  case 332:
#line 4221 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (8)].l)); i++){
	double d;
	List_Read((yyvsp[(4) - (8)].l), i, &d);
	CTX::instance()->mesh.algo2d_per_face[(int)d] = (int)(yyvsp[(7) - (8)].d);
      }
      List_Delete((yyvsp[(4) - (8)].l));
    ;}
    break;

  case 333:
#line 4230 "Gmsh.y"
    {
      // recombine constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(!(yyvsp[(3) - (5)].l)){
        GModel::current()->getGEOInternals()->setRecombine(2, 0, (yyvsp[(4) - (5)].i));
        for(GModel::fiter it = GModel::current()->firstFace();
            it != GModel::current()->lastFace(); it++){
          (*it)->meshAttributes.recombine = 1;
          (*it)->meshAttributes.recombineAngle = (yyvsp[(4) - (5)].i);
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (5)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (5)].l), i, &d);
          int tag = (int)d;
          GModel::current()->getGEOInternals()->setRecombine(2, tag, (yyvsp[(4) - (5)].i));
          GFace *gf = GModel::current()->getFaceByTag(tag);
          if(gf){
            gf->meshAttributes.recombine = 1;
            gf->meshAttributes.recombineAngle = (yyvsp[(4) - (5)].i);
          }
        }
        List_Delete((yyvsp[(3) - (5)].l));
      }
    ;}
    break;

  case 334:
#line 4260 "Gmsh.y"
    {
      // recombine constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(!(yyvsp[(3) - (4)].l)){
        GModel::current()->getGEOInternals()->setRecombine(3, 0, 0.);
        for(GModel::riter it = GModel::current()->firstRegion();
            it != GModel::current()->lastRegion(); it++){
          (*it)->meshAttributes.recombine3D = 1;
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (4)].l), i, &d);
          int tag = (int)d;
          GModel::current()->getGEOInternals()->setRecombine(3, tag, 0.);
          GRegion *gr = GModel::current()->getRegionByTag(tag);
          if(gr) gr->meshAttributes.recombine3D = 1;
        }
        List_Delete((yyvsp[(3) - (4)].l));
      }
    ;}
    break;

  case 335:
#line 4286 "Gmsh.y"
    {
      // smoothing constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(!(yyvsp[(3) - (6)].l)){
        GModel::current()->getGEOInternals()->setSmoothing(0, (int)(yyvsp[(5) - (6)].d));
        for(GModel::fiter it = GModel::current()->firstFace();
            it != GModel::current()->lastFace(); it++){
          (*it)->meshAttributes.transfiniteSmoothing = (int)(yyvsp[(5) - (6)].d);
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (6)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (6)].l), i, &d);
          int tag = (int)d;
          GModel::current()->getGEOInternals()->setSmoothing(tag, (int)(yyvsp[(5) - (6)].d));
          GFace *gf = GModel::current()->getFaceByTag(tag);
          if(gf) gf->meshAttributes.transfiniteSmoothing = (int)(yyvsp[(5) - (6)].d);
        }
        List_Delete((yyvsp[(3) - (6)].l));
      }
    ;}
    break;

  case 336:
#line 4313 "Gmsh.y"
    {
      if (List_Nbr((yyvsp[(4) - (11)].l)) != List_Nbr((yyvsp[(8) - (11)].l))){
        yymsg(0, "Number of master lines (%d) different from number of "
              "slaves (%d) ", List_Nbr((yyvsp[(8) - (11)].l)), List_Nbr((yyvsp[(4) - (11)].l)));
      }
      else{
        std::vector<double> transfo;
        if(List_Nbr((yyvsp[(10) - (11)].l)) != 0) {
          if (List_Nbr((yyvsp[(10) - (11)].l)) < 12){
            yymsg(0, "Affine transformation requires at least 12 entries (we have %d)",
                  List_Nbr((yyvsp[(10) - (11)].l)));
          }
          else {
            transfo.resize(List_Nbr((yyvsp[(10) - (11)].l)));
            for(int i = 0; i < List_Nbr((yyvsp[(10) - (11)].l)); i++)
              List_Read((yyvsp[(10) - (11)].l), i, &transfo[i]);
          }
        }
        for(int i = 0; i < List_Nbr((yyvsp[(4) - (11)].l)); i++){
          double d_master, d_slave;
          List_Read((yyvsp[(8) - (11)].l), i, &d_master);
          List_Read((yyvsp[(4) - (11)].l), i, &d_slave);
          int j_master = (int)d_master;
          int j_slave  = (int)d_slave;
          addPeriodicEdge(j_slave, j_master, transfo);
        }
      }
      List_Delete((yyvsp[(4) - (11)].l));
      List_Delete((yyvsp[(8) - (11)].l));
    ;}
    break;

  case 337:
#line 4345 "Gmsh.y"
    {
      if (List_Nbr((yyvsp[(4) - (11)].l)) != List_Nbr((yyvsp[(8) - (11)].l))){
        yymsg(0, "Number of master faces (%d) different from number of "
              "slaves (%d) ", List_Nbr((yyvsp[(8) - (11)].l)), List_Nbr((yyvsp[(4) - (11)].l)));
      }
      else{
        if (List_Nbr((yyvsp[(10) - (11)].l)) < 12){
          // FIXME full automatic case here if List_Nbr($10) == 0)
          yymsg(0, "Affine transformation requires at least 12 entries");
        }
        else {
          std::vector<double> transfo(16,0);
          for(int i = 0; i < List_Nbr((yyvsp[(10) - (11)].l)); i++)
            List_Read((yyvsp[(10) - (11)].l), i, &transfo[i]);
          for(int i = 0; i < List_Nbr((yyvsp[(4) - (11)].l)); i++){
            double d_master, d_slave;
            List_Read((yyvsp[(8) - (11)].l), i, &d_master);
            List_Read((yyvsp[(4) - (11)].l), i, &d_slave);
            addPeriodicFace(d_slave, d_master, transfo);
          }
        }
      }
      List_Delete((yyvsp[(4) - (11)].l));
      List_Delete((yyvsp[(8) - (11)].l));
    ;}
    break;

  case 338:
#line 4372 "Gmsh.y"
    {
      if (List_Nbr((yyvsp[(4) - (18)].l)) != List_Nbr((yyvsp[(8) - (18)].l))){
        yymsg(0, "Number of master edges (%d) different from number of "
              "slaves (%d) ", List_Nbr((yyvsp[(8) - (18)].l)), List_Nbr((yyvsp[(4) - (18)].l)));
      }
      else{
        SPoint3 axis((yyvsp[(12) - (18)].v)[0],(yyvsp[(12) - (18)].v)[1],(yyvsp[(12) - (18)].v)[2]);
        SPoint3 origin((yyvsp[(14) - (18)].v)[0],(yyvsp[(14) - (18)].v)[1],(yyvsp[(14) - (18)].v)[2]);
        double  angle((yyvsp[(16) - (18)].d));
        SPoint3 translation(0,0,0);

        std::vector<double> transfo;
        computeAffineTransformation(origin,axis,angle,translation,transfo);

        for(int i = 0; i < List_Nbr((yyvsp[(4) - (18)].l)); i++){
          double d_master, d_slave;
          List_Read((yyvsp[(8) - (18)].l), i, &d_master);
          List_Read((yyvsp[(4) - (18)].l), i, &d_slave);
          addPeriodicEdge(d_slave,d_master,transfo);
        }
      }
      List_Delete((yyvsp[(4) - (18)].l));
      List_Delete((yyvsp[(8) - (18)].l));
    ;}
    break;

  case 339:
#line 4398 "Gmsh.y"
    {
      if (List_Nbr((yyvsp[(4) - (18)].l)) != List_Nbr((yyvsp[(8) - (18)].l))){
        yymsg(0, "Number of master faces (%d) different from number of "
              "slaves (%d) ", List_Nbr((yyvsp[(8) - (18)].l)), List_Nbr((yyvsp[(4) - (18)].l)));
      }
      else{
        SPoint3 origin((yyvsp[(14) - (18)].v)[0],(yyvsp[(14) - (18)].v)[1],(yyvsp[(14) - (18)].v)[2]);
        SPoint3 axis((yyvsp[(12) - (18)].v)[0],(yyvsp[(12) - (18)].v)[1],(yyvsp[(12) - (18)].v)[2]);
        double  angle((yyvsp[(16) - (18)].d));
        SPoint3 translation(0,0,0);

        std::vector<double> transfo;
        computeAffineTransformation(origin,axis,angle,translation,transfo);

        for(int i = 0; i < List_Nbr((yyvsp[(4) - (18)].l)); i++){
          double d_master, d_slave;
          List_Read((yyvsp[(8) - (18)].l), i, &d_master);
          List_Read((yyvsp[(4) - (18)].l), i, &d_slave);
          addPeriodicFace(d_slave, d_master, transfo);
        }
      }
      List_Delete((yyvsp[(4) - (18)].l));
      List_Delete((yyvsp[(8) - (18)].l));
    ;}
    break;

  case 340:
#line 4424 "Gmsh.y"
    {
      if (List_Nbr((yyvsp[(4) - (12)].l)) != List_Nbr((yyvsp[(8) - (12)].l))){
        yymsg(0, "Number of master edges (%d) different from number of "
              "slaves (%d) ", List_Nbr((yyvsp[(8) - (12)].l)), List_Nbr((yyvsp[(4) - (12)].l)));
      }
      else{
        SPoint3 origin(0,0,0);
        SPoint3 axis(0,0,0);
        double  angle(0);
        SPoint3 translation((yyvsp[(11) - (12)].v)[0],(yyvsp[(11) - (12)].v)[1],(yyvsp[(11) - (12)].v)[2]);

        std::vector<double> transfo;
        computeAffineTransformation(origin,axis,angle,translation,transfo);

        for(int i = 0; i < List_Nbr((yyvsp[(4) - (12)].l)); i++){
          double d_master, d_slave;
          List_Read((yyvsp[(8) - (12)].l), i, &d_master);
          List_Read((yyvsp[(4) - (12)].l), i, &d_slave);
          addPeriodicEdge(d_slave,d_master,transfo);
        }
      }
      List_Delete((yyvsp[(4) - (12)].l));
      List_Delete((yyvsp[(8) - (12)].l));
    ;}
    break;

  case 341:
#line 4450 "Gmsh.y"
    {
      if (List_Nbr((yyvsp[(4) - (12)].l)) != List_Nbr((yyvsp[(8) - (12)].l))){
        yymsg(0, "Number of master faces (%d) different from number of "
              "slaves (%d) ", List_Nbr((yyvsp[(8) - (12)].l)), List_Nbr((yyvsp[(4) - (12)].l)));
      }
      else{
        SPoint3 origin(0,0,0);
        SPoint3 axis(0,0,0);
        double  angle(0);
        SPoint3 translation((yyvsp[(11) - (12)].v)[0],(yyvsp[(11) - (12)].v)[1],(yyvsp[(11) - (12)].v)[2]);

        std::vector<double> transfo;
        computeAffineTransformation(origin,axis,angle,translation,transfo);

        for(int i = 0; i < List_Nbr((yyvsp[(4) - (12)].l)); i++){
          double d_master, d_slave;
          List_Read((yyvsp[(8) - (12)].l), i, &d_master);
          List_Read((yyvsp[(4) - (12)].l), i, &d_slave);
          addPeriodicFace(d_slave, d_master, transfo);
        }
      }
      List_Delete((yyvsp[(4) - (12)].l));
      List_Delete((yyvsp[(8) - (12)].l));
    ;}
    break;

  case 342:
#line 4476 "Gmsh.y"
    {
      if (List_Nbr((yyvsp[(5) - (12)].l)) != List_Nbr((yyvsp[(10) - (12)].l))){
        yymsg(0, "Number of master surface edges (%d) different from number of "
              "slave (%d) edges", List_Nbr((yyvsp[(10) - (12)].l)), List_Nbr((yyvsp[(5) - (12)].l)));
      }
      else{
        int j_master = (int)(yyvsp[(8) - (12)].d);
        int j_slave = (int)(yyvsp[(3) - (12)].d);
        std::map<int,int> edgeCounterParts;
        for (int i = 0; i < List_Nbr((yyvsp[(5) - (12)].l)); i++){
          double ds,dm;
          List_Read((yyvsp[(5) - (12)].l),i,&ds);
          List_Read((yyvsp[(10) - (12)].l),i,&dm);
          edgeCounterParts[(int) ds] = (int) dm;
        }
        addPeriodicFace(j_slave, j_master, edgeCounterParts);
      }
      List_Delete((yyvsp[(5) - (12)].l));
      List_Delete((yyvsp[(10) - (12)].l));
    ;}
    break;

  case 343:
#line 4497 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (10)].l), tags);
      addEmbedded(0, tags, 2, (int)(yyvsp[(8) - (10)].d));
      List_Delete((yyvsp[(3) - (10)].l));
    ;}
    break;

  case 344:
#line 4503 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (10)].l), tags);
      addEmbedded(1, tags, 2, (int)(yyvsp[(8) - (10)].d));
      List_Delete((yyvsp[(3) - (10)].l));
    ;}
    break;

  case 345:
#line 4509 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (10)].l), tags);
      addEmbedded(0, tags, 3, (int)(yyvsp[(8) - (10)].d));
      List_Delete((yyvsp[(3) - (10)].l));
    ;}
    break;

  case 346:
#line 4515 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (10)].l), tags);
      addEmbedded(1, tags, 3, (int)(yyvsp[(8) - (10)].d));
      List_Delete((yyvsp[(3) - (10)].l));
    ;}
    break;

  case 347:
#line 4521 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (10)].l), tags);
      addEmbedded(2, tags, 3, (int)(yyvsp[(8) - (10)].d));
      List_Delete((yyvsp[(3) - (10)].l));
    ;}
    break;

  case 348:
#line 4527 "Gmsh.y"
    {
      // reverse mesh constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(!(yyvsp[(3) - (4)].l)){
        GModel::current()->getGEOInternals()->setReverseMesh(2, 0);
        for(GModel::fiter it = GModel::current()->firstFace();
            it != GModel::current()->lastFace(); it++){
          (*it)->meshAttributes.reverseMesh = 1;
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (4)].l), i, &d);
          int num = (int)d;
          GModel::current()->getGEOInternals()->setReverseMesh(2, num);
          GFace *gf = GModel::current()->getFaceByTag(num);
          if(gf) gf->meshAttributes.reverseMesh = 1;
        }
        List_Delete((yyvsp[(3) - (4)].l));
      }
    ;}
    break;

  case 349:
#line 4553 "Gmsh.y"
    {
      // reverse mesh constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(!(yyvsp[(3) - (4)].l)){
        GModel::current()->getGEOInternals()->setReverseMesh(1, 0);
        for(GModel::eiter it = GModel::current()->firstEdge();
            it != GModel::current()->lastEdge(); it++){
          (*it)->meshAttributes.reverseMesh = 1;
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (4)].l), i, &d);
          int num = (int)d;
          GModel::current()->getGEOInternals()->setReverseMesh(1, num);
          GEdge *ge = GModel::current()->getEdgeByTag(num);
          if(ge) ge->meshAttributes.reverseMesh = 1;
        }
        List_Delete((yyvsp[(3) - (4)].l));
      }
    ;}
    break;

  case 350:
#line 4579 "Gmsh.y"
    {
      if(!(yyvsp[(3) - (4)].l)){
        for(GModel::viter it = GModel::current()->firstVertex();
            it != GModel::current()->lastVertex(); it++)
          (*it)->relocateMeshVertices();
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (4)].l), i, &d);
          GVertex *gv = GModel::current()->getVertexByTag((int)d);
          if(gv) gv->relocateMeshVertices();
        }
        List_Delete((yyvsp[(3) - (4)].l));
      }
    ;}
    break;

  case 351:
#line 4596 "Gmsh.y"
    {
      if(!(yyvsp[(3) - (4)].l)){
        for(GModel::eiter it = GModel::current()->firstEdge();
            it != GModel::current()->lastEdge(); it++)
          (*it)->relocateMeshVertices();
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (4)].l), i, &d);
          GEdge *ge = GModel::current()->getEdgeByTag((int)d);
          if(ge) ge->relocateMeshVertices();
        }
        List_Delete((yyvsp[(3) - (4)].l));
      }
    ;}
    break;

  case 352:
#line 4613 "Gmsh.y"
    {
      if(!(yyvsp[(3) - (4)].l)){
        for(GModel::fiter it = GModel::current()->firstFace();
            it != GModel::current()->lastFace(); it++)
          (*it)->relocateMeshVertices();
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (4)].l), i, &d);
          GFace *gf = GModel::current()->getFaceByTag((int)d);
          if(gf) gf->relocateMeshVertices();
        }
        List_Delete((yyvsp[(3) - (4)].l));
      }
    ;}
    break;

  case 353:
#line 4630 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
	double dnum;
	List_Read((yyvsp[(3) - (4)].l), i, &dnum);
	int num = (int)dnum;
        GModel::current()->getGEOInternals()->setDegenerated(1, num);
        GEdge *ge = GModel::current()->getEdgeByTag(num);
        if(ge) ge->setTooSmall(true);
      }
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 354:
#line 4642 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (4)].l), tags);
      GModel::current()->getGEOInternals()->setCompoundMesh(1, tags);
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 355:
#line 4648 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (4)].l), tags);
      GModel::current()->getGEOInternals()->setCompoundMesh(2, tags);
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 356:
#line 4654 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (4)].l), tags);
      GModel::current()->getGEOInternals()->setCompoundMesh(3, tags);
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 357:
#line 4666 "Gmsh.y"
    {
      GModel::current()->getGEOInternals()->removeAllDuplicates();
    ;}
    break;

  case 358:
#line 4670 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(2) - (3)].c), "Geometry"))
        GModel::current()->getGEOInternals()->removeAllDuplicates();
      else if(!strcmp((yyvsp[(2) - (3)].c), "Mesh"))
        GModel::current()->removeDuplicateMeshVertices(CTX::instance()->geom.tolerance);
      else
        yymsg(0, "Unknown coherence command");
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 359:
#line 4680 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(4) - (6)].l), tags);
      GModel::current()->getGEOInternals()->mergeVertices(tags);
      List_Delete((yyvsp[(4) - (6)].l));
    ;}
    break;

  case 360:
#line 4690 "Gmsh.y"
    { (yyval.c) = (char*)"Homology"; ;}
    break;

  case 361:
#line 4691 "Gmsh.y"
    { (yyval.c) = (char*)"Cohomology"; ;}
    break;

  case 362:
#line 4692 "Gmsh.y"
    { (yyval.c) = (char*)"Betti"; ;}
    break;

  case 363:
#line 4697 "Gmsh.y"
    {
      std::vector<int> domain, subdomain, dim;
      for(int i = 0; i < 4; i++) dim.push_back(i);
      GModel::current()->addHomologyRequest((yyvsp[(1) - (2)].c), domain, subdomain, dim);
    ;}
    break;

  case 364:
#line 4703 "Gmsh.y"
    {
      std::vector<int> domain, subdomain, dim;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (5)].l)); i++){
        double d;
        List_Read((yyvsp[(3) - (5)].l), i, &d);
        domain.push_back((int)d);
      }
      for(int i = 0; i < 4; i++) dim.push_back(i);
      GModel::current()->addHomologyRequest((yyvsp[(1) - (5)].c), domain, subdomain, dim);
      List_Delete((yyvsp[(3) - (5)].l));
    ;}
    break;

  case 365:
#line 4715 "Gmsh.y"
    {
      std::vector<int> domain, subdomain, dim;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (7)].l)); i++){
        double d;
        List_Read((yyvsp[(3) - (7)].l), i, &d);
        domain.push_back((int)d);
      }
      for(int i = 0; i < List_Nbr((yyvsp[(5) - (7)].l)); i++){
        double d;
        List_Read((yyvsp[(5) - (7)].l), i, &d);
        subdomain.push_back((int)d);
      }
      for(int i = 0; i < 4; i++) dim.push_back(i);
      GModel::current()->addHomologyRequest((yyvsp[(1) - (7)].c), domain, subdomain, dim);
      List_Delete((yyvsp[(3) - (7)].l));
      List_Delete((yyvsp[(5) - (7)].l));
    ;}
    break;

  case 366:
#line 4733 "Gmsh.y"
    {
      std::vector<int> domain, subdomain, dim;
      for(int i = 0; i < List_Nbr((yyvsp[(6) - (10)].l)); i++){
        double d;
        List_Read((yyvsp[(6) - (10)].l), i, &d);
        domain.push_back((int)d);
      }
      for(int i = 0; i < List_Nbr((yyvsp[(8) - (10)].l)); i++){
        double d;
        List_Read((yyvsp[(8) - (10)].l), i, &d);
        subdomain.push_back((int)d);
      }
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (10)].l)); i++){
        double d;
        List_Read((yyvsp[(3) - (10)].l), i, &d);
        dim.push_back((int)d);
      }
      GModel::current()->addHomologyRequest((yyvsp[(1) - (10)].c), domain, subdomain, dim);
      List_Delete((yyvsp[(6) - (10)].l));
      List_Delete((yyvsp[(8) - (10)].l));
      List_Delete((yyvsp[(3) - (10)].l));
    ;}
    break;

  case 367:
#line 4760 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d);           ;}
    break;

  case 368:
#line 4761 "Gmsh.y"
    { (yyval.d) = (yyvsp[(2) - (3)].d);           ;}
    break;

  case 369:
#line 4762 "Gmsh.y"
    { (yyval.d) = -(yyvsp[(2) - (2)].d);          ;}
    break;

  case 370:
#line 4763 "Gmsh.y"
    { (yyval.d) = (yyvsp[(2) - (2)].d);           ;}
    break;

  case 371:
#line 4764 "Gmsh.y"
    { (yyval.d) = !(yyvsp[(2) - (2)].d);          ;}
    break;

  case 372:
#line 4765 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) - (yyvsp[(3) - (3)].d);      ;}
    break;

  case 373:
#line 4766 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) + (yyvsp[(3) - (3)].d);      ;}
    break;

  case 374:
#line 4767 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) * (yyvsp[(3) - (3)].d);      ;}
    break;

  case 375:
#line 4769 "Gmsh.y"
    {
      if(!(yyvsp[(3) - (3)].d))
	yymsg(0, "Division by zero in '%g / %g'", (yyvsp[(1) - (3)].d), (yyvsp[(3) - (3)].d));
      else
	(yyval.d) = (yyvsp[(1) - (3)].d) / (yyvsp[(3) - (3)].d);
    ;}
    break;

  case 376:
#line 4775 "Gmsh.y"
    { (yyval.d) = (int)(yyvsp[(1) - (3)].d) | (int)(yyvsp[(3) - (3)].d); ;}
    break;

  case 377:
#line 4776 "Gmsh.y"
    { (yyval.d) = (int)(yyvsp[(1) - (3)].d) & (int)(yyvsp[(3) - (3)].d); ;}
    break;

  case 378:
#line 4777 "Gmsh.y"
    { (yyval.d) = (int)(yyvsp[(1) - (3)].d) % (int)(yyvsp[(3) - (3)].d); ;}
    break;

  case 379:
#line 4778 "Gmsh.y"
    { (yyval.d) = pow((yyvsp[(1) - (3)].d), (yyvsp[(3) - (3)].d));  ;}
    break;

  case 380:
#line 4779 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) < (yyvsp[(3) - (3)].d);      ;}
    break;

  case 381:
#line 4780 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) > (yyvsp[(3) - (3)].d);      ;}
    break;

  case 382:
#line 4781 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) <= (yyvsp[(3) - (3)].d);     ;}
    break;

  case 383:
#line 4782 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) >= (yyvsp[(3) - (3)].d);     ;}
    break;

  case 384:
#line 4783 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) == (yyvsp[(3) - (3)].d);     ;}
    break;

  case 385:
#line 4784 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) != (yyvsp[(3) - (3)].d);     ;}
    break;

  case 386:
#line 4785 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) && (yyvsp[(3) - (3)].d);     ;}
    break;

  case 387:
#line 4786 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) || (yyvsp[(3) - (3)].d);     ;}
    break;

  case 388:
#line 4787 "Gmsh.y"
    { (yyval.d) = ((int)(yyvsp[(1) - (3)].d) >> (int)(yyvsp[(3) - (3)].d)); ;}
    break;

  case 389:
#line 4788 "Gmsh.y"
    { (yyval.d) = ((int)(yyvsp[(1) - (3)].d) << (int)(yyvsp[(3) - (3)].d)); ;}
    break;

  case 390:
#line 4789 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (5)].d) ? (yyvsp[(3) - (5)].d) : (yyvsp[(5) - (5)].d); ;}
    break;

  case 391:
#line 4790 "Gmsh.y"
    { (yyval.d) = exp((yyvsp[(3) - (4)].d));      ;}
    break;

  case 392:
#line 4791 "Gmsh.y"
    { (yyval.d) = log((yyvsp[(3) - (4)].d));      ;}
    break;

  case 393:
#line 4792 "Gmsh.y"
    { (yyval.d) = log10((yyvsp[(3) - (4)].d));    ;}
    break;

  case 394:
#line 4793 "Gmsh.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (4)].d));     ;}
    break;

  case 395:
#line 4794 "Gmsh.y"
    { (yyval.d) = sin((yyvsp[(3) - (4)].d));      ;}
    break;

  case 396:
#line 4795 "Gmsh.y"
    { (yyval.d) = asin((yyvsp[(3) - (4)].d));     ;}
    break;

  case 397:
#line 4796 "Gmsh.y"
    { (yyval.d) = cos((yyvsp[(3) - (4)].d));      ;}
    break;

  case 398:
#line 4797 "Gmsh.y"
    { (yyval.d) = acos((yyvsp[(3) - (4)].d));     ;}
    break;

  case 399:
#line 4798 "Gmsh.y"
    { (yyval.d) = tan((yyvsp[(3) - (4)].d));      ;}
    break;

  case 400:
#line 4799 "Gmsh.y"
    { (yyval.d) = atan((yyvsp[(3) - (4)].d));     ;}
    break;

  case 401:
#line 4800 "Gmsh.y"
    { (yyval.d) = atan2((yyvsp[(3) - (6)].d), (yyvsp[(5) - (6)].d));;}
    break;

  case 402:
#line 4801 "Gmsh.y"
    { (yyval.d) = sinh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 403:
#line 4802 "Gmsh.y"
    { (yyval.d) = cosh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 404:
#line 4803 "Gmsh.y"
    { (yyval.d) = tanh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 405:
#line 4804 "Gmsh.y"
    { (yyval.d) = fabs((yyvsp[(3) - (4)].d));     ;}
    break;

  case 406:
#line 4805 "Gmsh.y"
    { (yyval.d) = std::abs((yyvsp[(3) - (4)].d)); ;}
    break;

  case 407:
#line 4806 "Gmsh.y"
    { (yyval.d) = floor((yyvsp[(3) - (4)].d));    ;}
    break;

  case 408:
#line 4807 "Gmsh.y"
    { (yyval.d) = ceil((yyvsp[(3) - (4)].d));     ;}
    break;

  case 409:
#line 4808 "Gmsh.y"
    { (yyval.d) = floor((yyvsp[(3) - (4)].d) + 0.5); ;}
    break;

  case 410:
#line 4809 "Gmsh.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d), (yyvsp[(5) - (6)].d)); ;}
    break;

  case 411:
#line 4810 "Gmsh.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d), (yyvsp[(5) - (6)].d)); ;}
    break;

  case 412:
#line 4811 "Gmsh.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (6)].d) * (yyvsp[(3) - (6)].d) + (yyvsp[(5) - (6)].d) * (yyvsp[(5) - (6)].d)); ;}
    break;

  case 413:
#line 4812 "Gmsh.y"
    { (yyval.d) = (yyvsp[(3) - (4)].d) * (double)rand() / (double)RAND_MAX; ;}
    break;

  case 414:
#line 4821 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d); ;}
    break;

  case 415:
#line 4822 "Gmsh.y"
    { (yyval.d) = 3.141592653589793; ;}
    break;

  case 416:
#line 4823 "Gmsh.y"
    { (yyval.d) = (double)ImbricatedTest; ;}
    break;

  case 417:
#line 4824 "Gmsh.y"
    { (yyval.d) = Msg::GetCommRank(); ;}
    break;

  case 418:
#line 4825 "Gmsh.y"
    { (yyval.d) = Msg::GetCommSize(); ;}
    break;

  case 419:
#line 4826 "Gmsh.y"
    { (yyval.d) = GetGmshMajorVersion(); ;}
    break;

  case 420:
#line 4827 "Gmsh.y"
    { (yyval.d) = GetGmshMinorVersion(); ;}
    break;

  case 421:
#line 4828 "Gmsh.y"
    { (yyval.d) = GetGmshPatchVersion(); ;}
    break;

  case 422:
#line 4829 "Gmsh.y"
    { (yyval.d) = Cpu(); ;}
    break;

  case 423:
#line 4830 "Gmsh.y"
    { (yyval.d) = GetMemoryUsage()/1024./1024.; ;}
    break;

  case 424:
#line 4831 "Gmsh.y"
    { (yyval.d) = TotalRam(); ;}
    break;

  case 425:
#line 4836 "Gmsh.y"
    { init_options(); ;}
    break;

  case 426:
#line 4838 "Gmsh.y"
    {
      std::vector<double> val(1, (yyvsp[(3) - (6)].d));
      Msg::ExchangeOnelabParameter("", val, floatOptions, charOptions);
      (yyval.d) = val[0];
    ;}
    break;

  case 427:
#line 4844 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d); ;}
    break;

  case 428:
#line 4846 "Gmsh.y"
    {
      (yyval.d) = Msg::GetOnelabNumber((yyvsp[(3) - (4)].c));
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 429:
#line 4851 "Gmsh.y"
    {
      (yyval.d) = Msg::GetOnelabNumber((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].d));
      Free((yyvsp[(3) - (6)].c));
    ;}
    break;

  case 430:
#line 4856 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_Float((yyvsp[(1) - (1)].c2).char1, (yyvsp[(1) - (1)].c2).char2);
    ;}
    break;

  case 431:
#line 4861 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_Float(NULL, (yyvsp[(1) - (4)].c), 2, (int)(yyvsp[(3) - (4)].d));
    ;}
    break;

  case 432:
#line 4866 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_Float(NULL, (yyvsp[(1) - (4)].c), 2, (int)(yyvsp[(3) - (4)].d));
    ;}
    break;

  case 433:
#line 4870 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_Float((yyvsp[(3) - (4)].c2).char1, (yyvsp[(3) - (4)].c2).char2, 1, 0, 0., 1);
    ;}
    break;

  case 434:
#line 4874 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_dot_tSTRING_Float((yyvsp[(3) - (6)].c2).char1, (yyvsp[(3) - (6)].c2).char2, (yyvsp[(5) - (6)].c), 0, 0., 1);
    ;}
    break;

  case 435:
#line 4878 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_Float((yyvsp[(3) - (5)].c2).char1, (yyvsp[(3) - (5)].c2).char2, 1, 0, (yyvsp[(4) - (5)].d), 2);
    ;}
    break;

  case 436:
#line 4882 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_dot_tSTRING_Float((yyvsp[(3) - (7)].c2).char1, (yyvsp[(3) - (7)].c2).char2, (yyvsp[(5) - (7)].c), 0, (yyvsp[(6) - (7)].d), 2);
    ;}
    break;

  case 437:
#line 4886 "Gmsh.y"
    {
      std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(3) - (4)].c));
      (yyval.d) = !StatFile(tmp);
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 438:
#line 4892 "Gmsh.y"
    {
      if(gmsh_yysymbols.count((yyvsp[(2) - (4)].c))){
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(2) - (4)].c)]);
	(yyval.d) = s.value.size();
      }
      else if(gmsh_yystringsymbols.count((yyvsp[(2) - (4)].c))){
	(yyval.d) = gmsh_yystringsymbols[(yyvsp[(2) - (4)].c)].size();
      }
      else{
        yymsg(0, "Unknown variable '%s'", (yyvsp[(2) - (4)].c));
	(yyval.d) = 0.;
      }
      Free((yyvsp[(2) - (4)].c));
    ;}
    break;

  case 439:
#line 4908 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_dot_tSTRING_Float_getDim((yyvsp[(2) - (6)].c2).char1, (yyvsp[(2) - (6)].c2).char2, (yyvsp[(4) - (6)].c));
    ;}
    break;

  case 440:
#line 4913 "Gmsh.y"
    {
      std::string struct_namespace((yyvsp[(3) - (4)].c));
      (yyval.d) = (double)nameSpaces[struct_namespace].size();
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 441:
#line 4919 "Gmsh.y"
    {
      std::string struct_namespace(std::string(""));
      (yyval.d) = (double)nameSpaces[struct_namespace].size();
    ;}
    break;

  case 442:
#line 4925 "Gmsh.y"
    {
      if(!gmsh_yysymbols.count((yyvsp[(1) - (2)].c))){
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (2)].c));
	(yyval.d) = 0.;
      }
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (2)].c)]);
        if(s.value.empty()){
          yymsg(0, "Uninitialized variable '%s'", (yyvsp[(1) - (2)].c));
          (yyval.d) = 0.;
        }
        else{
          (yyval.d) = s.value[0];
          s.value[0] += (yyvsp[(2) - (2)].i);
        }
      }
      Free((yyvsp[(1) - (2)].c));
    ;}
    break;

  case 443:
#line 4944 "Gmsh.y"
    {
      int index = (int)(yyvsp[(3) - (5)].d);
      if(!gmsh_yysymbols.count((yyvsp[(1) - (5)].c))){
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (5)].c));
	(yyval.d) = 0.;
      }
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (5)].c)]);
        if((int)s.value.size() < index + 1){
          yymsg(0, "Uninitialized variable '%s[%d]'", (yyvsp[(1) - (5)].c), index);
          (yyval.d) = 0.;
        }
        else{
          (yyval.d) = s.value[index];
          s.value[index] += (yyvsp[(5) - (5)].i);
        }
      }
      Free((yyvsp[(1) - (5)].c));
    ;}
    break;

  case 444:
#line 4965 "Gmsh.y"
    {
      int index = (int)(yyvsp[(3) - (5)].d);
      if(!gmsh_yysymbols.count((yyvsp[(1) - (5)].c))){
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (5)].c));
	(yyval.d) = 0.;
      }
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (5)].c)]);
        if((int)s.value.size() < index + 1){
          yymsg(0, "Uninitialized variable '%s[%d]'", (yyvsp[(1) - (5)].c), index);
          (yyval.d) = 0.;
        }
        else{
          (yyval.d) = s.value[index];
          s.value[index] += (yyvsp[(5) - (5)].i);
        }
      }
      Free((yyvsp[(1) - (5)].c));
    ;}
    break;

  case 445:
#line 4998 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_dot_tSTRING_Float(NULL, (yyvsp[(1) - (3)].c), (yyvsp[(3) - (3)].c));
    ;}
    break;

  case 446:
#line 5002 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_dot_tSTRING_Float((yyvsp[(1) - (5)].c), (yyvsp[(3) - (5)].c), (yyvsp[(5) - (5)].c));
    ;}
    break;

  case 447:
#line 5007 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_dot_tSTRING_Float(NULL, (yyvsp[(1) - (6)].c), (yyvsp[(3) - (6)].c), (int)(yyvsp[(5) - (6)].d));
    ;}
    break;

  case 448:
#line 5011 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_dot_tSTRING_Float((yyvsp[(1) - (8)].c), (yyvsp[(3) - (8)].c), (yyvsp[(5) - (8)].c), (int)(yyvsp[(7) - (8)].d));
    ;}
    break;

  case 449:
#line 5016 "Gmsh.y"
    {
      NumberOption(GMSH_GET, (yyvsp[(1) - (6)].c), (int)(yyvsp[(3) - (6)].d), (yyvsp[(6) - (6)].c), (yyval.d));
      Free((yyvsp[(1) - (6)].c)); Free((yyvsp[(6) - (6)].c));
    ;}
    break;

  case 450:
#line 5021 "Gmsh.y"
    {
      double d = 0.;
      if(NumberOption(GMSH_GET, (yyvsp[(1) - (4)].c), 0, (yyvsp[(3) - (4)].c), d)){
	d += (yyvsp[(4) - (4)].i);
	NumberOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (4)].c), 0, (yyvsp[(3) - (4)].c), d);
	(yyval.d) = d;
      }
      Free((yyvsp[(1) - (4)].c)); Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 451:
#line 5031 "Gmsh.y"
    {
      double d = 0.;
      if(NumberOption(GMSH_GET, (yyvsp[(1) - (7)].c), (int)(yyvsp[(3) - (7)].d), (yyvsp[(6) - (7)].c), d)){
	d += (yyvsp[(7) - (7)].i);
	NumberOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (7)].c), (int)(yyvsp[(3) - (7)].d), (yyvsp[(6) - (7)].c), d);
	(yyval.d) = d;
      }
      Free((yyvsp[(1) - (7)].c)); Free((yyvsp[(6) - (7)].c));
    ;}
    break;

  case 452:
#line 5041 "Gmsh.y"
    {
      (yyval.d) = Msg::GetValue((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].d));
      Free((yyvsp[(3) - (6)].c));
    ;}
    break;

  case 453:
#line 5046 "Gmsh.y"
    {
      int matches = 0;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (6)].l)); i++){
        double d;
        List_Read((yyvsp[(3) - (6)].l), i, &d);
        matches += List_Search((yyvsp[(5) - (6)].l), &d, fcmp_double);
      }
      (yyval.d) = matches;
      Free((yyvsp[(3) - (6)].l)); Free((yyvsp[(5) - (6)].l));
    ;}
    break;

  case 454:
#line 5057 "Gmsh.y"
    {
      std::string s((yyvsp[(3) - (6)].c)), substr((yyvsp[(5) - (6)].c));
      if(s.find(substr) != std::string::npos)
        (yyval.d) = 1.;
      else
        (yyval.d) = 0.;
      Free((yyvsp[(3) - (6)].c)); Free((yyvsp[(5) - (6)].c));
    ;}
    break;

  case 455:
#line 5066 "Gmsh.y"
    {
      (yyval.d) = strlen((yyvsp[(3) - (4)].c));
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 456:
#line 5071 "Gmsh.y"
    {
      (yyval.d) = strcmp((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].c));
      Free((yyvsp[(3) - (6)].c)); Free((yyvsp[(5) - (6)].c));
    ;}
    break;

  case 457:
#line 5076 "Gmsh.y"
    {
      int align = 0, font = 0, fontsize = CTX::instance()->glFontSize;
      if(List_Nbr((yyvsp[(3) - (4)].l)) % 2){
        yymsg(0, "Number of text attributes should be even");
      }
      else{
        for(int i = 0 ; i < List_Nbr((yyvsp[(3) - (4)].l)); i += 2){
          char *s1, *s2; List_Read((yyvsp[(3) - (4)].l), i, &s1); List_Read((yyvsp[(3) - (4)].l), i + 1, &s2);
          std::string key(s1), val(s2);
          Free(s1); Free(s2);
#if defined(HAVE_OPENGL)
          if(key == "Font")
            font = drawContext::global()->getFontIndex(val.c_str());
          else if(key == "FontSize")
            fontsize = atoi(val.c_str());
          else if(key == "Align")
            align = drawContext::global()->getFontAlign(val.c_str());
#endif
        }
      }
      List_Delete((yyvsp[(3) - (4)].l));
      (yyval.d) = (double)((align<<16)|(font<<8)|(fontsize));
    ;}
    break;

  case 458:
#line 5103 "Gmsh.y"
    { (yyval.d) = 0.; ;}
    break;

  case 459:
#line 5105 "Gmsh.y"
    { (yyval.d) = (yyvsp[(2) - (2)].d);;}
    break;

  case 460:
#line 5110 "Gmsh.y"
    { (yyval.c) = NULL; ;}
    break;

  case 461:
#line 5112 "Gmsh.y"
    { (yyval.c) = (yyvsp[(2) - (2)].c);;}
    break;

  case 462:
#line 5117 "Gmsh.y"
    {
      std::string struct_namespace((yyvsp[(2) - (3)].c2).char1? (yyvsp[(2) - (3)].c2).char1 : std::string("")),
        struct_name((yyvsp[(2) - (3)].c2).char2);
      init_options
        (nameSpaces.getMember_ValMax(struct_namespace, struct_name));
    ;}
    break;

  case 463:
#line 5124 "Gmsh.y"
    {
      std::string struct_namespace((yyvsp[(2) - (7)].c2).char1? (yyvsp[(2) - (7)].c2).char1 : std::string("")),
        struct_name((yyvsp[(2) - (7)].c2).char2);
      Free((yyvsp[(2) - (7)].c2).char1); Free((yyvsp[(2) - (7)].c2).char2);
      int tag_out;
      if (nameSpaces.defStruct(struct_namespace, struct_name,
                               floatOptions, charOptions,
                               tag_out, member_ValMax, (yyvsp[(3) - (7)].i)))
        yymsg(0, "Redefinition of Struct '%s::%s'",
              struct_namespace.c_str(), struct_name.c_str());
      (yyval.d) = (double)tag_out;
    ;}
    break;

  case 464:
#line 5140 "Gmsh.y"
    { (yyval.c2).char1 = NULL; (yyval.c2).char2 = (yyvsp[(1) - (1)].c); ;}
    break;

  case 465:
#line 5142 "Gmsh.y"
    { (yyval.c2).char1 = (yyvsp[(1) - (3)].c); (yyval.c2).char2 = (yyvsp[(3) - (3)].c); ;}
    break;

  case 466:
#line 5147 "Gmsh.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c); flag_tSTRING_alloc = 1; ;}
    break;

  case 467:
#line 5156 "Gmsh.y"
    { (yyval.i) = 99; ;}
    break;

  case 468:
#line 5158 "Gmsh.y"
    { (yyval.i) = (int)(yyvsp[(2) - (2)].d); ;}
    break;

  case 469:
#line 5163 "Gmsh.y"
    { (yyval.i) = 0; ;}
    break;

  case 470:
#line 5165 "Gmsh.y"
    { (yyval.i) = (yyvsp[(2) - (3)].i); ;}
    break;

  case 471:
#line 5171 "Gmsh.y"
    {
      memcpy((yyval.v), (yyvsp[(1) - (1)].v), 5*sizeof(double));
    ;}
    break;

  case 472:
#line 5175 "Gmsh.y"
    {
      for(int i = 0; i < 5; i++) (yyval.v)[i] = -(yyvsp[(2) - (2)].v)[i];
    ;}
    break;

  case 473:
#line 5179 "Gmsh.y"
    {
      for(int i = 0; i < 5; i++) (yyval.v)[i] = (yyvsp[(2) - (2)].v)[i];
    ;}
    break;

  case 474:
#line 5183 "Gmsh.y"
    {
      for(int i = 0; i < 5; i++) (yyval.v)[i] = (yyvsp[(1) - (3)].v)[i] - (yyvsp[(3) - (3)].v)[i];
    ;}
    break;

  case 475:
#line 5187 "Gmsh.y"
    {
      for(int i = 0; i < 5; i++) (yyval.v)[i] = (yyvsp[(1) - (3)].v)[i] + (yyvsp[(3) - (3)].v)[i];
    ;}
    break;

  case 476:
#line 5194 "Gmsh.y"
    {
      (yyval.v)[0] = (yyvsp[(2) - (11)].d);  (yyval.v)[1] = (yyvsp[(4) - (11)].d);  (yyval.v)[2] = (yyvsp[(6) - (11)].d);  (yyval.v)[3] = (yyvsp[(8) - (11)].d); (yyval.v)[4] = (yyvsp[(10) - (11)].d);
    ;}
    break;

  case 477:
#line 5198 "Gmsh.y"
    {
      (yyval.v)[0] = (yyvsp[(2) - (9)].d);  (yyval.v)[1] = (yyvsp[(4) - (9)].d);  (yyval.v)[2] = (yyvsp[(6) - (9)].d);  (yyval.v)[3] = (yyvsp[(8) - (9)].d); (yyval.v)[4] = 1.0;
    ;}
    break;

  case 478:
#line 5202 "Gmsh.y"
    {
      (yyval.v)[0] = (yyvsp[(2) - (7)].d);  (yyval.v)[1] = (yyvsp[(4) - (7)].d);  (yyval.v)[2] = (yyvsp[(6) - (7)].d);  (yyval.v)[3] = 0.0; (yyval.v)[4] = 1.0;
    ;}
    break;

  case 479:
#line 5206 "Gmsh.y"
    {
      (yyval.v)[0] = (yyvsp[(2) - (7)].d);  (yyval.v)[1] = (yyvsp[(4) - (7)].d);  (yyval.v)[2] = (yyvsp[(6) - (7)].d);  (yyval.v)[3] = 0.0; (yyval.v)[4] = 1.0;
    ;}
    break;

  case 480:
#line 5213 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(List_T*));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].l)));
    ;}
    break;

  case 481:
#line 5218 "Gmsh.y"
    {
      List_Add((yyval.l), &((yyvsp[(3) - (3)].l)));
    ;}
    break;

  case 482:
#line 5225 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d)));
    ;}
    break;

  case 483:
#line 5230 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(1) - (1)].l);
    ;}
    break;

  case 484:
#line 5234 "Gmsh.y"
    {
      // creates an empty list
      (yyval.l) = List_Create(2, 1, sizeof(double));
    ;}
    break;

  case 485:
#line 5239 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(2) - (3)].l);
    ;}
    break;

  case 486:
#line 5243 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(3) - (4)].l);
      for(int i = 0; i < List_Nbr((yyval.l)); i++){
	double *pd = (double*)List_Pointer((yyval.l), i);
	(*pd) = - (*pd);
      }
    ;}
    break;

  case 487:
#line 5251 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(4) - (5)].l);
      for(int i = 0; i < List_Nbr((yyval.l)); i++){
	double *pd = (double*)List_Pointer((yyval.l), i);
	(*pd) *= (yyvsp[(1) - (5)].d);
      }
    ;}
    break;

  case 488:
#line 5262 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(1) - (1)].l);
    ;}
    break;

  case 489:
#line 5266 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(1) - (1)].c), "*") || !strcmp((yyvsp[(1) - (1)].c), "all"))
        (yyval.l) = 0;
      else{
        yyerror("Unknown special string for list replacement");
        (yyval.l) = List_Create(2, 1, sizeof(double));
      }
    ;}
    break;

  case 490:
#line 5278 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(2) - (2)].l);
      for(int i = 0; i < List_Nbr((yyval.l)); i++){
	double *pd = (double*)List_Pointer((yyval.l), i);
	(*pd) = - (*pd);
      }
    ;}
    break;

  case 491:
#line 5286 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(3) - (3)].l);
      for(int i = 0; i < List_Nbr((yyval.l)); i++){
	double *pd = (double*)List_Pointer((yyval.l), i);
	(*pd) *= (yyvsp[(1) - (3)].d);
      }
    ;}
    break;

  case 492:
#line 5294 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      for(double d = (yyvsp[(1) - (3)].d); ((yyvsp[(1) - (3)].d) < (yyvsp[(3) - (3)].d)) ? (d <= (yyvsp[(3) - (3)].d)) : (d >= (yyvsp[(3) - (3)].d));
          ((yyvsp[(1) - (3)].d) < (yyvsp[(3) - (3)].d)) ? (d += 1.) : (d -= 1.))
	List_Add((yyval.l), &d);
    ;}
    break;

  case 493:
#line 5301 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      if(!(yyvsp[(5) - (5)].d)){  //|| ($1 < $3 && $5 < 0) || ($1 > $3 && $5 > 0)
        yymsg(0, "Wrong increment in '%g:%g:%g'", (yyvsp[(1) - (5)].d), (yyvsp[(3) - (5)].d), (yyvsp[(5) - (5)].d));
      }
      else
	for(double d = (yyvsp[(1) - (5)].d); ((yyvsp[(5) - (5)].d) > 0) ? (d <= (yyvsp[(3) - (5)].d)) : (d >= (yyvsp[(3) - (5)].d)); d += (yyvsp[(5) - (5)].d))
	  List_Add((yyval.l), &d);
   ;}
    break;

  case 494:
#line 5311 "Gmsh.y"
    {
      (yyval.l) = List_Create(3, 1, sizeof(double));
      int tag = (int)(yyvsp[(3) - (4)].d);
      double x = 0., y = 0., z = 0.;
      bool found = GModel::current()->getGEOInternals()->getVertex(tag, x, y, z);
      if(!found && GModel::current()->getOCCInternals())
        found = GModel::current()->getOCCInternals()->getVertex(tag, x, y, z);
      if(!found){
        GVertex *gv = GModel::current()->getVertexByTag(tag);
        if(gv){
          x = gv->x();
          y = gv->y();
          z = gv->z();
        }
        else{
          yymsg(0, "Unknown model vertex with tag %d", tag);
        }
      }
      List_Add((yyval.l), &x);
      List_Add((yyval.l), &y);
      List_Add((yyval.l), &z);
    ;}
    break;

  case 495:
#line 5334 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      getAllElementaryTags(0, (yyval.l));
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 496:
#line 5340 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      getAllElementaryTags(1, (yyval.l));
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 497:
#line 5346 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      getAllElementaryTags(2, (yyval.l));
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 498:
#line 5352 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      getAllElementaryTags(3, (yyval.l));
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 499:
#line 5358 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      if(!(yyvsp[(3) - (3)].l)){
        getAllPhysicalTags(0, (yyval.l));
      }
      else{
        getElementaryTagsForPhysicalGroups(0, (yyvsp[(3) - (3)].l), (yyval.l));
        List_Delete((yyvsp[(3) - (3)].l));
      }
    ;}
    break;

  case 500:
#line 5369 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      if(!(yyvsp[(3) - (3)].l)){
        getAllPhysicalTags(1, (yyval.l));
      }
      else{
        getElementaryTagsForPhysicalGroups(1, (yyvsp[(3) - (3)].l), (yyval.l));
        List_Delete((yyvsp[(3) - (3)].l));
      }
    ;}
    break;

  case 501:
#line 5380 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      if(!(yyvsp[(3) - (3)].l)){
        getAllPhysicalTags(2, (yyval.l));
      }
      else{
        getElementaryTagsForPhysicalGroups(2, (yyvsp[(3) - (3)].l), (yyval.l));
        List_Delete((yyvsp[(3) - (3)].l));
      }
    ;}
    break;

  case 502:
#line 5391 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      if(!(yyvsp[(3) - (3)].l)){
        getAllPhysicalTags(3, (yyval.l));
      }
      else{
        getElementaryTagsForPhysicalGroups(3, (yyvsp[(3) - (3)].l), (yyval.l));
        List_Delete((yyvsp[(3) - (3)].l));
      }
    ;}
    break;

  case 503:
#line 5403 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      getElementaryTagsInBoundingBox(0, (yyvsp[(5) - (16)].d), (yyvsp[(7) - (16)].d), (yyvsp[(9) - (16)].d), (yyvsp[(11) - (16)].d), (yyvsp[(13) - (16)].d), (yyvsp[(15) - (16)].d), (yyval.l));
    ;}
    break;

  case 504:
#line 5409 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      getElementaryTagsInBoundingBox(1, (yyvsp[(5) - (16)].d), (yyvsp[(7) - (16)].d), (yyvsp[(9) - (16)].d), (yyvsp[(11) - (16)].d), (yyvsp[(13) - (16)].d), (yyvsp[(15) - (16)].d), (yyval.l));
    ;}
    break;

  case 505:
#line 5415 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      getElementaryTagsInBoundingBox(2, (yyvsp[(5) - (16)].d), (yyvsp[(7) - (16)].d), (yyvsp[(9) - (16)].d), (yyvsp[(11) - (16)].d), (yyvsp[(13) - (16)].d), (yyvsp[(15) - (16)].d), (yyval.l));
    ;}
    break;

  case 506:
#line 5421 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      getElementaryTagsInBoundingBox(3, (yyvsp[(5) - (16)].d), (yyvsp[(7) - (16)].d), (yyvsp[(9) - (16)].d), (yyvsp[(11) - (16)].d), (yyvsp[(13) - (16)].d), (yyvsp[(15) - (16)].d), (yyval.l));
    ;}
    break;

  case 507:
#line 5426 "Gmsh.y"
    {
      (yyval.l) = List_Create(List_Nbr((yyvsp[(1) - (1)].l)), 1, sizeof(double));
      for(int i = 0; i < List_Nbr((yyvsp[(1) - (1)].l)); i++){
	Shape *s = (Shape*) List_Pointer((yyvsp[(1) - (1)].l), i);
	double d = s->Num;
	List_Add((yyval.l), &d);
      }
      List_Delete((yyvsp[(1) - (1)].l));
    ;}
    break;

  case 508:
#line 5436 "Gmsh.y"
    {
      (yyval.l) = List_Create(List_Nbr((yyvsp[(1) - (1)].l)), 1, sizeof(double));
      for(int i = 0; i < List_Nbr((yyvsp[(1) - (1)].l)); i++){
	Shape *s = (Shape*) List_Pointer((yyvsp[(1) - (1)].l), i);
	double d = s->Num;
	List_Add((yyval.l), &d);
      }
      List_Delete((yyvsp[(1) - (1)].l));
    ;}
    break;

  case 509:
#line 5446 "Gmsh.y"
    {
      (yyval.l) = List_Create(List_Nbr((yyvsp[(1) - (1)].l)), 1, sizeof(double));
      for(int i = 0; i < List_Nbr((yyvsp[(1) - (1)].l)); i++){
	Shape *s = (Shape*) List_Pointer((yyvsp[(1) - (1)].l), i);
	double d = s->Num;
	List_Add((yyval.l), &d);
      }
      List_Delete((yyvsp[(1) - (1)].l));
    ;}
    break;

  case 510:
#line 5456 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      if(!gmsh_yysymbols.count((yyvsp[(1) - (3)].c)))
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (3)].c));
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (3)].c)]);
	for(unsigned int i = 0; i < s.value.size(); i++)
	  List_Add((yyval.l), &s.value[i]);
      }
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 511:
#line 5469 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      if(!gmsh_yysymbols.count((yyvsp[(3) - (4)].c)))
	yymsg(0, "Unknown variable '%s'", (yyvsp[(3) - (4)].c));
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(3) - (4)].c)]);
	for(unsigned int i = 0; i < s.value.size(); i++)
	  List_Add((yyval.l), &s.value[i]);
      }
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 512:
#line 5481 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(3) - (4)].l);
    ;}
    break;

  case 513:
#line 5485 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(3) - (4)].l);
    ;}
    break;

  case 514:
#line 5489 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(4) - (6)].l);
    ;}
    break;

  case 515:
#line 5493 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      if(!gmsh_yysymbols.count((yyvsp[(1) - (6)].c)))
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (6)].c));
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (6)].c)]);
	for(int i = 0; i < List_Nbr((yyvsp[(4) - (6)].l)); i++){
	  int index = (int)(*(double*)List_Pointer_Fast((yyvsp[(4) - (6)].l), i));
	  if((int)s.value.size() < index + 1)
	    yymsg(0, "Uninitialized variable '%s[%d]'", (yyvsp[(1) - (6)].c), index);
	  else
	    List_Add((yyval.l), &s.value[index]);
	}
      }
      Free((yyvsp[(1) - (6)].c));
      List_Delete((yyvsp[(4) - (6)].l));
    ;}
    break;

  case 516:
#line 5511 "Gmsh.y"
    {
      (yyval.l) = List_Create(20,20,sizeof(double));
      for(int i = 0; i < (int)(yyvsp[(7) - (8)].d); i++) {
	double d = (yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1);
	List_Add((yyval.l), &d);
      }
    ;}
    break;

  case 517:
#line 5519 "Gmsh.y"
    {
      (yyval.l) = List_Create(20,20,sizeof(double));
      for(int i = 0; i < (int)(yyvsp[(7) - (8)].d); i++) {
	double d = pow(10,(yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1));
	List_Add((yyval.l), &d);
      }
    ;}
    break;

  case 518:
#line 5527 "Gmsh.y"
    {
      Msg::Barrier();
      FILE *File;
      (yyval.l) = List_Create(100, 100, sizeof(double));
      std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(3) - (4)].c));
      if(!(File = Fopen(tmp.c_str(), "rb"))){
        yymsg(0, "Could not open file '%s'", (yyvsp[(3) - (4)].c));
      }
      else{
	double d;
	while(!feof(File)){
          int ret = fscanf(File, "%lf", &d);
	  if(ret == 1){
	    List_Add((yyval.l), &d);
          }
          else if(ret == EOF){
            break;
          }
          else{
            char dummy[1024];
            fscanf(File, "%s", dummy);
            yymsg(0, "Ignoring '%s' in file '%s'", dummy, (yyvsp[(3) - (4)].c));
          }
        }
	fclose(File);
      }
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 519:
#line 5556 "Gmsh.y"
    {
      double x0 = (yyvsp[(3) - (14)].d), x1 = (yyvsp[(5) - (14)].d), y0 = (yyvsp[(7) - (14)].d), y1 = (yyvsp[(9) - (14)].d), ys = (yyvsp[(11) - (14)].d);
      int N = (int)(yyvsp[(13) - (14)].d);
      std::vector<double> y(N);
      if(!catenary(x0, x1, y0, y1, ys, N, &y[0]))
        Msg::Warning("Catenary did not converge, using linear interpolation");
      (yyval.l) = List_Create(N,10,sizeof(double));
      for(int i = 0; i < N; i++) List_Add((yyval.l), &y[i]);
    ;}
    break;

  case 520:
#line 5566 "Gmsh.y"
    {
      std::vector<double> tmp;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
        double d; List_Read((yyvsp[(3) - (4)].l), i, &d);
        tmp.push_back(d);
      }
      std::sort(tmp.begin(), tmp.end());
      std::vector<double>::iterator last = std::unique(tmp.begin(), tmp.end());
      tmp.erase(last, tmp.end());
      (yyval.l) = (yyvsp[(3) - (4)].l);
      List_Reset((yyval.l));
      for(unsigned int i = 0; i < tmp.size(); i++){
        List_Add((yyval.l), &tmp[i]);
      }
    ;}
    break;

  case 521:
#line 5582 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
        double *d = (double*)List_Pointer((yyvsp[(3) - (4)].l), i);
        *d = std::abs(*d);
      }
      (yyval.l) = (yyvsp[(3) - (4)].l);
    ;}
    break;

  case 522:
#line 5593 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d)));
    ;}
    break;

  case 523:
#line 5598 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(1) - (1)].l);
    ;}
    break;

  case 524:
#line 5602 "Gmsh.y"
    {
      List_Add((yyval.l), &((yyvsp[(3) - (3)].d)));
    ;}
    break;

  case 525:
#line 5606 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (3)].l)); i++){
	double d;
	List_Read((yyvsp[(3) - (3)].l), i, &d);
	List_Add((yyval.l), &d);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 526:
#line 5618 "Gmsh.y"
    {
      (yyval.u) = CTX::instance()->packColor((int)(yyvsp[(2) - (9)].d), (int)(yyvsp[(4) - (9)].d), (int)(yyvsp[(6) - (9)].d), (int)(yyvsp[(8) - (9)].d));
    ;}
    break;

  case 527:
#line 5622 "Gmsh.y"
    {
      (yyval.u) = CTX::instance()->packColor((int)(yyvsp[(2) - (7)].d), (int)(yyvsp[(4) - (7)].d), (int)(yyvsp[(6) - (7)].d), 255);
    ;}
    break;

  case 528:
#line 5634 "Gmsh.y"
    {
      int flag = 0;
      if(gmsh_yystringsymbols.count((yyvsp[(1) - (1)].c))){
        if(gmsh_yystringsymbols[(yyvsp[(1) - (1)].c)].size()){
          (yyval.u) = GetColorForString(-1, gmsh_yystringsymbols[(yyvsp[(1) - (1)].c)][0].c_str(), &flag);
        }
        else{
          yymsg(0, "Unknown color '%s'", (yyvsp[(1) - (1)].c));
          (yyval.u) = 0;
        }
      }
      else
        (yyval.u) = GetColorForString(-1, (yyvsp[(1) - (1)].c), &flag);
      if(flag) yymsg(0, "Unknown color '%s'", (yyvsp[(1) - (1)].c));
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 529:
#line 5651 "Gmsh.y"
    {
      unsigned int val = 0;
      ColorOption(GMSH_GET, (yyvsp[(1) - (5)].c), 0, (yyvsp[(5) - (5)].c), val);
      (yyval.u) = val;
      Free((yyvsp[(1) - (5)].c)); Free((yyvsp[(5) - (5)].c));
    ;}
    break;

  case 530:
#line 5661 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(2) - (3)].l);
    ;}
    break;

  case 531:
#line 5665 "Gmsh.y"
    {
      (yyval.l) = List_Create(256, 10, sizeof(unsigned int));
      GmshColorTable *ct = GetColorTable((int)(yyvsp[(3) - (6)].d));
      if(!ct)
	yymsg(0, "View[%d] does not exist", (int)(yyvsp[(3) - (6)].d));
      else{
	for(int i = 0; i < ct->size; i++)
	  List_Add((yyval.l), &ct->table[i]);
      }
      Free((yyvsp[(1) - (6)].c));
    ;}
    break;

  case 532:
#line 5680 "Gmsh.y"
    {
      (yyval.l) = List_Create(256, 10, sizeof(unsigned int));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].u)));
    ;}
    break;

  case 533:
#line 5685 "Gmsh.y"
    {
      List_Add((yyval.l), &((yyvsp[(3) - (3)].u)));
    ;}
    break;

  case 534:
#line 5692 "Gmsh.y"
    {
      (yyval.c) = (yyvsp[(1) - (1)].c);
    ;}
    break;

  case 535:
#line 5696 "Gmsh.y"
    {
      // No need to extend to Struct_FullName (a Tag is not a String)
      (yyval.c) = treat_Struct_FullName_String(NULL, (yyvsp[(1) - (1)].c));
    ;}
    break;

  case 536:
#line 5701 "Gmsh.y"
    {
      std::string val;
      int j = (int)(yyvsp[(3) - (4)].d);
      if(!gmsh_yystringsymbols.count((yyvsp[(1) - (4)].c)))
        yymsg(0, "Unknown string variable '%s'", (yyvsp[(1) - (4)].c));
      else if(j >= 0 && j < (int)gmsh_yystringsymbols[(yyvsp[(1) - (4)].c)].size())
        val = gmsh_yystringsymbols[(yyvsp[(1) - (4)].c)][j];
      else
        yymsg(0, "Index %d out of range", j);
      (yyval.c) = (char *)Malloc((val.size() + 1) * sizeof(char));
      strcpy((yyval.c), val.c_str());
      Free((yyvsp[(1) - (4)].c));
    ;}
    break;

  case 537:
#line 5715 "Gmsh.y"
    {
      std::string val;
      int j = (int)(yyvsp[(3) - (4)].d);
      if(!gmsh_yystringsymbols.count((yyvsp[(1) - (4)].c)))
        yymsg(0, "Unknown string variable '%s'", (yyvsp[(1) - (4)].c));
      else if(j >= 0 && j < (int)gmsh_yystringsymbols[(yyvsp[(1) - (4)].c)].size())
        val = gmsh_yystringsymbols[(yyvsp[(1) - (4)].c)][j];
      else
        yymsg(0, "Index %d out of range", j);
      (yyval.c) = (char *)Malloc((val.size() + 1) * sizeof(char));
      strcpy((yyval.c), val.c_str());
      Free((yyvsp[(1) - (4)].c));
    ;}
    break;

  case 538:
#line 5732 "Gmsh.y"
    {
      (yyval.c) = treat_Struct_FullName_dot_tSTRING_String(NULL, (yyvsp[(1) - (3)].c), (yyvsp[(3) - (3)].c));
    ;}
    break;

  case 539:
#line 5736 "Gmsh.y"
    {
      (yyval.c) = treat_Struct_FullName_dot_tSTRING_String((yyvsp[(1) - (5)].c), (yyvsp[(3) - (5)].c), (yyvsp[(5) - (5)].c));
    ;}
    break;

  case 540:
#line 5741 "Gmsh.y"
    {
      (yyval.c) = treat_Struct_FullName_dot_tSTRING_String(NULL, (yyvsp[(1) - (6)].c), (yyvsp[(3) - (6)].c), (int)(yyvsp[(5) - (6)].d));
    ;}
    break;

  case 541:
#line 5745 "Gmsh.y"
    {
      (yyval.c) = treat_Struct_FullName_dot_tSTRING_String((yyvsp[(1) - (8)].c), (yyvsp[(3) - (8)].c), (yyvsp[(5) - (8)].c), (int)(yyvsp[(7) - (8)].d));
    ;}
    break;

  case 542:
#line 5750 "Gmsh.y"
    {
      std::string out;
      StringOption(GMSH_GET, (yyvsp[(1) - (6)].c), (int)(yyvsp[(3) - (6)].d), (yyvsp[(6) - (6)].c), out);
      (yyval.c) = (char*)Malloc((out.size() + 1) * sizeof(char));
      strcpy((yyval.c), out.c_str());
      Free((yyvsp[(1) - (6)].c)); Free((yyvsp[(6) - (6)].c));
    ;}
    break;

  case 543:
#line 5758 "Gmsh.y"
    {
      std::string name = GModel::current()->getPhysicalName(0, (int)(yyvsp[(4) - (5)].d));
      (yyval.c) = (char*)Malloc((name.size() + 1) * sizeof(char));
      strcpy((yyval.c), name.c_str());
    ;}
    break;

  case 544:
#line 5764 "Gmsh.y"
    {
      std::string name = GModel::current()->getPhysicalName(1, (int)(yyvsp[(4) - (5)].d));
      (yyval.c) = (char*)Malloc((name.size() + 1) * sizeof(char));
      strcpy((yyval.c), name.c_str());
    ;}
    break;

  case 545:
#line 5770 "Gmsh.y"
    {
      std::string name = GModel::current()->getPhysicalName(2, (int)(yyvsp[(4) - (5)].d));
      (yyval.c) = (char*)Malloc((name.size() + 1) * sizeof(char));
      strcpy((yyval.c), name.c_str());
    ;}
    break;

  case 546:
#line 5776 "Gmsh.y"
    {
      std::string name = GModel::current()->getPhysicalName(3, (int)(yyvsp[(4) - (5)].d));
      (yyval.c) = (char*)Malloc((name.size() + 1) * sizeof(char));
      strcpy((yyval.c), name.c_str());
    ;}
    break;

  case 547:
#line 5785 "Gmsh.y"
    {
      (yyval.c) = (yyvsp[(1) - (1)].c);
    ;}
    break;

  case 548:
#line 5789 "Gmsh.y"
    {
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 549:
#line 5793 "Gmsh.y"
    {
      (yyval.c) = (char *)Malloc(32 * sizeof(char));
      time_t now;
      time(&now);
      strcpy((yyval.c), ctime(&now));
      (yyval.c)[strlen((yyval.c)) - 1] = '\0';
    ;}
    break;

  case 550:
#line 5801 "Gmsh.y"
    {
      std::string exe = Msg::GetExecutableName();
      (yyval.c) = (char *)Malloc(exe.size() + 1);
      strcpy((yyval.c), exe.c_str());
    ;}
    break;

  case 551:
#line 5807 "Gmsh.y"
    {
      std::string action = Msg::GetOnelabAction();
      (yyval.c) = (char *)Malloc(action.size() + 1);
      strcpy((yyval.c), action.c_str());
    ;}
    break;

  case 552:
#line 5813 "Gmsh.y"
    {
      (yyval.c) = strsave((char*)"Gmsh");
    ;}
    break;

  case 553:
#line 5817 "Gmsh.y"
    {
      const char *env = GetEnvironmentVar((yyvsp[(3) - (4)].c));
      if(!env) env = "";
      (yyval.c) = (char *)Malloc((sizeof(env) + 1) * sizeof(char));
      strcpy((yyval.c), env);
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 554:
#line 5825 "Gmsh.y"
    {
      std::string s = Msg::GetString((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].c));
      (yyval.c) = (char *)Malloc((s.size() + 1) * sizeof(char));
      strcpy((yyval.c), s.c_str());
      Free((yyvsp[(3) - (6)].c));
      Free((yyvsp[(5) - (6)].c));
    ;}
    break;

  case 555:
#line 5833 "Gmsh.y"
    {
      std::string s = Msg::GetOnelabString((yyvsp[(3) - (4)].c));
      (yyval.c) = (char *)Malloc((s.size() + 1) * sizeof(char));
      strcpy((yyval.c), s.c_str());
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 556:
#line 5840 "Gmsh.y"
    {
      std::string s = Msg::GetOnelabString((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].c));
      (yyval.c) = (char *)Malloc((s.size() + 1) * sizeof(char));
      strcpy((yyval.c), s.c_str());
      Free((yyvsp[(3) - (6)].c));
      Free((yyvsp[(5) - (6)].c));
    ;}
    break;

  case 557:
#line 5850 "Gmsh.y"
    {
      (yyval.c) = treat_Struct_FullName_String(NULL, (yyvsp[(3) - (5)].c2).char2, 1, 0, (yyvsp[(4) - (5)].c), 2);
    ;}
    break;

  case 558:
#line 5855 "Gmsh.y"
    {
      (yyval.c) = treat_Struct_FullName_dot_tSTRING_String((yyvsp[(3) - (7)].c2).char1, (yyvsp[(3) - (7)].c2).char2, (yyvsp[(5) - (7)].c), 0, (yyvsp[(6) - (7)].c), 2);
    ;}
    break;

  case 559:
#line 5860 "Gmsh.y"
    {
      int size = 1;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++)
        size += strlen(*(char**)List_Pointer((yyvsp[(3) - (4)].l), i)) + 1;
      (yyval.c) = (char*)Malloc(size * sizeof(char));
      (yyval.c)[0] = '\0';
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
        char *s;
        List_Read((yyvsp[(3) - (4)].l), i, &s);
        strcat((yyval.c), s);
        Free(s);
      }
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 560:
#line 5875 "Gmsh.y"
    {
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(3) - (4)].c)) + 1) * sizeof(char));
      int i;
      for(i = strlen((yyvsp[(3) - (4)].c)) - 1; i >= 0; i--){
	if((yyvsp[(3) - (4)].c)[i] == '.'){
	  strncpy((yyval.c), (yyvsp[(3) - (4)].c), i);
	  (yyval.c)[i]='\0';
	  break;
	}
      }
      if(i <= 0) strcpy((yyval.c), (yyvsp[(3) - (4)].c));
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 561:
#line 5889 "Gmsh.y"
    {
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(3) - (4)].c)) + 1) * sizeof(char));
      int i;
      for(i = strlen((yyvsp[(3) - (4)].c)) - 1; i >= 0; i--){
	if((yyvsp[(3) - (4)].c)[i] == '/' || (yyvsp[(3) - (4)].c)[i] == '\\')
	  break;
      }
      if(i <= 0)
	strcpy((yyval.c), (yyvsp[(3) - (4)].c));
      else
	strcpy((yyval.c), &(yyvsp[(3) - (4)].c)[i+1]);
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 562:
#line 5903 "Gmsh.y"
    {
      std::string input = (yyvsp[(3) - (8)].c);
      std::string substr_old = (yyvsp[(5) - (8)].c);
      std::string substr_new = (yyvsp[(7) - (8)].c);
      std::string ret = ReplaceSubString(substr_old, substr_new, input);
      (yyval.c) = (char *)Malloc((ret.size() + 1) * sizeof(char));
      strcpy((yyval.c), ret.c_str());
      Free((yyvsp[(3) - (8)].c));
      Free((yyvsp[(5) - (8)].c));
      Free((yyvsp[(7) - (8)].c));
    ;}
    break;

  case 563:
#line 5915 "Gmsh.y"
    {
      int size = 1;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++)
        size += strlen(*(char**)List_Pointer((yyvsp[(3) - (4)].l), i)) + 1;
      (yyval.c) = (char*)Malloc(size * sizeof(char));
      (yyval.c)[0] = '\0';
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
        char *s;
        List_Read((yyvsp[(3) - (4)].l), i, &s);
        strcat((yyval.c), s);
        Free(s);
        if(i != List_Nbr((yyvsp[(3) - (4)].l)) - 1) strcat((yyval.c), "\n");
      }
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 564:
#line 5931 "Gmsh.y"
    {
      int i = 0;
      while ((yyvsp[(3) - (4)].c)[i]) {
        (yyvsp[(3) - (4)].c)[i] = toupper((yyvsp[(3) - (4)].c)[i]);
        i++;
      }
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 565:
#line 5940 "Gmsh.y"
    {
      int i = 0;
      while ((yyvsp[(3) - (4)].c)[i]) {
        (yyvsp[(3) - (4)].c)[i] = tolower((yyvsp[(3) - (4)].c)[i]);
        i++;
      }
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 566:
#line 5949 "Gmsh.y"
    {
      int i = 0;
      while ((yyvsp[(3) - (4)].c)[i]) {
        if (i > 0 && (yyvsp[(3) - (4)].c)[i-1] != '_')
          (yyvsp[(3) - (4)].c)[i] = tolower((yyvsp[(3) - (4)].c)[i]);
        i++;
      }
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 567:
#line 5959 "Gmsh.y"
    {
      if((yyvsp[(3) - (8)].d)){
        (yyval.c) = (yyvsp[(5) - (8)].c);
        Free((yyvsp[(7) - (8)].c));
      }
      else{
        (yyval.c) = (yyvsp[(7) - (8)].c);
        Free((yyvsp[(5) - (8)].c));
      }
    ;}
    break;

  case 568:
#line 5970 "Gmsh.y"
    {
      std::string in = (yyvsp[(3) - (8)].c);
      std::string out = in.substr((int)(yyvsp[(5) - (8)].d), (int)(yyvsp[(7) - (8)].d));
      (yyval.c) = (char *)Malloc((out.size() + 1) * sizeof(char));
      strcpy((yyval.c), out.c_str());
      Free((yyvsp[(3) - (8)].c));
    ;}
    break;

  case 569:
#line 5978 "Gmsh.y"
    {
      std::string in = (yyvsp[(3) - (6)].c);
      std::string out = in.substr((int)(yyvsp[(5) - (6)].d), std::string::npos);
      (yyval.c) = (char *)Malloc((out.size() + 1) * sizeof(char));
      strcpy((yyval.c), out.c_str());
      Free((yyvsp[(3) - (6)].c));
    ;}
    break;

  case 570:
#line 5986 "Gmsh.y"
    {
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 571:
#line 5990 "Gmsh.y"
    {
      char tmpstring[5000];
      int i = printListOfDouble((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].l), tmpstring);
      if(i < 0){
	yymsg(0, "Too few arguments in Sprintf");
	(yyval.c) = (yyvsp[(3) - (6)].c);
      }
      else if(i > 0){
	yymsg(0, "%d extra argument%s in Sprintf", i, (i > 1) ? "s" : "");
	(yyval.c) = (yyvsp[(3) - (6)].c);
      }
      else{
	(yyval.c) = (char*)Malloc((strlen(tmpstring) + 1) * sizeof(char));
	strcpy((yyval.c), tmpstring);
	Free((yyvsp[(3) - (6)].c));
      }
      List_Delete((yyvsp[(5) - (6)].l));
    ;}
    break;

  case 572:
#line 6009 "Gmsh.y"
    {
      std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(3) - (4)].c));
      (yyval.c) = (char*)Malloc((tmp.size() + 1) * sizeof(char));
      strcpy((yyval.c), tmp.c_str());
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 573:
#line 6016 "Gmsh.y"
    {
      std::string tmp = SplitFileName(GetAbsolutePath(gmsh_yyname))[0];
      (yyval.c) = (char*)Malloc((tmp.size() + 1) * sizeof(char));
      strcpy((yyval.c), tmp.c_str());
    ;}
    break;

  case 574:
#line 6022 "Gmsh.y"
    {
      std::string tmp = SplitFileName((yyvsp[(3) - (4)].c))[0];
      (yyval.c) = (char*)Malloc((tmp.size() + 1) * sizeof(char));
      strcpy((yyval.c), tmp.c_str());
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 575:
#line 6029 "Gmsh.y"
    {
      std::string tmp = GetAbsolutePath((yyvsp[(3) - (4)].c));
      (yyval.c) = (char*)Malloc((tmp.size() + 1) * sizeof(char));
      strcpy((yyval.c), tmp.c_str());
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 576:
#line 6036 "Gmsh.y"
    { init_options(); ;}
    break;

  case 577:
#line 6038 "Gmsh.y"
    {
      std::string val((yyvsp[(3) - (6)].c));
      Msg::ExchangeOnelabParameter("", val, floatOptions, charOptions);
      (yyval.c) = (char*)Malloc((val.size() + 1) * sizeof(char));
      strcpy((yyval.c), val.c_str());
      Free((yyvsp[(3) - (6)].c));
    ;}
    break;

  case 578:
#line 6046 "Gmsh.y"
    {
      std::string out;
      const std::string * key_struct = NULL;
      switch (nameSpaces.get_key_struct_from_tag(struct_namespace,
                                                 (int)(yyvsp[(3) - (4)].d), key_struct)) {
      case 0:
        out = *key_struct;
        break;
      case 1:
        yymsg(1, "Unknown NameSpace '%s' of Struct", struct_namespace.c_str());
        break;
      case 2:
        yymsg(1, "Unknown Struct of index %d", (int)(yyvsp[(3) - (4)].d));
        break;
      default:
        break;
      }
      (yyval.c) = (char*)Malloc((out.size() + 1) * sizeof(char));
      strcpy((yyval.c), out.c_str());
    ;}
    break;

  case 579:
#line 6070 "Gmsh.y"
    { struct_namespace = std::string(""); (yyval.d) = (yyvsp[(2) - (2)].d); ;}
    break;

  case 580:
#line 6072 "Gmsh.y"
    { struct_namespace = (yyvsp[(1) - (4)].c); Free((yyvsp[(1) - (4)].c)); (yyval.d) = (yyvsp[(4) - (4)].d); ;}
    break;

  case 581:
#line 6078 "Gmsh.y"
    {
      (yyval.l) = List_Create(20,20,sizeof(char*));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].c)));
    ;}
    break;

  case 582:
#line 6083 "Gmsh.y"
    {
      List_Add((yyval.l), &((yyvsp[(3) - (3)].c)));
    ;}
    break;

  case 583:
#line 6091 "Gmsh.y"
    {
      char tmpstr[256];
      sprintf(tmpstr, "_%d", (int)(yyvsp[(4) - (5)].d));
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(1) - (5)].c))+strlen(tmpstr)+1)*sizeof(char));
      strcpy((yyval.c), (yyvsp[(1) - (5)].c)); strcat((yyval.c), tmpstr);
      Free((yyvsp[(1) - (5)].c));
    ;}
    break;

  case 584:
#line 6100 "Gmsh.y"
    {
      char tmpstr[256];
      sprintf(tmpstr, "_%d", (int)(yyvsp[(4) - (5)].d));
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(1) - (5)].c))+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy((yyval.c), (yyvsp[(1) - (5)].c)) ; strcat((yyval.c), tmpstr) ;
      Free((yyvsp[(1) - (5)].c));
    ;}
    break;

  case 585:
#line 6109 "Gmsh.y"
    {
      char tmpstr[256];
      sprintf(tmpstr, "_%d", (int)(yyvsp[(7) - (8)].d));
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(3) - (8)].c))+strlen(tmpstr)+1)*sizeof(char));
      strcpy((yyval.c), (yyvsp[(3) - (8)].c)); strcat((yyval.c), tmpstr);
      Free((yyvsp[(3) - (8)].c));
    ;}
    break;

  case 586:
#line 6121 "Gmsh.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c); ;}
    break;

  case 587:
#line 6124 "Gmsh.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c); ;}
    break;

  case 588:
#line 6128 "Gmsh.y"
    { (yyval.c) = (yyvsp[(3) - (4)].c); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 13563 "Gmsh.tab.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 6131 "Gmsh.y"


void assignVariable(const std::string &name, int index, int assignType,
                    double value)
{
  if(!gmsh_yysymbols.count(name)){
    if(!assignType){
      gmsh_yysymbol &s(gmsh_yysymbols[name]);
      s.list = true;
      s.value.resize(index + 1, 0.);
      s.value[index] = value;
    }
    else
      yymsg(0, "Unknown variable '%s'", name.c_str());
  }
  else{
    gmsh_yysymbol &s(gmsh_yysymbols[name]);
    if(s.list){
      if((int)s.value.size() < index + 1) s.value.resize(index + 1, 0.);
      switch(assignType){
      case 0 : s.value[index] = value; break;
      case 1 : s.value[index] += value; break;
      case 2 : s.value[index] -= value; break;
      case 3 : s.value[index] *= value; break;
      case 4 :
        if(value) s.value[index] /= value;
        else yymsg(0, "Division by zero in '%s[%d] /= %g'",
                   name.c_str(), index, value);
        break;
      }
    }
    else
      yymsg(0, "Variable '%s' is not a list", name.c_str());
  }
}

void assignVariables(const std::string &name, List_T *indices, int assignType,
                     List_T *values)
{
  if(List_Nbr(indices) != List_Nbr(values)){
    yymsg(0, "Incompatible array dimensions in affectation");
  }
  else{
    if(!gmsh_yysymbols.count(name)){
      if(!assignType){
        gmsh_yysymbol &s(gmsh_yysymbols[name]);
        s.list = true;
        for(int i = 0; i < List_Nbr(indices); i++){
          int index = (int)(*(double*)List_Pointer(indices, i));
          s.value.resize(index + 1, 0.);
          s.value[index] = *(double*)List_Pointer(values, i);
        }
      }
      else
        yymsg(0, "Unknown variable '%s'", name.c_str());
    }
    else{
      gmsh_yysymbol &s(gmsh_yysymbols[name]);
      if(s.list){
        for(int i = 0; i < List_Nbr(indices); i++){
          int index = (int)(*(double*)List_Pointer(indices, i));
          double d = *(double*)List_Pointer(values, i);
          if((int)s.value.size() < index + 1) s.value.resize(index + 1, 0.);
          switch(assignType){
          case 0 : s.value[index] = d; break;
          case 1 : s.value[index] += d; break;
          case 2 : s.value[index] -= d; break;
          case 3 : s.value[index] *= d; break;
          case 4 :
            if(d) s.value[index] /= d;
            else yymsg(0, "Division by zero in '%s[%d] /= %g'", name.c_str(), index, d);
            break;
          }
        }
      }
      else
        yymsg(0, "Variable '%s' is not a list", name.c_str());
    }
  }
}

void incrementVariable(const std::string &name, int index, double value)
{
  if(!gmsh_yysymbols.count(name))
    yymsg(0, "Unknown variable '%s'", name.c_str());
  else{
    gmsh_yysymbol &s(gmsh_yysymbols[name]);
    if(s.list){
      if((int)s.value.size() < index + 1) s.value.resize(index + 1, 0.);
      s.value[index] += value;
    }
    else
      yymsg(0, "Variable '%s' is not a list", name.c_str());
  }
}

int printListOfDouble(char *format, List_T *list, char *buffer)
{
  // if format does not contain formatting characters, dump the list (useful for
  // quick debugging of lists)
  int numFormats = 0;
  for(unsigned int i = 0; i < strlen(format); i++)
    if(format[i] == '%') numFormats++;
  if(!numFormats){
    strcpy(buffer, format);
    for(int i = 0; i < List_Nbr(list); i++){
      double d;
      List_Read(list, i, &d);
      char tmp[256];
      sprintf(tmp, " [%d]%g", i, d);
      strcat(buffer, tmp);
    }
    return 0;
  }

  char tmp1[256], tmp2[256];
  int j = 0, k = 0;
  buffer[j] = '\0';

  while(j < (int)strlen(format) && format[j] != '%') j++;
  strncpy(buffer, format, j);
  buffer[j] = '\0';
  for(int i = 0; i < List_Nbr(list); i++){
    k = j;
    j++;
    if(j < (int)strlen(format)){
      if(format[j] == '%'){
	strcat(buffer, "%");
	j++;
      }
      while(j < (int)strlen(format) && format[j] != '%') j++;
      if(k != j){
	strncpy(tmp1, &(format[k]), j-k);
	tmp1[j-k] = '\0';
	sprintf(tmp2, tmp1, *(double*)List_Pointer(list, i));
	strcat(buffer, tmp2);
      }
    }
    else
      return List_Nbr(list) - i;
  }
  if(j != (int)strlen(format))
    return -1;
  return 0;
}

void PrintParserSymbols(bool help, std::vector<std::string> &vec)
{
  if(help){
    vec.push_back("//");
    vec.push_back("// Numbers");
    vec.push_back("//");
  }
  for(std::map<std::string, gmsh_yysymbol>::iterator it = gmsh_yysymbols.begin();
      it != gmsh_yysymbols.end(); it++){
    gmsh_yysymbol s(it->second);
    std::ostringstream sstream;
    sstream.precision(12);
    sstream << it->first;
    if(s.list){
      sstream << "[] = {";
      for(unsigned int i = 0; i < s.value.size(); i++){
        if(i) sstream << ", ";
        sstream << s.value[i];
      }
      sstream << "}";
    }
    else
      sstream << " = " << s.value[0];
    sstream << ";";
    vec.push_back(sstream.str());
  }
  if(help){
    vec.push_back("//");
    vec.push_back("// Strings");
    vec.push_back("//");
  }
  for(std::map<std::string, std::vector<std::string> >::iterator it =
        gmsh_yystringsymbols.begin(); it != gmsh_yystringsymbols.end(); it++){
    if(it->second.size() == 1)
      vec.push_back(it->first + " = \"" + it->second[0] + "\";");
    else{
      std::string s = it->first + "[] = Str(";
      for(unsigned int i = 0; i < it->second.size(); i++){
        if(i) s += ", ";
        s += std::string("\"") + it->second[i] + "\"";
      }
      s += ");";
      vec.push_back(s);
    }
  }
  if (nameSpaces.size()){
    if(help){
      vec.push_back("//");
      vec.push_back("// Structures");
      vec.push_back("//");
    }
    std::vector<std::string> strs;
    nameSpaces.sprint(strs);
    vec.insert(vec.end(), strs.begin(), strs.end());
  }
}

fullMatrix<double> ListOfListOfDouble2Matrix(List_T *list)
{
  // Warning: this returns a fullMatrix copy, and deletes the input list
  int M = List_Nbr(list);
  int N = 0;
  for(int i = 0; i < M; i++){
    List_T *line = *(List_T**)List_Pointer_Fast(list, i);
    N = std::max(N, List_Nbr(line));
  }
  fullMatrix<double> mat(M, N);
  for(int i = 0; i < M; i++){
    List_T *line = *(List_T**)List_Pointer_Fast(list, i);
    for(int j = 0; j < List_Nbr(line); j++){
      double val;
      List_Read(line, j, &val);
      mat(i, j) = val;
    }
  }
  for(int i = 0; i < List_Nbr(list); i++)
    List_Delete(*(List_T**)List_Pointer(list, i));
  List_Delete(list);
  return mat;
}

void ListOfDouble2Vector(List_T *list, std::vector<int> &v)
{
  v.clear();
  if(!list) return;
  v.reserve(List_Nbr(list));
  for(int i = 0; i < List_Nbr(list); i++){
    double d;
    List_Read(list, i, &d);
    v.push_back((int)d);
  }
}

void ListOfDouble2Vector(List_T *list, std::vector<double> &v)
{
  v.clear();
  if(!list) return;
  v.reserve(List_Nbr(list));
  for(int i = 0; i < List_Nbr(list); i++){
    double d;
    List_Read(list, i, &d);
    v.push_back(d);
  }
}

void ListOfShapes2VectorOfPairs(List_T *list, std::vector<std::pair<int, int> > &v)
{
  for(int i = 0; i < List_Nbr(list); i++){
    Shape s;
    List_Read(list, i, &s);
    int dim = s.Type / 100 - 1;
    if(dim >= 0 && dim <= 3) v.push_back(std::pair<int, int>(dim, s.Num));
  }
}

void VectorOfPairs2ListOfShapes(const std::vector<std::pair<int, int> > &v, List_T *list)
{
  for(unsigned int i = 0; i < v.size(); i++){
    int dim = v[i].first;
    int tag = v[i].second;
    Shape s;
    s.Type = (dim == 3) ? MSH_VOLUME : (dim == 2) ? MSH_SURF_PLAN :
      (dim == 1) ? MSH_SEGM_LINE : MSH_POINT;
    s.Num = tag;
    List_Add(list, &s);
  }
}

void yyerror(const char *s)
{
  Msg::Error("'%s', line %d : %s (%s)", gmsh_yyname.c_str(), gmsh_yylineno - 1,
             s, gmsh_yytext);
  gmsh_yyerrorstate++;
}

void yymsg(int level, const char *fmt, ...)
{
  va_list args;
  char tmp[1024];

  va_start(args, fmt);
  vsprintf(tmp, fmt, args);
  va_end(args);

  if(level == 0){
    Msg::Error("'%s', line %d : %s", gmsh_yyname.c_str(), gmsh_yylineno - 1, tmp);
    gmsh_yyerrorstate++;
  }
  else if(level == 1){
    Msg::Warning("'%s', line %d : %s", gmsh_yyname.c_str(), gmsh_yylineno - 1, tmp);
  }
  else{
    Msg::Info("'%s', line %d : %s", gmsh_yyname.c_str(), gmsh_yylineno - 1, tmp);
  }
}

void addPeriodicFace(int iTarget, int iSource,
                     const std::vector<double>& affineTransform)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  GFace *target = GModel::current()->getFaceByTag(std::abs(iTarget));
  GFace *source = GModel::current()->getFaceByTag(std::abs(iSource));
  if (!target || !source) {
    Msg::Error("Could not find edge slave %d or master %d for periodic copy",
               iTarget, iSource);
  }
  else target->setMeshMaster(source, affineTransform);
}

void addPeriodicFace(int iTarget, int iSource,
                     const std::map<int,int>& edgeCounterparts)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  Msg::Info("Encoding periodic connection between %d and %d", iTarget, iSource);
  std::map<int,int>::const_iterator sIter = edgeCounterparts.begin();
  for (; sIter != edgeCounterparts.end(); ++sIter) {
    Msg::Info("%d - %d", sIter->first, sIter->second);
  }

  GFace *target = GModel::current()->getFaceByTag(std::abs(iTarget));
  GFace *source = GModel::current()->getFaceByTag(std::abs(iSource));
  if (!target || !source) {
    Msg::Error("Could not find surface slave %d or master %d for periodic copy",
               iTarget,iSource);
  }
  else target->setMeshMaster(source, edgeCounterparts);
}

void addPeriodicEdge(int iTarget,int iSource,
                     const std::vector<double>& affineTransform)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  GEdge *target = GModel::current()->getEdgeByTag(std::abs(iTarget));
  GEdge *source = GModel::current()->getEdgeByTag(std::abs(iSource));
  if (!target || !source)
    Msg::Error("Could not find surface %d or %d for periodic copy",
               iTarget,iSource);
  if (affineTransform.size() >= 12) {
    target->setMeshMaster(source, affineTransform);
  }
  else {
    target->setMeshMaster(source, iSource * iTarget < 0 ? -1 : 1);
  }
}

void computeAffineTransformation(SPoint3& origin, SPoint3& axis,
                                 double angle, SPoint3& translation,
                                 std::vector<double>& tfo)
{
  tfo.resize(16,0.0);

  double ca = cos(angle);
  double sa = sin(angle);

  double ux = axis.x();
  double uy = axis.y();
  double uz = axis.z();

  tfo.resize(16);

  tfo[0*4+0] = ca + ux*ux*(1.-ca);
  tfo[0*4+1] = ux*uy*(1.-ca) - uz * sa;
  tfo[0*4+2] = ux*uz*(1.-ca) + uy * sa;

  tfo[1*4+0] = ux*uy*(1.-ca) + uz * sa;
  tfo[1*4+1] = ca + uy*uy*(1.-ca);
  tfo[1*4+2] = uy*uz*(1.-ca) - ux * sa;

  tfo[2*4+0] = ux*uz*(1.-ca) - uy * sa;
  tfo[2*4+1] = uy*uz*(1.-ca) + ux * sa;
  tfo[2*4+2] = ca + uz*uz*(1.-ca);

  int idx = 0;
  for (size_t i = 0; i < 3; i++,idx++) {
    int tIdx = i*4+3;
    tfo[tIdx] = origin[i] + translation[i];
    for (int j = 0; j < 3; j++,idx++) tfo[tIdx] -= tfo[idx] * origin[j];
  }

  for (int i = 0; i < 4; i++) tfo[12+i] = 0;
  tfo[15] = 1;
}

void addEmbedded(int dim, std::vector<int> tags, int dim2, int tag2)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  if(dim2 == 2){
    GFace *gf = GModel::current()->getFaceByTag(tag2);
    if(!gf){
      yymsg(0, "Unknown model face with tag %d", tag2);
      return;
    }
    for(unsigned int i = 0; i < tags.size(); i++){
      if(dim == 0){
        GVertex *gv = GModel::current()->getVertexByTag(tags[i]);
        if(gv)
          gf->addEmbeddedVertex(gv);
        else
          yymsg(0, "Unknown model vertex %d", tags[i]);
      }
      else if(dim == 1){
        GEdge *ge = GModel::current()->getEdgeByTag(tags[i]);
        if(ge)
          gf->addEmbeddedEdge(ge);
        else
          yymsg(0, "Unknown model edge %d", tags[i]);
      }
    }
  }
  else if(dim2 == 3){
    GRegion *gr = GModel::current()->getRegionByTag(tag2);
    if(!gr){
      yymsg(0, "Unknown model region with tag %d", tag2);
      return;
    }
    for(unsigned int i = 0; i < tags.size(); i++){
      if(dim == 0){
        GVertex *gv = GModel::current()->getVertexByTag(tags[i]);
        if(gv)
          gr->addEmbeddedVertex(gv);
        else
          yymsg(0, "Unknown model vertex with tag %d", tags[i]);
      }
      else if(dim == 1){
        GEdge *ge = GModel::current()->getEdgeByTag(tags[i]);
        if(ge)
          gr->addEmbeddedEdge(ge);
        else
          yymsg(0, "Unknown model edge with tag %d", tags[i]);
      }
      else if(dim == 2){
        GFace *gf = GModel::current()->getFaceByTag(tags[i]);
        if(gf)
          gr->addEmbeddedFace(gf);
        else
          yymsg(0, "Unknown model face with tag %d", tags[i]);
      }
    }
  }
}

void getAllElementaryTags(int dim, List_T *out)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  std::vector<GEntity*> entities;
  GModel::current()->getEntities(entities, dim);
  for(unsigned int i = 0; i < entities.size(); i++){
    double tag = entities[i]->tag();
    List_Add(out, &tag);
  }
}

void getAllPhysicalTags(int dim, List_T *out)
{
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  std::map<int, std::vector<GEntity*> > groups;
  GModel::current()->getPhysicalGroups(dim, groups);
  for(std::map<int, std::vector<GEntity*> >::iterator it = groups.begin();
      it != groups.end(); it++){
    double d = it->first;
    List_Add(out, &d);
  }
}

void getElementaryTagsForPhysicalGroups(int dim, List_T *in, List_T *out)
{
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  std::map<int, std::vector<GEntity*> > groups;
  GModel::current()->getPhysicalGroups(dim, groups);
  for(int i = 0; i < List_Nbr(in); i++){
    double num;
    List_Read(in, i, &num);
    std::map<int, std::vector<GEntity*> >::iterator it = groups.find(num);
    if(it != groups.end()){
      for(unsigned j = 0; j < it->second.size(); j++){
        double d = it->second[j]->tag();
        List_Add(out, &d);
      }
    }
  }
}

void getElementaryTagsInBoundingBox(int dim, double x1, double y1, double z1,
                                    double x2, double y2, double z2, List_T *out)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  SBoundingBox3d box(x1, y1, z1, x2, y2, z2);
  std::vector<GEntity*> entities;
  GModel::current()->getEntitiesInBox(entities, box, dim);
  for(unsigned int i = 0; i < entities.size(); i++){
    double d = entities[i]->tag();
    List_Add(out, &d);
  }
}

void setVisibility(int dim, int visible, bool recursive)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  std::vector<GEntity*> entities;
  GModel::current()->getEntities(entities, dim);
  for(unsigned int i = 0; i < entities.size(); i++){
    entities[i]->setVisibility(visible);
  }
}

void setVisibility(const std::vector<std::pair<int, int> > &dimTags,
                   int visible, bool recursive)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  for(unsigned int i = 0; i < dimTags.size(); i++){
    GEntity *ge = GModel::current()->getEntityByTag
      (dimTags[i].first, std::abs(dimTags[i].second));
    if(ge) ge->setVisibility(visible, recursive);
  }
}

void setColor(const std::vector<std::pair<int, int> > &dimTags,
              unsigned int val, bool recursive)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  for(unsigned int i = 0; i < dimTags.size(); i++){
    GEntity *ge = GModel::current()->getEntityByTag
      (dimTags[i].first, std::abs(dimTags[i].second));
    if(ge) ge->setColor(val, recursive);
  }
}

int NEWPOINT()
{
  int tag = GModel::current()->getGEOInternals()->getMaxTag(0) + 1;
  if(GModel::current()->getOCCInternals())
    tag = std::max(tag, GModel::current()->getOCCInternals()->getMaxTag(0) + 1);
  return tag;
}

int NEWLINE()
{
  int tag = 0;
  if(CTX::instance()->geom.oldNewreg)
    tag = NEWREG();
  else
    tag = GModel::current()->getGEOInternals()->getMaxTag(1) + 1;
  if(GModel::current()->getOCCInternals())
    tag = std::max(tag, GModel::current()->getOCCInternals()->getMaxTag(1) + 1);
  return tag;
}

int NEWLINELOOP()
{
  int tag = 0;
  if(CTX::instance()->geom.oldNewreg)
    tag = NEWREG();
  else
    tag = GModel::current()->getGEOInternals()->getMaxTag(-1) + 1;
  if(GModel::current()->getOCCInternals())
    tag = std::max(tag, GModel::current()->getOCCInternals()->getMaxTag(-1) + 1);
  return tag;
}

int NEWSURFACE()
{
  int tag = 0;
  if(CTX::instance()->geom.oldNewreg)
    tag = NEWREG();
  else
    tag = GModel::current()->getGEOInternals()->getMaxTag(2) + 1;
  if(GModel::current()->getOCCInternals())
    tag = std::max(tag, GModel::current()->getOCCInternals()->getMaxTag(2) + 1);
  return tag;
}

int NEWSURFACELOOP()
{
  int tag = 0;
  if(CTX::instance()->geom.oldNewreg)
    tag = NEWREG();
  else
    tag = GModel::current()->getGEOInternals()->getMaxTag(-2) + 1;
  if(GModel::current()->getOCCInternals())
    tag = std::max(tag, GModel::current()->getOCCInternals()->getMaxTag(-2) + 1);
  return tag;
}

int NEWVOLUME()
{
  int tag = 0;
  if(CTX::instance()->geom.oldNewreg)
    tag = NEWREG();
  else
    tag = GModel::current()->getGEOInternals()->getMaxTag(3) + 1;
  if(GModel::current()->getOCCInternals())
    tag = std::max(tag, GModel::current()->getOCCInternals()->getMaxTag(3) + 1);
  return tag;
}

int NEWREG()
{
  int tag = 0;
  for(int dim = -2; dim <= 3; dim++){
    if(dim)
      tag = std::max(tag, GModel::current()->getGEOInternals()->getMaxTag(dim) + 1);
  }
  tag = std::max(tag, GModel::current()->getGEOInternals()->getMaxPhysicalTag() + 1);
  if(GModel::current()->getOCCInternals()){
    for(int dim = -2; dim <= 3; dim++){
      if(dim)
        tag = std::max(tag, GModel::current()->getOCCInternals()->getMaxTag(dim) + 1);
    }
  }
  return tag;
}

int NEWFIELD()
{
#if defined(HAVE_MESH)
  return (GModel::current()->getFields()->maxId() + 1);
#else
  return 0;
#endif
}

int NEWPHYSICAL()
{
  if(CTX::instance()->geom.oldNewreg)
    return NEWREG();
  else
    return (GModel::current()->getGEOInternals()->getMaxPhysicalTag() + 1);
}


double treat_Struct_FullName_Float
(char* c1, char* c2, int type_var, int index, double val_default, int type_treat)
{
  double out;
  if(!c1 && gmsh_yysymbols.count(c2)){
    if (type_treat == 1) out = 1.; // Exists (type_treat == 1)
    else { // Get (0) or GetForced (2)
      if (type_var == 1) {
        gmsh_yysymbol &s(gmsh_yysymbols[c2]);
        if(s.value.empty()){
          out = val_default;
          if (type_treat == 0) yymsg(0, "Uninitialized variable '%s'", c2);
        }
        else
          out = s.value[0];
      }
      else if (type_var == 2) {
        gmsh_yysymbol &s(gmsh_yysymbols[c2]);
        if((int)s.value.size() < index + 1){
          out = val_default;
          if (type_treat == 0) yymsg(0, "Uninitialized variable '%s[%d]'", c2, index);
        }
        else
          out = s.value[index];
      }
      else {
        out = val_default;
      }
    }
  }
  else if(!c1 && type_treat == 1 && gmsh_yystringsymbols.count(c2)) {
    out = 1.;
  }
  else{
    if (type_var == 1) {
      std::string struct_namespace(c1? c1 : std::string("")), struct_name(c2);
      if(nameSpaces.getTag(struct_namespace, struct_name, out)) {
        out = val_default;
        if (type_treat == 0) yymsg(0, "Unknown variable '%s'", struct_name.c_str());
      }
    }
    else {
      out = val_default;
      if (type_treat == 0) yymsg(0, "Unknown variable '%s(.)'", c2);
    }
  }
  Free(c1); Free(c2);
  return out;
}

double treat_Struct_FullName_dot_tSTRING_Float
(char* c1, char* c2, char* c3, int index, double val_default, int type_treat)
{
  double out;
  std::string struct_namespace(c1? c1 : std::string("")), struct_name(c2);
  std::string key_member(c3);
  switch (nameSpaces.getMember
          (struct_namespace, struct_name, key_member, out, index)) {
  case 0:
    if (type_treat == 1) out = 1.; // Exists (type_treat == 1)
    break;
  case 1:
    if (!NumberOption(GMSH_GET, c2, 0, c3, out, type_treat==0))
      out = val_default;
    break;
  case 2:
    if (type_treat != 0) {
      const std::string * out_dummy = NULL;
      out = (nameSpaces.getMember
             (struct_namespace, struct_name, key_member, out_dummy))?
        val_default : 1.;
    }
    else {
      out = val_default;
      if (type_treat == 0)
        yymsg(0, "Unknown member '%s' of Struct %s", c3, struct_name.c_str());
    }
    break;
  case 3:
    out = val_default;
    if (type_treat == 0)
      yymsg(0, "Index %d out of range", index);
    break;
  }
  Free(c1); Free(c2);
  if (flag_tSTRING_alloc) Free(c3);
  return out;
}

int treat_Struct_FullName_dot_tSTRING_Float_getDim
(char* c1, char* c2, char* c3)
{
  int out;
  std::string struct_namespace(c1? c1 : std::string("")), struct_name(c2);
  std::string key_member(c3);
  switch (nameSpaces.getMember_Dim
          (struct_namespace, struct_name, key_member, out)) {
  case 0:
    break;
  case 1:
    out = 0;
    break;
  case 2:
    out = 0;
    yymsg(0, "Unknown member '%s' of Struct %s", c3, struct_name.c_str());
    break;
  }
  Free(c1); Free(c2);
  if (flag_tSTRING_alloc) Free(c3);
  return out;
}

char * treat_Struct_FullName_String
(char* c1, char* c2, int type_var, int index, char * val_default, int type_treat)
{
  std::string string_default(val_default? val_default : std::string(""));
  const std::string * out = NULL;
  std::string out_tmp;
  if(!c1 && gmsh_yystringsymbols.count(c2)){
    // Get (0) or GetForced (2)
    if(gmsh_yystringsymbols[c2].size() != 1){
      out = &string_default;
      if (type_treat == 0)
        yymsg(0, "Expected single valued string variable '%s'", c2);
    }
    else {
      out_tmp = gmsh_yystringsymbols[c2][0];
      out = &out_tmp;
    }
  }
  else{
    out = &string_default;
    if (type_treat == 0) yymsg(0, "Unknown string variable '%s'", c2);
  }
  char* out_c = (char*)Malloc((out->size() + 1) * sizeof(char));
  strcpy(out_c, out->c_str());
  Free(c1); Free(c2);
  return out_c;
}

char* treat_Struct_FullName_dot_tSTRING_String
(char* c1, char* c2, char* c3, int index, char * val_default, int type_treat)
{
  std::string string_default(val_default? val_default : std::string(""));
  const std::string * out = NULL;
  std::string out_tmp; // PD: we should avoid that -> StringOption() to be changed
  std::string struct_namespace(c1? c1 : std::string("")), struct_name(c2);
  std::string key_member(c3);
  switch (nameSpaces.getMember
          (struct_namespace, struct_name, key_member, out, index)) {
  case 0:
    break;
  case 1:
    if (StringOption(GMSH_GET, c2, 0, c3, out_tmp, type_treat==0))
      out = &out_tmp;
    else
      out = &string_default;
    break;
  case 2:
    out = &string_default;
    if (type_treat == 0)
      yymsg(0, "Unknown member '%s' of Struct %s", c3, struct_name.c_str());
    break;
  case 3:
    out = &string_default;
    if (type_treat == 0)
      yymsg(0, "Index %d out of range", index);
    break;
  }
  char* out_c = (char*)Malloc((out->size() + 1) * sizeof(char));
  strcpy(out_c, out->c_str());
  Free(c1); Free(c2);
  if (flag_tSTRING_alloc) Free(c3);
  return out_c;
}

