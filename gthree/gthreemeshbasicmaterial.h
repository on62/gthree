#ifndef __GTHREE_BASIC_MATERIAL_H__
#define __GTHREE_BASIC_MATERIAL_H__

#if !defined (__GTHREE_H_INSIDE__) && !defined (GTHREE_COMPILATION)
#error "Only <gthree/gthree.h> can be included directly."
#endif

#include <gthree/gthreemeshmaterial.h>
#include <gthree/gthreetexture.h>

G_BEGIN_DECLS


#define GTHREE_TYPE_MESH_BASIC_MATERIAL      (gthree_mesh_basic_material_get_type ())
#define GTHREE_MESH_BASIC_MATERIAL(inst)     (G_TYPE_CHECK_INSTANCE_CAST ((inst), \
                                                                     GTHREE_TYPE_MESH_BASIC_MATERIAL, \
                                                                     GthreeMeshBasicMaterial))
#define GTHREE_IS_MESH_BASIC_MATERIAL(inst)  (G_TYPE_CHECK_INSTANCE_TYPE ((inst), \
                                                                     GTHREE_TYPE_MESH_BASIC_MATERIAL))

struct _GthreeMeshBasicMaterial {
  GthreeMeshMaterial parent;
};

typedef struct {
  GthreeMeshMaterialClass parent_class;

} GthreeMeshBasicMaterialClass;

G_DEFINE_AUTOPTR_CLEANUP_FUNC (GthreeMeshBasicMaterial, g_object_unref)

GTHREE_API
GthreeMeshBasicMaterial *gthree_mesh_basic_material_new ();
GTHREE_API
GType gthree_mesh_basic_material_get_type (void) G_GNUC_CONST;

GTHREE_API
const graphene_vec3_t *gthree_mesh_basic_material_get_color       (GthreeMeshBasicMaterial *basic);
GTHREE_API
void              gthree_mesh_basic_material_set_color            (GthreeMeshBasicMaterial *basic,
                                                                   const graphene_vec3_t   *color);
GTHREE_API
void              gthree_mesh_basic_material_set_map              (GthreeMeshBasicMaterial *basic,
                                                                   GthreeTexture           *texture);
GTHREE_API
GthreeTexture  *  gthree_mesh_basic_material_get_map              (GthreeMeshBasicMaterial *basic);
GTHREE_API
void              gthree_mesh_basic_material_set_env_map          (GthreeMeshBasicMaterial *basic,
                                                                   GthreeTexture           *texture);
GTHREE_API
GthreeTexture  *  gthree_mesh_basic_material_get_env_map          (GthreeMeshBasicMaterial *basic);
GTHREE_API
float             gthree_mesh_basic_material_get_refraction_ratio (GthreeMeshBasicMaterial *basic);
GTHREE_API
void              gthree_mesh_basic_material_set_refraction_ratio (GthreeMeshBasicMaterial *basic,
                                                                   float                    ratio);
GTHREE_API
float             gthree_mesh_basic_material_get_reflectivity     (GthreeMeshBasicMaterial *basic);
GTHREE_API
void              gthree_mesh_basic_material_set_reflectivity     (GthreeMeshBasicMaterial *basic,
                                                                   float                    reflectivity);
GTHREE_API
GthreeOperation   gthree_mesh_basic_material_get_combine          (GthreeMeshBasicMaterial *basic);
GTHREE_API
void              gthree_mesh_basic_material_set_combine          (GthreeMeshBasicMaterial *basic,
                                                                   GthreeOperation          combine);

G_END_DECLS

#endif /* __GTHREE_BASICMATERIAL_H__ */
