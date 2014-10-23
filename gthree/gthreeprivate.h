#ifndef __GTHREE_PRIVATE_H__
#define __GTHREE_PRIVATE_H__

#include "gthreeobject.h"
#include "gthreeface.h"
#include "gthreelight.h"
#include "gthreebufferprivate.h"

struct _GthreeFace
{
  GObject parent;

  int a, b, c;
  graphene_vec3_t normal;
  GdkRGBA color;
  graphene_vec3_t *vertex_normals;
  GdkRGBA *vertex_colors;
  int material_index;
};

struct _GthreeLightSetup
{
  GdkRGBA ambient;

  int dir_len;
  int dir_count;
  GArray *dir_colors;
  GArray *dir_positions;

  int point_len;
  int point_count;
  GArray *point_colors;
  GArray *point_positions;
  GArray *point_distances;

  int spot_len;
  int spot_count;
  GArray *spot_colors;
  GArray *spot_positions;
  GArray *spot_distances;
  GArray *spot_directions;
  GArray *spot_angles_cos;
  GArray *spot_exponents;

  int hemi_len;
  int hemi_count;
  GArray *hemi_sky_colors;
  GArray *hemi_ground_colors;
  GArray *hemi_positions;
};

guint gthree_renderer_allocate_texture_unit (GthreeRenderer *renderer);
void gthree_texture_load (GthreeTexture *texture, int slot);

void   gthree_light_setup (GthreeLight       *light,
			   GthreeLightSetup *light_setup);

#endif /* __GTHREE_PRIVATE_H__ */
