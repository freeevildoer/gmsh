#ifndef HXT_POINT_GEN_H
#define HXT_POINT_GEN_H

#include "hxt_api.h"
#include "hxt_mesh.h"
#include "hxt_point_gen_options.h"

/**
 * \brief Generate points on an initial mesh, given a crossfield and a sizemap.
 * \details blah blah blah \n
 *
 * \param mesh: a valid Delaunay initial mesh.
 * \param opt: options to give to the point generation algorithm \ref HXTPointGenOptions
 * \param sizemap: the mesh size on each vertex of the initial mesh.
 * \param directions: the directions on each vertex of the initial mesh.
 * \param[out] fmesh: the resulting mesh containing the generated vertices.
 */

HXTStatus hxtGeneratePointsMain(HXTMesh *mesh, 
                                HXTPointGenOptions *opt, 
                                double *sizemap, 
                                const double *directions,
                                HXTMesh *fmesh);   



#endif
